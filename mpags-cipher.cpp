#include <iostream>
int main(){
    //this is a comment
    /* multiline comment
    */
    std::cout << "Hello World!\n";

    int a{4};
    double b = 4.2;

    a = 4 + 1;

    int c = b; //no flags
    int d{b}; //there is a warning

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;



    return 0;
}