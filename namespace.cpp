#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}


int main(){
    using std :: cout;
    using std :: string;

    using namespace second;

   
    std :: cout << x << "\n";
    std :: cout << first :: x << "\n";
    std :: cout << second :: x;


    //print stuff without using std because we declared that beforehand

    cout << "\nhello";

    //declare string objects is now easier

    string text =  "hello my name is aashwalayan";

    cout << "\n" << text;

    return 0;

}