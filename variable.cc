#include <iostream>
#include "variable.h"
#include "alg.h"

using namespace std;


variable::variable(string s){
	int length;
	string *tokens = getTokens(s, length, "*");
	for (int i = 0; i < length; ++i) {
		std::cout << tokens[i] << std::endl;
	}
}
variable::~variable(){
}

