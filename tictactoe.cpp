#include <iostream>
#include <ctime>

using namespace std;

void drawBoard(char place[]){
    cout << "\n";
    cout << "     |     |     \n";
    cout << "  " << place[0] <<"  |  " << place[1] << "  |  "<< place[2] << "  " << "\n";
    cout << "     |     |     \n";
    cout << "-----+-----+-----\n";
    cout << "     |     |     \n";
    cout << "  " << place[3] <<"  |  " << place[4] << "  |  "<< place[5] << "  " << "\n";
    cout << "     |     |     \n";
    cout << "-----+-----+-----\n";
    cout << "     |     |     \n";
    cout << "  " << place[6] <<"  |  " << place[7] << "  |  "<< place[8] << "  " << "\n";
    cout << "     |     |     \n";
    cout << "\n";


}
    
void playerTurn(char place[], char player){
    int number;
    do{
        cout << "Enter A Number(1-9): ";
        cin >> number;
        if(place[number - 1] == ' '){
        place[number - 1] = player;
        break;
        }
    }while(number > 0 && number < 10 || place[number - 1] != ' ');
}

void opponentTurn(char place[], char opponent){
    srand(time(0));
    int random;
    do{
        random = (rand() % 10) + 1;
        if(place[random - 1] == ' '){
            place[random - 1] = opponent;
            break;
        }
    }while(place[random - 1] != ' ');
}

bool checkWinner(char place[], char player){
    if((place[0] != ' ') && (place[0] == place[1]) && (place[1] == place[2])){
        place[0] == player ? cout << "You Win!\n" : cout << "You Lose!\n";
    }else if((place[3] != ' ') && (place[3] == place[4]) && (place[4] == place[5])){
        place[3] == player ? cout << "You Win!\n" : cout << "You Lose!\n";
    }else if((place[6] != ' ') && (place[6] == place[7]) && (place[7] == place[8])){
        place[6] == player ? cout << "You Win!\n" : cout << "You Lose!\n";
    }else if((place[0] != ' ') && (place[0] == place[3]) && (place[3] == place[6])){
        place[0] == player ? cout << "You Win!\n" : cout << "You Lose!\n";
    }else if((place[1] != ' ') && (place[1] == place[4]) && (place[4] == place[7])){
        place[1] == player ? cout << "You Win!\n" : cout << "You Lose!\n";
    }else if((place[2] != ' ') && (place[2] == place[5]) && (place[5] == place[8])){
        place[2] == player ? cout << "You Win!\n" : cout << "You Lose!\n";
    }else if((place[0] != ' ') && (place[0] == place[4]) && (place[4] == place[8])){
        place[0] == player ? cout << "You Win!\n" : cout << "You Lose!\n";
    }else if((place[2] != ' ') && (place[2] == place[4]) && (place[4] == place[6])){
        place[2] == player ? cout << "You Win!\n" : cout << "You Lose!\n";
    }else{
        return false;
    }

    return true;
}

bool checkTie(bool checkWinner, int turns){
    if(checkWinner && turns == 0){
        cout << "Its A Tie\n";
        return true;
    }
    return false;
}

int main(){
    char player = 'X';
    char opponent = 'O';
    bool running = true;

    char place [] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}; 
    drawBoard(place);
    int turns = 9;
    int choice;
    
    while(turns > 0){
        playerTurn(place, player);
        turns--;
        checkWinner(place, player);
        checkTie(checkWinner, turns);
        drawBoard(place);
        opponentTurn(place, opponent);
        turns--;
        checkWinner(place, player);
        checkTie(checkWinner, turns);
        drawBoard(place);

    }
    

}