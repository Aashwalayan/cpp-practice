#include <iostream>
#include <ctime>
using namespace std;

string opponent(int num){
    
    switch(num){
        case 1:
        return "Opponent Drew Rock\n";
        break;

        case 2:
        return "Opponent Drew Paper\n";
        break;

        case 3:
        return "Opponent Drew Scissor\n";
        break;
    }

}

string player(int choice){
    
    switch(choice){
        case 1:
        return "You Drew Rock\n";
        break;

        case 2:
        return "You Drew Paper\n";
        break;

        case 3:
        return "You Drew Scissor\n";
        break;
    }
}

string winner(int choice, int num){
    int mul = 10 * choice + num;

    switch(mul){
        case 11:
        return "Its a Draw!\n";
        break;

        case 22:
        return "Its a Draw!\n";
        break;

        case 33: 
        return "Its a Draw!\n";
        break;

        case 21:
        return "You Win!\n";
        break;

        case 32:
        return "You Win!\n";
        break;

        case 13:
        return "You Win!\n";
        break;

        case 12:
        return "You lose!\n";
        break;

        case 23:
        return "You lose!\n";
        break;

        case 31:
        return "You lose!\n";
        break;
        
    }
}

int main(){

    int choice;
    int num;
    bool running = true;

    srand(time(0));

    do{

    
    num = (rand() % 3) + 1;

    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissor\n";
    cout << "4. Exit\n";
    cout << "Enter Your Choice: ";
    cin >> choice;

    if(choice == 1 || choice == 2 || choice == 3){
        cout << player(choice);
        cout << opponent(num);
        cout << winner(choice, num);
    }else if(choice == 4){
        cout << "Exiting...\n";
        running = false;
    }else{
        cout << "Invalid Choice\n";
    }

    }while(running);
    
}