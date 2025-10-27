#include <iostream>

int main(){
    int people = 30;
    people = people + 1;

    std::cout << people << "\n";

    people = people - 3;
    std::cout << people << "\n";

    people += people;
    std::cout << people << "\n";

    people *= people;
    std::cout << people << "\n";

    people -= people;
    std::cout << people << "\n";

    people = 5;

    int remainder = people % 2;
    std::cout << remainder << "\n";


    //precedence of operation


    double total = 3 - 7 + 3 +(1 - 2) * 6 / 3 + 2 * 5;
    std::cout << total << "\n";

}