#include <iostream>
#include <cstdlib>
#include "variable.h"
#include "alg.h"

using namespace std;


variable::variable(string s){
	int length;
	string *tokens = getTokens(s, length, "*");
	int init = 0;
	if( isNumber(tokens[0] ) ){
		number = atoi(tokens[0].c_str());
		init = 1;
	}
	var = new string[length - init];
	power = new int[length - init];
	for ( int i = init ; i < length; ++i) {
		int varLength, pos = i - init;
		string *varTokens = getTokens(tokens[i], varLength, "^");
		var[pos ] = varTokens[0];
		if ( varLength > 1)
			power[pos] = atoi(varTokens[1].c_str());
		else
			power[pos] = 1;
	}
	/*{{{*/
//	std::cout << number << std::endl;
//	for (int i = init; i < length; ++i) {
//		std::cout << var[ i- init] << " ^" << power[ i- init] << std::endl;
//	}
	/*}}}*/
}


variable::~variable(){
}

