#include <set>
#include "ReversePolishCalculator.h"

ReversePolishCalculator::ReversePolishCalculator()
{
	// Read user input until user exits by entering "0"
	while (getline(std::cin, inputString))
	{
		// Re-initialize stack for 
		calculatorStack = new Stack();

		if (inputString == "0") 
		{
			// User exited
			break;
		}
		else 
		{
			// Calculate expression
			evaluateReversePolishExpression(inputString);
			
			// Clean up stack
			delete calculatorStack;
		}
		
	}
}

bool ReversePolishCalculator::isNumber(std::string s)
{
	bool decimal = false;
	for (std::string::iterator it = s.begin(); it != s.end(); ++it) {
		if (*it == '-' && it == s.begin() && s.length() > 1) {
			continue;
		}
		else if (*it == '.' && !decimal) {
			decimal = true;
		}
		else if (!std::isdigit(*it)) {
			return false;
		}
	}

	return true;
}

bool ReversePolishCalculator::isBinaryOperator(std::string s)
{
	// Create set of all possible operators
	std::set<std::string> operators = { "+", "-", "*", "/"};

	// Check whether the string is an operation
	bool is_operator = (operators.find(s) != operators.end());

	return is_operator;
}

void ReversePolishCalculator::processWord(std::string word)
{
	// If word is an operand, push to stack. 
	// If word is an operator, perform calculation.

	if (isNumber(word))
	{
		// Push number to stack
		calculatorStack->push(stof(word));
	}
	else if (isBinaryOperator(word))
	{
		double left, right;

		// Pop two operands
		try
		{
			right = calculatorStack->pop();
			left = calculatorStack->pop();
		}
		catch (char* msg)
		{
			std::cout << "Not enough operands" << std::endl;
			throw "Not enough operands";
		}


		// Calculate the operation and push result to stack
		calculatorStack->push(calculateOperation(left, right, word));
	}
	else if (word == "=")
	{
		// Check whether there are too many operations
		if (calculatorStack->count > 1)
		{
			std::cout << "Not enough operations" << std::endl;
			throw "Not enough operations";
		}
		// Check whether there are too many operands
		else if (calculatorStack->count <= 0)
		{
			std::cout << "Not enough operands" << std::endl;
			throw "Not enough operands";
		}
		// Print result
		else
		{
			std::cout << calculatorStack->pop() << std::endl;
		}
	}

}

double ReversePolishCalculator::calculateOperation(double left, double right, std::string operation)
{
	if (operation == "+")
	{
		return left + right;
	}
	else if (operation == "-")
	{
		return left - right;
	}
	else if (operation == "*")
	{
		return left * right;
	}
	else if (operation == "/")
	{
		if (right == 0)
		{
			std::cout << "Division by zero" << std::endl;
			throw "Division by Zero";
		}
		else
		{
			return left / right;
		}
	}
}



void ReversePolishCalculator::evaluateReversePolishExpression(std::string expression)
{
	// Split string by spaces
	std::string word = "";
	for (std::string::iterator it = inputString.begin(); it != inputString.end(); it++)
	{
		// If we hit a space, process the word and reset
		if (word.length() > 0 && std::isspace(*it))
		{
			try
			{
				processWord(word);
			}
			catch (char *error)
			{
				return;
			}

			word = "";
		}
		// If not a space, add char to word
		else
		{
			word += *it;
		}
	}

	// Process last word
	try
	{
		processWord(word);
	}
	catch (char* error)
	{
		return;
	}
}
