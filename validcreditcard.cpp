//using luhn's algorithm

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int getDigit(int number){
    return number % 10 + (number / 10 % 10);
}

int sumEvenDigit(string cardNumber){
    int sum = 0;
    for(int i = cardNumber.length() - 2; i >= 0; i -= 2){
        sum += getDigit((cardNumber[i] - '0')) * 2;
    }
    return sum;
}

int sumOddDigit(string cardNumber){
    int sum = 0;
    for(int i = cardNumber.length() - 1; i >= 0; i -= 2){
        sum += cardNumber[i] - '0';
    }
    return sum;
}



int main(){
    
    string cardNumber;
    cout << "Enter Credit Card Number: ";
    cin >> cardNumber;
    
    int result = sumEvenDigit(cardNumber) + sumOddDigit(cardNumber);

    if(result % 10 == 0){
        cout << "Valid!\n";
    }else{
        cout << "Invalid!\n";
    }

    return 0;
}