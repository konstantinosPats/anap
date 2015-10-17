#include <iostream>
#include <cstring>
#include <cstdlib>


using namespace std;

string* getTokens(string s, int &length, string delimiter){
	int tokenSize = 1;
	for (unsigned long i = s.find(delimiter, 0); i != std::string::npos; i = s.find(delimiter, i) ) {
		tokenSize++;
		i++;
	}
	string *tokens = new string[tokenSize];
	unsigned long pos;
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


int isNumber(string input){
	for (unsigned long i = 0; i < input.size(); ++i) {
		if( input[i] > '9' or input[i] < '0')
			return 0;
	}
	return 1;
}
