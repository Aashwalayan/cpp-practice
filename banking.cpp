#include <iostream>

using namespace std;

void showBalance(double balance){
    cout << "Available Balance: \n" << balance;    
    }

double deposit(double balance){

    double amount;

    cout << "Enter the amount: ";
    cin >> amount;

    if(balance < 0){
        cout << "Cannot Deposit Negative Money!\n";
    }else{
        balance = balance + amount;
        cout << "Money Deposited: " << amount;
        cout << "\n\nYour New Balance is: \n" << balance;
    }

    return balance;

    }


double withdraw(double balance){

    double amount;

    cout << "Enter the amount: ";
    cin >> amount;

    if(balance < amount){
        cout << "Unsufficient Balance!\n";
    }else if(balance < 0) {
        cout << "Cannot Withdraw Negative Money!\n";
    }else{
        balance = balance - amount;
        cout << "Money Withdrawn: " << amount;
        cout << "\nYour New Balance is: \n" << balance;
    }

    return balance;

    }
      

int main(){


    double balance;
    int choice;
    bool running = true;

    cout << "---------------XYZ BANK---------------\n";
    cout << "Enter Starting Balance: ";
    cin >> balance;

    if(balance < 0){
        cout << "Balance Cannot be Less Than Zero\n";
    }

    do{

        cout << "\n\n1: Check Balance\n";
        cout << "2: Withdraw Money\n";
        cout << "3: Deposit Money\n";
        cout << "4: Exit\n";
        cin >> choice;

        switch(choice){
            case 1:
            showBalance(balance);
            break;

            case 2:
            balance = withdraw(balance);
            break;

            case 3:
            balance = deposit(balance);
            break;

            case 4:
            cout << "Exiting...\n";
            running = false;
            break;

            default:
            cout << "Invalid Input!";
            break;

        }
    }while(choice > 0 && choice < 4 && running);

}
