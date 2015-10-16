#ifndef VARIABLE_H_7JG0Q9ZK
#define VARIABLE_H_7JG0Q9ZK
#include <iostream>

class variable
{
public:
	variable (std::string);
	virtual ~variable ();

private:
	int number;
	std::string *var;
	std::string* getTokens(std::string , int& );
};

#endif /* end of include guard: VARIABLE_H_7JG0Q9ZK */
