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
			return n2 - n1;
		case '*':
			return n1 * n2;
		case '/':
			return n2 / n1;
	}
	return 0;
}

void execute(string expression)
{
	std::queue<double> calcul;
	for (int i = 0; expression[i]; i++)
	{
		cout << "====" << calcul.front() << endl;
		if (isdigit(expression[i]))
		{
			cout << "isdigit  " << expression[i] << endl;
			calcul.push(double (expression[i] - '0'));
		}
		else if (isOperator(expression[i]))
		{
			cout << "operator is :  " << expression[i] << endl;
			if (calcul.size() < 2)
			{
				cout << "invalid input" << endl;
				break;
			}

			double n1 = calcul.front();
			calcul.pop();
			double n2 = calcul.front();
			calcul.pop();
			cout << "n1 : " << n1 << "  n2 : " << n2 << endl;
			if (n2 == 0 && expression[i] == '/')
			{
				cout << "division by 0 is impossible";
				return;
			}
			calcul.push(doTheMath(n2, n1, expression[i]));
		}
		else if (expression[i] != ' ')
		{
			cout << "invalid input" << endl;
			return;
		}

	}
	cout << calcul.front() << endl;
}