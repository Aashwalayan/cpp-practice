#include<iostream>

int main(){

    std::string name;

    int age;

    std::cout << "Whats your name? \n";
  //std::cin >> name;   only takes input before the space then cuts out the rest
    std::getline(std::cin, name); //takes the full string input


    std::cout << "Whats your age?\n";
    std::cin >> age;
    std::cout << "Your name is " << name << ", you are " << age << " years old!";

    return 0;
}