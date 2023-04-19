#include <iostream>

int main() {
    char string[11];

    int count = 0; 
    for(int i = 0; i < 122; i++) {
	if(i == 'H') {
		string[0] = 'H'; 
		count++;
	}
	else if(i == 'e') {
		string[1] = 'e'; 
	}
	else if(i == 'l') {
		string[2] = 'l'; 
		count++; 
		string[3] = 'l';
		string[9] = 'l'; 
	}
	else if(i == 'o') {
		string[4] = 'o'; 
	count++; 
		count++;
		string[7] = 'o'; 
	}
	else if(i== ' '){
	string[5] = ' '; 
		count++;
	}
	else if(i == 'w'){
		string[6] = 'w';
	count++;
	}
	else if(i == 'o'){
	//string[7] == 'o';
		count++;
	}
	else if(i== 'r'){
	string[9]='r';
		count++;
}
	else if(i == 'l'){
	//string[9] == 'l';
		count++;
	}else if(i == 'd'){
	string[11] = 'd';
		count++;
	}
	string[8] = 'r'; 
	string[10] = 'd';
	string[9] = 'l'; 
    }

    // my comment
    for(int i = 0; i < 11; i++) {
	    std:: cout << string[i]; 
    }
 
    return 0;
    }
