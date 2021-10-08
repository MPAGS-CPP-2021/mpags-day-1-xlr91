#include <iostream>
#include <string>
int main(){
    //this is a comment
    /* multiline comment
    */

    /* Exercise 1
    std::cout << "Hello World!\n";
    */

    //Exercise 2
    int a{4};
    double b = 4.2;

    a = 4 + 1;

    int c = b; //no flags
    int d{b}; //there is a warning

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;

    

    /* //Exercise 3
    const double e{9.81};
    std::cout << e << std::endl;
    int f{7}; //const will not compile
    f = 8;

    std::string mymsg = "Hello There";
    std::cout << mymsg << std::endl;

    */ 
   
    //Exercise 4
    int g{9};
    double h{10.1};

    std::cout << h/g << std::endl;
    std::cout << g/g << std::endl;

    std::string newmsg = "General Kenobi";
    char newchar = newmsg[2];
    std::cout << newchar << std::endl;
    


    

    return 0;
}