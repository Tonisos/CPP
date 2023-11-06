#include "RPN.hpp"


bool isOperator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return true;
	return false;
}

double doTheMath(double n1, double n2, char operand)
{
	switch (operand)
	{
		case '+':
			return n1 + n2;
		case '-':
			return n1 - n2;
		case '*':
			return n1 * n2;
		case '/':
			return n1 / n2;
	}
	return 0;
}

void execute(string expression)
{
	std::stack<double> calcul;
	for (int i = 0; expression[i]; i++)
	{
		if (isdigit(expression[i]))
			calcul.push(double (expression[i] - '0'));
		else if (isOperator(expression[i]))
		{
			if (calcul.size() != 2)
			{
				cout << "invalid input" << endl;
				return ;
			}
			double n2 = calcul.top();
			calcul.pop();
			double n1 = calcul.top();
			calcul.pop();
			if (n2 == 0 && expression[i] == 0)
			{
				cout << "division by 0 is impossible";
				return;
			}
			calcul.push(doTheMath(n1, n2, expression[i]));
		}
		else if (expression[i] != ' ')
		{
			cout << "invalid input" << endl;
			return;
		}

	}
	cout << calcul.top() << endl;
}