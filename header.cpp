
#include <iostream>
#include <fstream>
#include <string>
#include "header.h"

using namespace std;

void header::writeLine(string fileName)
{
	string line;
	ifstream myfile (fileName);
	if(myfile.is_open())
	{
		while(getline(myfile,line))
		{
			cout << line << endl;
		}
		myfile.close();
	}
	else
	{
		cout << "Unable to open file" << endl;
	}
}
