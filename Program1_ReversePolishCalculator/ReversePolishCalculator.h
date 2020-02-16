#ifndef REVERSEPOLISHCALC_H
#define REVERSEPOLISHCALC_H

#include <iostream>
#include <string>
#include "Stack.h"

class ReversePolishCalculator
{
	std::string inputString;
	Stack* calculatorStack;

	bool isNumber(std::string s);
	bool isBinaryOperator(std::string s);
	void processWord(std::string word);
	double calculateOperation(double left, double right, std::string operation);

	void evaluateReversePolishExpression(std::string expression);

public:
	ReversePolishCalculator();
};


#endif // !REVERSEPOLISHCALC_H