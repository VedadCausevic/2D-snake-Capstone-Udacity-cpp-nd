#include "data.h"

// Default Constructor Definition
Data::Data(){};

// Methods Definition
void Data::SaveData(Player &player, int duration){
    //Create Output stream
    fstream outputstream;
    //format text file
    outputstream.open("outputstream.txt", ios::binary | ios::out | ios::app);

    if(outputstream.is_open()){
        outputstream << player.GetPlayerName() << " " <<player.GetPlayerAge()<<" "<< player.GetPlayerScore() << " " << duration << " seconds\n";
        outputstream.close();
    }
    else{
        cout << "ERROR: Requested file cannot be opened\n";
    }
}





 




