/*
==========================================================================
Name        : Homework1.cpp 
Author      : Brandon A. Reid
Version     :
Copyright   : 2015
Description : First homework program
========================================================================== 
*/


// 1. Declare Variable for name
// 2. prompt for name
// 3. introduce variable name
// 4. Declare variable for 4 digit integer
// 5. prompt for 4 digit integer
// 6. output thousands column of 4 digit integer
// 7. output hundreds column of 4 digit integer
// 8. output tens column of 4 digit integer
// 9. output ones column of 4 digit integer

#include <iostream>   // always include iostream when working with cout/cin
#include <string>     // must include string database
using namespace std;

int main()
{
	
	int FourDigitInt=0; // justify for 4 digit variable
	int DigitOnes;      // justify for each decimal place digit   
	int DigitTens;      // justify for each decimal place digit
	int DigitHundreds;  // justify for each decimal place digit
	int DigitThousands; // justify for each decimal place digit

	string name; // working with name we must add string
	
	cout << "+--------------------------------------------------+\n";
	cout << "|	 Computer Science and Engineering          |\n";
	cout << "|	 CSCE 1030 - Computer Science I            |\n";  
	cout << "|   Brandon Reid Bar0191 Brandonreid2@my.unt.edu   |\n";
	cout << "+--------------------------------------------------+\n";
	
	cout << "Please enter your name: "; // prompt for name 
	cin >> name; // input name 
	cout << "Hello, "<<name<<"! Welcome to CSCE 1030!\n"; // introduce name to CSCE 1030
	cout << "Please enter a positive 4-digit integer: "; // promt for four digit integer
	cin >> FourDigitInt; // input four digit integer

	DigitOnes=FourDigitInt%10;           // %10 module will divide the digit by 10 and output the remainder
	DigitTens=FourDigitInt/10%10;        // /10%10 will divide the digit by 10 then add the module %10 to divide it again by 10 and output the remainder 
	DigitHundreds=FourDigitInt/100%10;   // /100%10 will do as the above comments but divide first by 100 then %10 module 
	DigitThousands=FourDigitInt/1000%10; // /1000%10 will do as the above comments but divide first by 1000 then %10 module

	cout << "The thousands column is: "<<DigitThousands<<" \n"; // output DigitThousands
	cout << "The hundreds  column is: "<<DigitHundreds<<" \n";  // output DigitHundreds
	cout << "The tens      column is: "<<DigitTens<<" \n";      // output DigitTens
	cout << "The ones      column is: "<<DigitOnes<<" \n";      // output DigitOnes

	return 0;

}
 
