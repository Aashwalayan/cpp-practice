#include <iostream>
using namespace std;

int main(){

    //using continue skips that iteration of the loop
    for(int i = 0; i <= 20; i++){
        if(i % 2 == 0){
            continue;
        }else{
            cout << i << " ";
        }
    }

    //using break completely stops the loop after that iteration

    cout << "\n";

    for(int i = 0; i <= 20; i++){
        if(i > 15){
            break;
        }else{
            cout << i << " ";
        }
    }
}