#include "plRZD.h"

template <typename T>

T half(T num)
{
	string n = typeid(num).name();
	string i = "int";
	if (n != i)
		num = num / 2;
	else
	{
		num = round(static_cast<float>(num) / 2);
	}

	return num;
}

int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	endProgram();
}