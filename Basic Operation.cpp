#include <iostream>

using namespace std;

void arithmeticOperations(int a, int b) {
	/*
	Calculate all arithmetic operations from given two numbers
	@param int a First number that is being inputed
	@param int b Second number taht is being inputted
	@return void
	*/
	int addition = a + b;
	int substraction = a - b;
	int multiplication = a * b;
	int division = 0;
	int modulo = 0;
	if (b == 0) {
		division = 0;
		modulo = 0;
	}
	else {
		division = a / b;
		modulo = a % b;
	}

	std::cout << std::endl << "Arithmetic Operations: " << std::endl;
	std::cout << "This is the result of addition of two numbers: " << addition << std::endl;
	std::cout << "This is the resulf of substraction of two numbers: " << substraction << std::endl;
	std::cout << "This is the result of multiplication of two numbers: " << multiplication << std::endl;
	std::cout << "This is the result of division of two numbers: " << division << std::endl;
	std::cout << "This is the result of modulo operator of two numbers: " << modulo << std::endl;
}

void logicalOperations(int a, int b) {
	/*
	Calculates every logical operations from given two numbers
	
	@param int a first number that is being inputed
	@param int b second number that is being inputed

	@return void
	*/
	std::cout << std::endl << "Logical Operations: " << std::endl;
	if ((a > 0) && (b > 0)) {
		std::cout << "(" << a << " > 0) && (" << b << " > 0): true" << std::endl;
	}
	else {
		std::cout << "(" << a << " > 0) && (" << b << " > 0): false" << std::endl;
	}
	if ((a > 0) || (b > 0)) {
		std::cout << "(" << a << " > 0) || (" << b << " > 0): true" << std::endl;
	}
	else {
		std::cout << "(" << a << " > 0) || (" << b << " > 0): false" << std::endl;
	}
	if (!(a == b)) {
		std::cout << "!(" << a << " == " << b << "): true" << std::endl;
	}
	else {
		std::cout << "!(" << a << " == " << b << "): false" << std::endl;
	}
}

void bitwiseOperations(int a, int b) {
	/*
	Calculates every bitwise operation from given two numbers

	@param int a first number that is being inputed
	@param int b second number that is being inputed

	@return void
	*/
	int bitwiseAnd = a & b;
	int bitwiseOr = a | b;
	int bitwiseXor = a ^ b;
	int bitwiseNot1 = ~a;
	int bitwiseNot2 = ~b;
	int bitwiseLeftShift1 = a << 1;
	int bitwiseLeftShift2 = b << 1;
	int bitwiseRightShift1 = a >> 1;
	int bitwiseRightShift2 = b >> 1;
	std::cout << std::endl << "Bitwise Operations: " << std::endl;
	std::cout << a << " & " << b << " = " << bitwiseAnd << std::endl;
	std::cout << a << " | " << b << " = " << bitwiseOr << std::endl;
	std::cout << a << " ^ " << b << " = " << bitwiseXor << std::endl;
	std::cout << "~" << a << " = " << bitwiseNot1 << std::endl;
	std::cout << "~" << b << " = " << bitwiseNot2 << std::endl;
	std::cout << a << " << 1 = " << bitwiseLeftShift1 << std::endl;
	std::cout << b << " << 1 = " << bitwiseLeftShift2 << std::endl;
	std::cout << a << " >> 1 = " << bitwiseRightShift1 << std::endl;
	std::cout << b << " >> 1 = " << bitwiseRightShift2 << std::endl;
}

int sumEvenNumbers(int start, int end) {
	/*
	Calculates sum of every even number from start to end
	
	@param int start first number that is being inputed
	@param int end second number that is being inputed

	@return int
	*/
	int sum = 0;
	for (int i = start; i <= end; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	return sum;
}

int countDivisors(int number) {
	/*
	Counts number of divisors of given number

	@param int number number to count divisors from 
	
	@return int
	*/
	int count = 2;
	int index = 2;
	while (index < number) {
		if (number % index == 0) {
			count += 1;
		}
		index++;
	}
	return count;
}

int main()
{
	int firstNumber;
	int secondNumber;
	std::cout << "Please enter you first number: ";
	std::cin >> firstNumber;

	std::cout << "Please enter youy second number: ";
	std::cin >> secondNumber;
	std::cout << std::endl;

	arithmeticOperations(firstNumber, secondNumber);
	logicalOperations(firstNumber, secondNumber);
	bitwiseOperations(firstNumber, secondNumber);
	int a = sumEvenNumbers(firstNumber, secondNumber);
	std::cout << std::endl << "Sum of even numbers from " << firstNumber << " to " << secondNumber << ": " << a << std::endl;
	int b = countDivisors(std::max(firstNumber, secondNumber));
	std::cout << "Number of divisors of number " << std::max(firstNumber, secondNumber) << ": " << b << std::endl;

	return 0;
}
