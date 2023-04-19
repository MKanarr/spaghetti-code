#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    
    char c = scaryFunc();
    String str = scaryString(c);
    if(str == "Hello UTD"){
        std::cout << str << std::endl; 
    }
    
    //ascii array of all 52 letters
    //have an if statement for all 8 letters to check if the ascii value of that letter is equal to that index of the array
    //return each time you find a letter
    //another set of if statements to figure out where it goes in the string
    //send the string index to a third function
    //variable for each letter and store 
    //check if it has all the letters after each return
    //NO ELSE IFS!!!!!!!!!!
    //separate classes for each word
}

int scaryFunc()
{
    std::cout << "Hello UTD" << std::endl;
    int ascii[58];
    int k = 0;
    for (int i = 65; i <= 122; i++)
    {
       ascii[k] = i;
       k++;
    }
    
    int numberOfL = 0;
    int num = (rand() % 122) + 65;
    if(num == 72){
        char h = (char)num;
    }
    if(num == 101){
        char e = (char)num;
        return e;
    }
    if(num == 108){
        if(numberOfL < 2){
            char l = (char)num;
            numberOfL++;
        }
    }
    if(num == 111){
        char o = (char)num;
    }
    if(num == 85){
        char U = (char)num;
    }
    if(num == 84){
        char T = (char)num;
    }
    if(num == 68){
        char D = (char)num;
    }
    
    void scaryString(char c, String str){
        String s = "";
        if(str == ""){
            s = c;  
            return s;
        }
        if(str == "H" && c == 'e'){
            s = h + c;
            return s;
        }
        if(str == "He" && c == 'l'){
            s = h + c;
            return s;
        }
        if(str == "Hel" && c == 'l'){
            s = h + c;
            return s;
        }
        if(str == "Hell" && c == 'o'){
            s = h + c;
            return s;
        }
        if(str == "Hello" && c == 'e'){
            s = h + c;
            return s;
        }
        if(str == "H" && c == 'U'){
            s = h + " ";
            s = h + c;
            return s;
        }
        if(str == "Hello U" && c == 'T'){
            s = h + c;
            return s;
        }
        if(str == "Hello UT" && c == 'D'){
            s = h + c;
            return s;
        }
    }
}
