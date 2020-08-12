#include "game_history.h"

// Default Constructor Definition
History::History(){};

// Methods Definition
void History::SaveHistory(Player &player){
    //Create Output file stream
    fstream Game_History;
    //format text file
    Game_History.open("Game_History.txt", ios::binary | ios::out | ios::app);

    if(Game_History.is_open()){
        Game_History << player.GetPlayerName() << " " << player.GetPlayerScore() << " " << player.GetPlayerGameTime() << "\n";
        Game_History.close();
    }
    else{
        cout << "ERROR: Requested file cannot be opened\n";
    }
}

vector<shared_ptr<Player>> History::ReadHistory(){
    string line, name, game_time;
    int score;
    ifstream Game_History("Game_History.txt");

    if(Game_History.is_open()){
        while(getline(Game_History, line))
        {
            istringstream linestream(line);
            if(linestream >> name >> score >> game_time){
                auto shared_player = make_shared<Player>(name, score, game_time);
                _history.emplace_back(move(shared_player));
            }
        }
        Game_History.close();
        cout << "Game History is read successfully\n";
        return _history;
    }
}

vector<shared_ptr<Player>> History::SortHistory(vector<shared_ptr<Player>> &v){
    sort(v.begin(), v.end(), [] 
    (const shared_ptr<Player>& player_a, shared_ptr<Player>& player_b){
        return player_a->GetPlayerScore() > player_b->GetPlayerScore();
    });
    return v;
}

void History::DisplayHistory(){
auto ordered_history = _history;
ordered_history = this->SortHistory(ordered_history);
    if(ordered_history.size() > 0){
        int count = 1;
        for(auto i : ordered_history){
            cout << count << ". " << i->GetPlayerName() << ", Score: " << i->GetPlayerScore() << ", GameTime: " << i->GetPlayerGameTime() << "\n";
            count++;
        }
    }
    else{
        cout << "ERROR: No data to display\n";
    }
}

Player History::GetHighScore(){
    auto history = _history;
    history = this->SortHistory(history);
    auto tmp = history.front();
    auto high_score = (*tmp.get());
    return high_score;
}

void History::DisplayHighScore(){
    auto high_score = this->GetHighScore();
    cout << "Highest Score Player: " << high_score.GetPlayerName() << ", Score: " << high_score.GetPlayerScore() << ", GameTime: " << high_score.GetPlayerGameTime() << ". \n";
}
