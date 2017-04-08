/* 1. Program should have header with name and email department etc. like HMWRK1
   2. Print out menu to support following:
          1. sum of 5 numbers
          2. Mean of 5 numbers
          3. Minimum of 5 numbers
          4. Maximum of 5 numbers
          5. exit
   3. if the user enters invalid menu option not between 1 and 5 program should display an error to re-input
   4. when 1 - 4 is prompted user will be prompt to enter 5 numbers ( integers to float-value)
   5. based upon the option chosen, program will determine calculate for 5 numbers
   6. program will output calculated sum, mean, min or max
   7. menu will prompt again and repeat until exit
   8. when 5 is chosen give a friendly goodbye message
   9. the number of numbers prompted(5) is a constant
   10. read each of the five numbers input by the user idividually in a loop

============================================================================
Name : Homework2.cpp
Author : Brandon A. Reid
Version :
Copyright : 2015
Description : The program performs simple arithmetic operations based on in-
 put from the user from the menu options in a loop.
============================================================================
*/


#include <iostream>
using namespace std;

int main()
{

     char  choice; // if choice wasn't a character(ex. int choice), when the user input a char (ex. 'a') the loop would infinitely run.
     float Num1, Num2, Num3, Num4, Num5;
     float Sum=0; // always zero out variables that will be storing other values
     float Mean=0;

    do
     {

        cout << endl
             << "***************** M E N U *****************\n"
             << "| 1. Sum  of 5 numbers.                   |\n"
             << "| 2. Mean of 5 numbers.                   |\n"
             << "| 3. Max  of 5 numbers.                   |\n"
             << "| 4. Min  of 5 numbers.                   |\n"
             << "| 5. Exit.                                |\n"
             << "*******************************************\n"
             << "----> ";
        cin  >> choice;


        switch(choice)
         {

            case '1': // using the choices as characters so that it will properly output an error if any other character is input by user
                // code to display will be Sum of 5 numbers inside switch case from user input.
                cout << "You will now be prompted to enter 5 numbers." << endl;
                cout << "Enter number 1: ";
                cin  >> Num1;
                cout << "Enter number 2: ";
                cin  >> Num2;
                cout << "Enter number 3: ";
                cin  >> Num3;
                cout << "Enter number 4: ";
                cin  >> Num4;
                cout << "Enter number 5: ";
                cin  >> Num5;

                Sum = Num1 + Num2 + Num3 + Num4 + Num5;

                cout << "The sum of the 5 numbers is: " << Sum << endl;

                break;

            case '2':
                // code too display will be mean of 5 numbers inside switch case from user input.
                cout << "You will now be prompted to enter 5 numbers." << endl;
                cout << "Enter number 1: ";
                cin  >> Num1;
                cout << "Enter number 2: ";
                cin  >> Num2;
                cout << "Enter number 3: ";
                cin  >> Num3;
                cout << "Enter number 4: ";
                cin  >> Num4;
                cout << "Enter number 5: ";
                cin  >> Num5;

                Mean = (Num1 + Num2 + Num3 + Num4 + Num5)/5;

                cout << "The mean of the 5 numbers is: " << Mean << endl;

                break;

            case '3':
                // code to display will be max of 5 numbers inside switch case from user input.
                cout << "You will now be prompted to enter 5 numbers." << endl;
                cout << "Enter number 1: ";
                cin  >> Num1;
                cout << "Enter number 2: ";
                cin  >> Num2;
                cout << "Enter number 3: ";
                cin  >> Num3;
                cout << "Enter number 4: ";
                cin  >> Num4;
                cout << "Enter number 5: ";
                cin  >> Num5;

                if (Num1 >= Num2 && Num1 >= Num3 && Num1 >= Num4 && Num1 >= Num5)
                 {
                    cout << "The max of the 5 numbers is: " << Num1 << endl;
                 }
                if (Num2 >= Num1 && Num2 >= Num3 && Num2 >= Num4 && Num2 >= Num5)
                 {
                    cout << "The max of the 5 numbers is: " << Num2 << endl;
                 }
                if (Num3 >= Num1 && Num3 >= Num2 && Num3 >= Num4 && Num3 >= Num5)
                 {
                    cout << "The max of the 5 numbers is: " << Num3 << endl;
                 }
                if (Num4 >= Num1 && Num4 >= Num2 && Num4 >= Num3 && Num4 >= Num5)
                 {
                    cout << "The max of the 5 numbers is: " << Num4 << endl;
                 }
                if (Num5 >= Num1 && Num5 >= Num2 && Num5 >= Num3 && Num5 >= Num4)
                 {
                    cout << "The max of the 5 numbers is: " << Num5 << endl;
                 }

                break;

            case '4':
                // code to display min of 5 numbers inside switch case from user input.
                cout << "You will now be prompted to enter 5 numbers." << endl;
                cout << "Enter number 1: ";
                cin  >> Num1;
                cout << "Enter number 2: ";
                cin  >> Num2;
                cout << "Enter number 3: ";
                cin  >> Num3;
                cout << "Enter number 4: ";
                cin  >> Num4;
                cout << "Enter number 5: ";
                cin  >> Num5;

                if (Num1 <= Num2 && Num1 <= Num3 && Num1 <= Num4 && Num1 <= Num5)
                 {
                    cout << "The min of the 5 numbers is: " << Num1 << endl;
                 }
                if (Num2 <= Num1 && Num2 <= Num3 && Num2 <= Num4 && Num2 <= Num5)
                 {
                    cout << "The min of the 5 numbers is: " << Num2 << endl;
                 }
                if (Num3 <= Num1 && Num3 <= Num2 && Num3 <= Num4 && Num3 <= Num5)
                 {
                    cout << "The min of the 5 numbers is: " << Num3 << endl;
                 }
                if (Num4 <= Num1 && Num4 <= Num2 && Num4 <= Num3 && Num4 <= Num5)
                 {
                    cout << "The min of the 5 numbers is: " << Num4 << endl;
                 }
                if (Num5 <= Num1 && Num5 <= Num2 && Num5 <= Num3 && Num5 <= Num4)
                 {
                    cout << "The min of the 5 numbers is: " << Num5 << endl;
                 }

                break;

            case '5':
                cout << "Thank you for using this program! Have a great day!" << endl;
                break;

            default:
                cout << "Not a valid choice.\n";
                cout << "Choose again.\n";
         }
     } while (choice != '5'); // expression with-in while statements varifies the 5 choices as a constant

	return 0;
}
