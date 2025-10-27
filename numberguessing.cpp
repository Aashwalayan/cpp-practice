#include <iostream>
#include <ctime>

using namespace std;

int main(){

    int num;
    int guess;
    int tries = 0;

    srand(time(0));

    num = rand() % 100 + 1;

    cout << "---NUMBER GUESSING GAME----\n";

    do{
        cout << "Enter a number: ";
        cin >> guess;

        if(guess > 100 || guess < 1){
            cout << "Invalid Guess! (1 - 100)\n";
        }else if (guess > num){
            cout << "Guess Lower!\n";
            tries++;
        }else if (guess < num){
            cout << "Guess Higher!\n";
            tries++;
        }else if (guess == num) {
            cout << "You guessed the number!\n";
            tries++;
            tries == 1 ? cout << "You took 1 Try!" : cout << "You took " << tries << " tries!";
            break;

        }else{
            cout << "Invalid Guess!\n";
        }

    }while(num != guess);
    

}