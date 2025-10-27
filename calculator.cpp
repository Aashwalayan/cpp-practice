#include <iostream>

using namespace std;
int main(){
    double x;
    double y;

    char oprtr;

    cout << "Which Operation Would Like To Do? (+ - * /): ";
    cin >> oprtr;

        cout << "Enter The First Number: ";
        cin >> x;

        cout << "Enter The Second Number: ";
        cin >> y;
        
        switch(oprtr){
            case '+':
            cout << "The Added Result is " << x + y;
            break;

            case '-':
            cout << "The Subtracted Result is " << x - y;
            break;

            case '*':
            cout << "The Multiplied Result is " << x * y;
            break;

            case '/':
            cout << "The Divided Result is " << x / y;
            break;

            default:
            cout << "Error";
        }


    return 0;
}