#include <iostream>
#include <cstring>
#include <cstdlib>
#include "variable.h"

using namespace std;


variable::variable(string s){
	int length;
	string *tokens = getTokens(s, length);
	for (int i = 0; i < length; ++i) {
		std::cout << tokens[i] << std::endl;
	}
}

string* variable::getTokens(string s, int &length){
	string delimiter = "*";
	int tokenSize = 1;
	for (int i = s.find(delimiter, 0); i != std::string::npos; i = s.find(delimiter, i) ) {
		tokenSize++;
		i++;
	}
	std::cout << tokenSize << std::endl;
	string *tokens = new string[tokenSize];
	int oldPos = -1;
	int pos;
	int count = 1;
	while((pos = s.find(delimiter)) != std::string::npos){
		string token = s.substr(0, pos);
		tokens[count - 1] = token;
		s.erase(0, pos +1 );
		count++;
	}
	tokens[count - 1] = s;
	length = tokenSize;
	return tokens;

}

variable::~variable(){
}

