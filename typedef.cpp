//typedef is a key word used to create an additional name for a datatype
// new identifier for an existing name
// reduces typos and helps with readability


#include <iostream>
#include <vector>

typedef std::string text_t;
//typedef int number_t;

//typedef has been mostly replaced by the "using" keyword
//it works better with templates

using number_t = int;

int main(){

    text_t text = "hello";
    number_t age = 20;

    std::cout<<text<<"\n";
    std::cout<<age;

    return 0;
}