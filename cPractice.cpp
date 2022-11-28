#include <stdio.h>		// header file


void arithmeticOperators() {
	//+, -, /, %(modulus), *

	int a = 10, b = 3;

	printf("Addition of %d and %d = %d\n", a, b,  a + b);
	printf("Subtraction of %d and %d = %d\n", a, b, a - b);
	printf("Division of %d and %d = %f\n", a, b, (float)a / b);
	printf("Multiplication of %d and %d = %d\n", a, b, a * b);

	/*modulus(remainder)
		ex: a = 6, b = 4
			a%b = 2

		ex: a = 10, b = 2
			a%b = 0

		ex: a = 8, b = 4
			a%b = 0

		ex: a = 25, b = 2
			a%b = 1

		ex: a = 29, b = 3
			a%b = 
	*/

	printf("Modulus of %d and %d = %d\n", a, b, a % b);
}


void relationalOperators() {
	//Relational operators: >, <, >=, <=, ==

	int a = 10, b = 5;

	if (a > b)
	{
		printf("Yayy a is greater\n");
	}
	else
	{
		printf("hurray!, b is greater\n");
	}

	a = 10; 
	b = 10;

	if (a >= b) {
		printf("a>=b matches!\n");
	}

	if (a == b) {
		printf("a and b are equal\n");
	}

	a = 1;
	b = 2;
	if (a != b) {
		printf("a and b are not equal\n");
	}
}


void logicalOperators() {
	/* 
		&& -logical and
		|| - logical or
		! - logical not
	*/

	/*
		1. logical and
			condition1  condition2	result
				true	true		true
				false	true		false
				true	false		false
				false	false		false

		2. Logical or
			condition1  condition2	result
				true	true		true
				true	false		true
				false	true		true
				false	false		false

		3. logical not
			condition	result
			true		false
			false		true
	*/

	int age = 18;
	bool passDrivingTest = true;

	if ( (age >= 18) && (passDrivingTest == true) )
	{
		printf("You got the licence, congrats!\n\n");
	}
	else
	{
		printf("You did not got the licence\n\n");
	}


	bool hasAadharCard = true;
	bool hasPanCard = false;
	bool hasRationCard = false;

	if (hasAadharCard || hasPanCard || hasRationCard) {
		printf("Bus pass granted!, congrats\n\n");
	}
	else {
		printf("sorry, no valid identity submitted\n\n");
	}

	bool var = true;

	if (!var) {
		printf("false became true\n");
	}
	else {
		printf("true became false\n");
	}
}


void assignmentOperators() {
	/*
		1. a += 3	->	a = a + 3
		2. a -= 4	->	a = a - 4
		3. a /= 2	->	a = a / 2
		4. a *= 10	->	a = a * 10
	*/
}


void operators() {

	/*
		Operators:
			1. Arithmetic operators
				+, -, /, %, *

			2. Relational operators:
				>, <, >=, <=, ==, !=

			3. Logical operators:
				&&, ||, !

			4. Assignment operators
				+=, -=, /=, *=

			5. Bitwise operators:
				|, &, ^, >>, <<

			6. Increment and decrement
				++, --
	*/

	logicalOperators();

}


void conditions() {
	/*
		1. syntax of if:
				if(condition)
				{
					//body
				}

		2. syntax of else if:
			if(condition){
				//body
			}
			else{
				//body
			}

		3. syntax of else if
			if(condition){

			}
			else if(condition){
				
			}
			else if(condition){
				
			}
			else{
				
			}
	*/
}


void variables() {
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

	int a, b;

	printf("Please enter value of a: ");
	scanf_s("%d%d", &a, &b);

	printf("value of a entered: %d", a);
}

/*
	task:
	 - read 2 variables a and b from user
	 - display below options to the user:
		1. add
		2. subtract
		3. divide
		4. multiply
		5. Modulus

	- read the above number from user.
		ex: if user enters 1, you should add a and b 
*/
