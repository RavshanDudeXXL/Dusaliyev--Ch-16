// Ravshan Dusaliyev
// CIS 1202
// 4/18/2023



#include "plRZD.h"

char character(char start, int offset);

int main() {

	char val;
	try
	{
		val = character('a', 1);

		cout << val << endl;

		val = character('a', -1);

		cout << val << endl;

		val = character('z', -1);

		cout << val << endl;

		val = character('?', 5);

		cout << val << endl;
	}
	catch (string exception)
	{
		cout << exception;
	}

	endProgram();
}

char character(char start, int offset)
{
	string invalidCharacter = "Error : Invalid Range\n\n";
	string invalidRange = "Error : Invalid Range\n\n";
	char c;

	if (!(isalpha(start)))
		throw invalidCharacter;

	c = start + offset;

	if (islower(start))
		if (isupper(c) || !(isalpha(c)))
			throw invalidRange;

	if (isupper(start))
		if (islower(c) || !(isalpha(c)))
			throw invalidRange;
	
	return c;
}