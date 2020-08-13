#include "controller.h"
#include "game.h"
#include "renderer.h"
#include "game_history.h"
#include "Player.h"
#include "game_menu.h"

int main() {
  constexpr size_t kFramesPerSecond{60};
  constexpr size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr size_t kScreenWidth{640};
  constexpr size_t kScreenHeight{640};
  constexpr size_t kGridWidth{32};
  constexpr size_t kGridHeight{32};

  Menu menu;
  Player player;
  History history;
  string player_name;
  int gametime, duration, first, last;
  menu.MainMenu();
  int mode = menu.Input_number();
  if (mode == menu.kPlay){
    menu.GetPlayerName();
    player_name = menu.Input_string();
    player.SetPlayerName(player_name);
    player.SetPlayerGameTime(gametime);
    first = player.GetPlayerGameTime();
    Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
    Controller controller;
    Game game(kGridWidth, kGridHeight);
    game.Run(controller, renderer, kMsPerFrame);
    player.SetPlayerGameTime(gametime);
    last = player.GetPlayerGameTime();
    duration = last - first;
    cout << "\033[2J\033[1;1H";
    cout << "Game has terminated successfully!\n";
    cout << "Player: " << player.GetPlayerName() << "\n";
    cout << "Score: " << game.GetScore() << "\n";
    cout << "Duration: " << duration << " seconds\n";
    cout << "Size: " << game.GetSize() << "\n";
    player.SetPlayerScore(game.GetScore());
    player.GetPlayerGameTime();
    history.SaveHistory(player, duration);
  }
  else if(mode == menu.kHistory){
    auto player_history = history.ReadHistory();
    if(!(player_history.size() > 0)){
      cout << "No Previous Data Stored!\n";
    }
    menu.HistoryMenu();
    mode = menu.Input_number();
    if(mode == menu.kUnordered_History){
      history.DisplayHistory();
    }
    else if(mode == menu.kOrdered_History){
      history.DisplayOrderedHistory();
    }
    else if(mode == menu.kHighest_Score){
      history.DisplayHighScore();
    }
  }
  return 0;
}