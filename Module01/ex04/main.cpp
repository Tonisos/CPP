#include <iostream>
#include <fstream>
#include <string>

using std::string;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::cout;


string put_in_string(ifstream* fluxIn)
{
	string text = "";
	char c;


	while(fluxIn->get(c))
		text += c;
		
	cout << text << endl;
	return (text);	

}

string replaceString(string text, string s1, string s2)
{
	while (text.find(s1, 0) != std::string::npos)
	{
		text = text.substr(0, text.find(s1, 0)) + s2 + text.substr(text.find(s1, 0) + s1.size());
	}
	cout << text << endl;
	return text;

}


int main(int argc, char **argv)
{
	if (argc != 4 || (string)argv[3] == (string)argv[2])
	{
		std::cout << "invalid arguments" << endl;  
		return 1;
	}

	string  const filename(argv[1]);
	string s1(argv[2]);
	string s2(argv[3]);
	string const filenameReplace = filename + ".replace"; 
	string text;

	ifstream fluxIn(filename.c_str());
	if (!fluxIn)
	{
		cout << "ERROR : Impossible to open the file" << endl;
		return 1;
	}

	ofstream fluxOut(filenameReplace.c_str());
	if (!fluxOut)
	{
		cout << "ERROR : Impossible to create the file" << endl;
		return 1;
	}
	text = put_in_string(&fluxIn);
	cout << "------------------" << endl;
	text = replaceString(text, s1, s2);

	fluxOut << text;
	return 0;

}
