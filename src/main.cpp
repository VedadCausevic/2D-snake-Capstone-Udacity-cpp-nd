#include "controller.h"
#include "game.h"
#include "renderer.h"
#include "data.h"
#include "Player.h"
#include "interface.h"

int main() {
  constexpr size_t kFramesPerSecond{60};
  constexpr size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr size_t kScreenWidth{640};
  constexpr size_t kScreenHeight{640};
  constexpr size_t kGridWidth{32};
  constexpr size_t kGridHeight{32};

  Interface interface;
  Player player;
  Data data;
  string player_name;
  int player_age;
  int gametime, duration, start, end;
  interface.IntroMessage();
  interface.AskForName();
  player_name = interface.Enter_Name();
  interface.AskForAge();
  player_age = interface.Enter_Age();
  player.SetPlayerName(player_name);
  player.SetPlayerAge(player_age);
  player.SetPlayerGameTime(gametime);
    start = player.GetPlayerGameTime();
    Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
    Controller controller;
    Game game(kGridWidth, kGridHeight);
    game.Run(controller, renderer, kMsPerFrame);
    player.SetPlayerGameTime(gametime);
    end = player.GetPlayerGameTime();
    duration = end - start;
    cout << "Game has terminated successfully!\n";
    cout << "Player: " << player.GetPlayerName() << "\n";
    cout << "Score: " << game.GetScore() << "\n";
    cout << "Duration: " << duration << " seconds\n";
    cout << "Size: " << game.GetSize() << "\n";
    player.SetPlayerScore(game.GetScore());
    player.GetPlayerGameTime();
    data.SaveData(player, duration);
  return 0;
}