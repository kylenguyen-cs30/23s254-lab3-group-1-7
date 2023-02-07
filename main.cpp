
#include <iostream>
#include <string>
#include "header.h"

using namespace std;

int main() {

	string fileName = "README.md";
	header printing;
	printing.writeLine(fileName);
	return 0;
}
