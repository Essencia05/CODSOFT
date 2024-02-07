#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	/*
	Create a program that generates a random number and asks the
    user to guess it. Provide feedback on whether the guess is too
    high or too low until the user guesses the correct number.
	
	*/
	
	
	
	int num1;
	
	int num2;
	
	cout << "Please guess the number: "; //ask user to guess the number
	cin>>num2;
	while(num1!=num2) //loop till correct number is entered
    {
    	num1 = rand();
     	
     	cout << "The number you where suppose to guess is " << num1 << endl;
     		if(num2<num1)
     		{
     			//ut<<"Wrong the number that you where suppose to guess is "<<num1<<endl;
     			cout << "The number you have entered is too low."<<endl;
     		
			 }
			 else if(num2>num1)	
			 {
			 	cout << "The number you have entered is too high." <<endl;
			 }
			 else if(num2==num1 )
			 {
			 	cout<< "Congragulations!! You have guessed the correct number." <<endl;
			 }
			cout<< " " <<endl;
	     	cout <<"Try again. Please guess the number: ";
	        cin>> num2;
}
	return 0;
}
