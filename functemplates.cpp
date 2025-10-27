// function templates are used to describe a fucntion
// can be used to create any number of overloaded
// functions, each using different datatypes

#include <iostream>
using namespace std;

namespace my { 
    template<typename T, typename U>

// T max(T x, T y){
//     return (x > y) ? x : y;
// }

//to have to different datatypes

auto max(T x, U y){
    return (x > y) ? x : y;
}

}

int main(){
    cout << my::max(1 , 2) << "\n";
    cout << my::max(0.1, 3.2) << "\n";
    cout << my::max("1", "3") << "\n";
    cout << my::max(1.5, 1) << "\n";
}

