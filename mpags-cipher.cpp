#include <iostream>
#include <string>
#include <vector>

std::string changenumtochar(char c){
    //generic function that wraps the switch case in a nice place
    std::string string_output = "";
    switch(c){
        case '0':
            string_output = "ZERO";
            break;
        case '1':
            string_output = "ONE";
            break;
        case '2':
            string_output = "TWO";
            break;
        case '3':
            string_output = "THREE";
            break;
        case '4':
            string_output = "FOUR";
            break;
        case '5':
            string_output = "FIVE";
            break;
        case '6':
            string_output = "SIX";
            break;
        case '7':
            string_output = "SEVEN";
            break;
        case '8':
            string_output = "EIGHT";
            break;
        case '9':
            string_output = "NINE";
            break;       
    }
    return string_output;
}

int main(int argc, char* argv[]){
    const std::vector<std::string> cmdLineArgs { argv, argv + argc};

    for(size_t i{0}; i < cmdLineArgs.size(); ++i){
        //std::cout << cmdLineArgs[i] << std::endl;
        if(cmdLineArgs[i] == "-h" || cmdLineArgs[i] == "--help"){
            std::cout << "Usage: ./mpags-cipher" << std::endl;
            std::cout << "Options:" << std::endl;
            std::cout << "there are no options at the moment" << std::endl;
            //return 0;
        }
        if(cmdLineArgs[i] == "--version"){
            std::cout << "Version: 0.1.0" << std::endl;

        }
        if(cmdLineArgs[i] == "-i"){
            std::cout << "input: " << cmdLineArgs[i+1] << std::endl;
            //do some storing stuff here, for now just return0
            //return 0;
            
        }
        if(cmdLineArgs[i] == "-o"){
            std::cout << "output: " << cmdLineArgs[i+1] << std::endl;
            //do some storing stuff here, for now just return0
            //return 0;
            
        }
        
    }

    /*
    Take each letter from user input and in each case
    - convert to upper case    
    - change numbers to words
    - Ignore any other (non-alpha characters)
    - In each case, add result to a string variable
    print out the new string
    */
   
    //initialise a couple of important variables
    char in_char{'y'};
    char input_char{'x'};
    std::string user_input = "";
    std::string output = "";
    
    while(std::cin >> input_char){
        in_char = input_char;
        if(isalpha(in_char)){
            in_char = toupper(in_char);
            output.push_back(in_char);
        }
        if(isdigit(in_char)){
            output.append(changenumtochar(in_char));
        }
    }

    /* Initial attempt
    std::cin >> user_input; //asks for user input to transliterate (part of initial attempt)
    for(int i{0}; i < user_input.length(); ++i){
        in_char = user_input[i];
        if(isalpha(in_char)||isdigit(in_char)){ //checks if alphanumeric
            if(isdigit(in_char)){
                output.append(changenumtochar(in_char));
            } else {
                in_char = toupper(in_char);
                output.push_back(in_char);
            }
        }
    }
    */

    std::cout << output << std::endl;

}
