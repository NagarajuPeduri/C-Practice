#include <stdio.h>		// header file


int toReturnInt() {
	printf("in toReturnInt function\n");

	return 10;
}


void myfunction() {
	/*
		variables
			1. primitive/primary varialbes
			2. user defined varibles
			3. derived
	*/

	/*
		primary variables:
			1. int - %d
			2. float - %f
			3. char - %c
			4. long - %ld
			5. double - %lf
			6. boolean - %d
	*/

	// real numbers - int, ex: 100, 5, 2...
	// fractional number(only 6 numbers after .) - float, ex: 10.4, 100.5
	// char, ex: 'a', 'z', 'c'...
	// boolean - true(1) or false(0)
	// long and int (future discussion)
	// double (future discussion)

	int a = 100;
	float f = 10.523;
	char c = 'g';
	bool b = true;

	printf("in variables function\n");

	printf("int - %d\n", a);
	printf("float - %f\n", f);
	printf("char - %c\n", c);
	printf("bool - %d\n", b);

}


void main()	// function signature
{
	// - single line comment

	/*
		multiple lines comments
	*/

	/*
		basic terminology:
		() - paranthesis
		{} - braces
		[] - brackets

		variables naming convention:
		a b - not valid
		a&b - not valid
		abc - valid
		a12 - valid
		a1 2 - not valid
		1a - not valid
		a_b - valid
		_abc - valid


		keywords:
		int, float, for, while, goto, ....
	*/

	//myfunction();

	int b = toReturnInt();

	printf("in main, b = %d", b);
}
