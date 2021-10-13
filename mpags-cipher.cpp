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

    //Section that handles command line arguments
    const std::vector<std::string> cmdLineArgs { argv, argv + argc};

    bool helpflag = false;
    std::string inputfile = "default.txt";
    std::string outputfile = "default.txt";

    for(size_t i{0}; i < cmdLineArgs.size(); ++i){
        if(cmdLineArgs[i] == "-h" || cmdLineArgs[i] == "--help"){
            helpflag = true;
        }

        if(cmdLineArgs[i] == "--version"){
            std::cout << "Version: 0.1.0" << std::endl;
        }
        if(cmdLineArgs[i] == "-i"){
            inputfile = cmdLineArgs[i+1]; 
            std::cout << "input: " << inputfile << std::endl;
        }

        if(cmdLineArgs[i] == "-o"){
            outputfile = cmdLineArgs[i+1]; 
            std::cout << "output: " << outputfile << std::endl;
        }
    }

    if(helpflag == true){
        std::cout << "Usage: ./mpags-cipher [options]" << std::endl;
        std::cout << " " << std::endl;
        std::cout << "Description:" << std::endl;
        std::cout << "(for now) Takes in text from file or input at terminal    " << std::endl;
        std::cout << "and transcribes it to ciphertext." << std::endl;
        std::cout << "Removes non-alphanumerical text, converts numbers to text, and capitalises" << std::endl;
        std::cout << "When inputting text from command line, press ctr+D to stop and transcribe" << std::endl;
        std::cout << " " << std::endl;
        std::cout << "Options:" << std::endl;
        std::cout << "  -i  [filename] Specify the input file" << std::endl;
        std::cout << "  -o  [filename] Specify the output file" << std::endl;
        std::cout << "  --version      Print current version of program" << std::endl;
        std::cout << "  -h, --help     Print the current help text" << std::endl;
        return 0;
        /*
        Note: the help text code was written with the intent that anytime the help text is called
        the program will not run at all, because the user wants to see the help text and not run the program
        If this was not what was asked from the homework, and that it was expected that the user 
        can run the help text _and_ use the progam, simply copy the code over to where helpflag = true above
        */
        
    }
    
    //start of actual program
    char temp_char{'y'};
    char input_char{'x'};
    std::string user_input = "";
    std::string output = "";
    
    while(std::cin >> input_char){
        temp_char = input_char;
        if(isalpha(temp_char)){
            temp_char = toupper(temp_char);
            output.push_back(temp_char);
        }
        if(isdigit(temp_char)){
            output.append(changenumtochar(temp_char));
        }
    }
    std::cout << output << std::endl;

    /* Initial attempt (saved for posterity)
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

    

}
