#include "RPN.hpp"


bool isOperator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return true;
	return false;
}

double doTheMath(double n1, double n2, char operand)
{
	cout << n1 << "    " << n2 << "   "  << "operand is "<<operand << endl;
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
	std::queue<double> calcul;
	for (int i = 0; expression[i]; i++)
	{
		// cout << "====" << calcul.front() << endl;
		if (isdigit(expression[i]))
		{
			// cout << "isdigit  " << expression[i] << endl;
			calcul.push(double (expression[i] - '0'));
		}
		else if (isOperator(expression[i]))
		{
			// cout << "operator is :  " << expression[i] << endl;
			if (calcul.size() < 2)
			{
				cout << "invalid input" << endl;
				break;
			}
			else if (calcul.size() == 2)
			{
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
				calcul.push(doTheMath(n1, n2, expression[i]));
			}
			else if (calcul.size() > 2)
			{
				std::queue<double>temp;
				for (int j = calcul.size(); j > 0 ; j--)
				{
					temp.push(calcul.front());
					calcul.pop();
					
				}
					cout << calcul.front()<< endl;
					double n1 = temp.front();
					temp.pop();
					double n2 = temp.front();
					temp.pop();
					cout << "n1 : " << n1 << "  n2 : " << n2 << endl;
					cout << temp.front() << endl;
				calcul.push(doTheMath(n1, n2, expression[i]));
				for (int j = temp.size(); j > 0 ; j--)
				{
					calcul.push(temp.front());
					temp.pop();
				}

				
			}

		}
		else if (expression[i] != ' ')
		{
			cout << "invalid input" << endl;
			return;
		}
		cout << "====" << calcul.front() << endl;

	}
	cout << calcul.front() << endl;
}