#include "ClipboardXX.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime> 
#include <windows.h>
#include <fstream>

//using namespace std;

void charRandomizer(long int length, std::string symbols);

int main() {

	long int length;
	std::string symbols;

	//Logs the user settings
	std::cout << "Enter password length: ";
	std::cin >> length;
	std::cin.ignore();
	std::cout << "Enter letters, numbers, and symbols not allowed: ";
	getline(std::cin, symbols);

	charRandomizer(length, symbols);

	return 0;

}

void charRandomizer(long int iLength, std::string symbols) {

	std::string sTemp;
	long int iTemp;

	//Puts each not wanted symbols in the vector-------------------
	std::vector<char> vUnwantedLetNumSym;
	char cTemp;
	srand(time(0));
	if (symbols.length() > 0)
	{
		for (int i = 0; i < symbols.length(); i++)
		{
			cTemp = symbols[i];
			vUnwantedLetNumSym.push_back(cTemp);
		}
	}
	//-------------------------------------------------------------

	//Put random characters, numbers and symbols
	bool bTemp;
	iTemp = 0;
	for (long int i = 0; i < iLength; i++)
	{
		bTemp = true;
		while (bTemp == true)
		{
			iTemp = rand() % 3;
			if (iTemp == 0) {
				//letters
				iTemp = rand() % 52;
				if (iTemp == 0) { cTemp = 'a'; }
				else if (iTemp == 1) { cTemp = 'A'; }
				else if (iTemp == 2) { cTemp = 'b'; }
				else if (iTemp == 3) { cTemp = 'B'; }
				else if (iTemp == 4) { cTemp = 'c'; }
				else if (iTemp == 5) { cTemp = 'C'; }
				else if (iTemp == 6) { cTemp = 'd'; }
				else if (iTemp == 7) { cTemp = 'D'; }
				else if (iTemp == 8) { cTemp = 'e'; }
				else if (iTemp == 9) { cTemp = 'E'; }
				else if (iTemp == 10) { cTemp = 'f'; }
				else if (iTemp == 11) { cTemp = 'F'; }
				else if (iTemp == 12) { cTemp = 'g'; }
				else if (iTemp == 13) { cTemp = 'G'; }
				else if (iTemp == 14) { cTemp = 'h'; }
				else if (iTemp == 15) { cTemp = 'H'; }
				else if (iTemp == 16) { cTemp = 'i'; }
				else if (iTemp == 17) { cTemp = 'I'; }
				else if (iTemp == 18) { cTemp = 'j'; }
				else if (iTemp == 19) { cTemp = 'J'; }
				else if (iTemp == 20) { cTemp = 'k'; }
				else if (iTemp == 21) { cTemp = 'K'; }
				else if (iTemp == 22) { cTemp = 'l'; }
				else if (iTemp == 23) { cTemp = 'L'; }
				else if (iTemp == 24) { cTemp = 'm'; }
				else if (iTemp == 25) { cTemp = 'M'; }
				else if (iTemp == 26) { cTemp = 'n'; }
				else if (iTemp == 27) { cTemp = 'N'; }
				else if (iTemp == 28) { cTemp = 'o'; }
				else if (iTemp == 29) { cTemp = 'O'; }
				else if (iTemp == 30) { cTemp = 'p'; }
				else if (iTemp == 31) { cTemp = 'P'; }
				else if (iTemp == 32) { cTemp = 'q'; }
				else if (iTemp == 33) { cTemp = 'Q'; }
				else if (iTemp == 34) { cTemp = 'r'; }
				else if (iTemp == 35) { cTemp = 'R'; }
				else if (iTemp == 36) { cTemp = 's'; }
				else if (iTemp == 37) { cTemp = 'S'; }
				else if (iTemp == 38) { cTemp = 't'; }
				else if (iTemp == 39) { cTemp = 'T'; }
				else if (iTemp == 40) { cTemp = 'u'; }
				else if (iTemp == 41) { cTemp = 'U'; }
				else if (iTemp == 42) { cTemp = 'v'; }
				else if (iTemp == 43) { cTemp = 'V'; }
				else if (iTemp == 44) { cTemp = 'w'; }
				else if (iTemp == 45) { cTemp = 'W'; }
				else if (iTemp == 46) { cTemp = 'x'; }
				else if (iTemp == 47) { cTemp = 'X'; }
				else if (iTemp == 48) { cTemp = 'y'; }
				else if (iTemp == 49) { cTemp = 'Y'; }
				else if (iTemp == 50) { cTemp = 'z'; }
				else if (iTemp == 51) { cTemp = 'Z'; }
			}
			else if (iTemp == 1) {
				//numbers
				iTemp = rand() % 10;
				if (iTemp == 0) { cTemp = '0'; }
				else if (iTemp == 1) { cTemp = '1'; }
				else if (iTemp == 2) { cTemp = '2'; }
				else if (iTemp == 3) { cTemp = '3'; }
				else if (iTemp == 4) { cTemp = '4'; }
				else if (iTemp == 5) { cTemp = '5'; }
				else if (iTemp == 6) { cTemp = '6'; }
				else if (iTemp == 7) { cTemp = '7'; }
				else if (iTemp == 8) { cTemp = '8'; }
				else if (iTemp == 9) { cTemp = '9'; }
			}
			else if (iTemp == 2) {
				//symbols
				iTemp = rand() % 33;
				if (iTemp == 0) { cTemp = '!'; }
				else if (iTemp == 1) { cTemp = '"'; }
				else if (iTemp == 2) { cTemp = '#'; }
				else if (iTemp == 3) { cTemp = '$'; }
				else if (iTemp == 4) { cTemp = '%'; }
				else if (iTemp == 5) { cTemp = '&'; }
				else if (iTemp == 6) { cTemp = '\''; }
				else if (iTemp == 7) { cTemp = '('; }
				else if (iTemp == 8) { cTemp = ')'; }
				else if (iTemp == 9) { cTemp = '*'; }
				else if (iTemp == 10) { cTemp = '+'; }
				else if (iTemp == 11) { cTemp = ','; }
				else if (iTemp == 12) { cTemp = '-'; }
				else if (iTemp == 13) { cTemp = '.'; }
				else if (iTemp == 14) { cTemp = '/'; }
				else if (iTemp == 15) { cTemp = ':'; }
				else if (iTemp == 16) { cTemp = ';'; }
				else if (iTemp == 17) { cTemp = '<'; }
				else if (iTemp == 18) { cTemp = '='; }
				else if (iTemp == 19) { cTemp = '>'; }
				else if (iTemp == 20) { cTemp = '?'; }
				else if (iTemp == 21) { cTemp = '@'; }
				else if (iTemp == 22) { cTemp = '['; }
				else if (iTemp == 23) { cTemp = '\\'; }
				else if (iTemp == 24) { cTemp = ']'; }
				else if (iTemp == 25) { cTemp = '^'; }
				else if (iTemp == 26) { cTemp = '_'; }
				else if (iTemp == 27) { cTemp = 'ˋ'; }
				else if (iTemp == 28) { cTemp = '{'; }
				else if (iTemp == 29) { cTemp = '|'; }
				else if (iTemp == 30) { cTemp = '}'; }
				else if (iTemp == 31) { cTemp = '~'; }
				else if (iTemp == 32) { cTemp = ' '; }
			}

			bool bTemp2 = false;

			if (symbols.length() != 0)
			{
				for (int i = 0; i < symbols.length(); i++)
				{
					if (cTemp == vUnwantedLetNumSym[i]) {
						i = symbols.length();
						bTemp2 = true;
					}
				}

				if (bTemp2 == false) {
					bTemp = false;
					sTemp = sTemp + cTemp;
				}
			}
			else
			{
				sTemp = sTemp + cTemp;
				bTemp = false;
			}
		}
	}

	try {

		CClipboardXX clipboard;
		clipboard << sTemp;

	}
	catch (CExceptionXX& e) {

		std::cout << e.what() << std::endl;

	}
}