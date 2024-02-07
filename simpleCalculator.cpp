#include <iostream>

using namespace std;

int main()
{
	/*
	Develop a calculator program that performs basic arithmetic
    operations such as addition, subtraction, multiplication, and
    division. Allow the user to input two numbers and choose an
    operation to perform.

   */
	double num1;
	double num2;
	double sum;
	char operatorr;
	
	cout << "Additon (+) \n";
	cout << "Subtraction (-) \n";
	cout << "Multiplication (*) \n";
	cout << "Division (/) \n";
	cout << " " <<endl;
	
	cout << "Enter the first number: ";
	cin >> num1;
	
	cout << "Enter the first number: ";
	cin >> num2;
	
	cout << "Choose the operator you wanna use for your calculation(+,-,*,/): ";
	cin >> operatorr;
	cout << " "<<endl;;
	
    switch(operatorr)
    {
    	case '+':
    	sum=num1 + num2;
    	cout << "The calculation for "<< num1 << " + " << num2 << " equals "<< sum << endl;
    	break;
    	
    	case '-':
        sum =num1 - num2;
    	cout << "The calculation for "<< num1 << " - " << num2 << " equals "<< sum <<endl;
    	break;
    	
    	case '*':
    	sum = num1 * num2;
    	cout << "The calculation for "<< num1 << " * " << num2 << " equals "<< sum <<endl;
    	break;
    	
    	case '/':
    	sum =num1 / num2;
    	cout << "The calculation for "<< num1 << " / " << num2 << " equals "<< sum <<endl;;
    	break;
    	default:
    	
    	cout << "Invalid operator";
	}
	
	return 0;
}
