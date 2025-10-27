#include <iostream>
using namespace std;


int main(){

    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "The length of your name is: " << name.length() << "\n";
    cout << name.empty() <<"\n";
    cout << name.append("jcainwc") << "\n";
    name.clear();
    cout << name.append("idkdik") << "\n";
    

}