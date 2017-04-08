/* 1. Program should have header with name and email department
   2. Print out menu to support following:
          1. sum of numbers
          2. Mean of numbers
          3. Minimum of numbers
          4. Maximum of numbers
          5. exit
   3. if the user enters invalid menu option not between 1 and 5 program should display an error to re-input
   4. when 1 - 4 is prompted user will be prompt to enter numbers ( integers to float-value)
   5. based upon the option chosen, program will determine calculate for numbers
   6. program will output calculated sum, mean, min or max
   7. menu will prompt again and repeat until exit
   8. when 5 is chosen give a friendly goodbye message

   ******************UPDATE 10/9/15******HOMEWORK3**********************
   1. "function-ize" this program (HMWRK2)
   2. Instead of using a constant to input 5 numbers, you will prompt the user to enter the positive
   quantity of numbers to read in when the user selects menu options 1 through 4.
    - if zero or negative it will read in error and prompt for positive value
   3. function for personal information
   4. function for menu print out no other inputs or outputs, just menu
   5. function to return sum of the numbers entered
    - in addition you shall also use a loop to prompt for and read in all the numbers, however many
    requested.
   6. function for boolean indicating whether min or max is to be determined, will return the min or max,
   depending on the boolean value
    - again use loop to prompt for and read in all the numbers however many requested.

============================================================================
Name        : Homework3.cpp
Author      : Brandon A. Reid
Version     :
Copyright   : 2015
Description : The program performs simple arithmetic operations based on in-
 put from the user from the menu options in a loop. Updated** program now
 preforms these arithmetic operations under function blocks.
============================================================================
============================================================================
Function(1) : personal_info_func
Parameters  : none
Return      : none
Description : function to output personal information about myself to the
 user at the start of the program
============================================================================
============================================================================
Function(2) : menu_func
Parameters  : none
Return      : none
Description : function to output a menu to support following:
              1. sum of numbers specified by user
              2. Mean of numbers specified by user
              3. Minimum of numbers specified by user
              4. Maximum of numbers specified by user
              5. exit
============================================================================
============================================================================
Function(3) : sum_func (overloaded)
Parameters  : a float/double representing the sum/mean of numbers specified by
 the user
Return      : a floate/double representing the calculated sum/mean value of the
 numbers specified by the user
Description : function to return sum of the numbers entered
    - also use a loop to prompt for and read in all the numbers, however many
 requested.
============================================================================
============================================================================
Function(4) : min_max_func (overloaded)
Parameters  : a float/double representing the max/min of numbers specified by
 the user
Return      : a float/double representing the max/min of numbers specified by
the user
Description : function to return min/max of the numbers entered
    - also use a loop to prompt for and read in all the numbers, however many
 requested.
============================================================================

*/


#include <iostream>
#include <cstdlib> // EXIT_SUCCESS in main
using namespace std;

void personal_info_func(); // display personal info
void menu_func(); // display menu to user
float sum_func(float sum); // overloaded sum_func
float sum_func(double mean); // overloaded sum_func
float min_max_func(float max_num); // overloaded min_max_func
float min_max_func(double min_num); // overloaded min_max_func

int main()
{
     char choice; // works as error syntax, to stop infinite looping when character is typed(input)

     personal_info_func(); // display personal information

     do
     {
        float sum;
        float max_num;
        double min_num;
        double mean;

        menu_func(); // display menu and prompt user for choice
        cin >> choice;

            switch (choice)
            {
                case '1': // if '1' is selected, sum_func will be output
                    sum_func(sum);
                    break;

                case '2': // if '2' is selected, mean_func will be output
                    sum_func(mean);
                    break;

                case '3': // if '3' is selected, max_num will be output
                    min_max_func(max_num);
                    break;

                case '4': // if '4' is selected, min_num will be output
                    min_max_func(min_num);
                    break;

                case '5': // if '5' is selected, quit_func will display a freindly goodbye message
                    cout << "Thank you for using this program! Have a great day!" << endl;
                    break;

                default: // any other choice choosen will output an error message
                    cout << "Invalid selection. Please enter choice 1 - 5. " << endl;

            }
     } while (choice != '5'); // choice cannot be 5, or the loop will exit

    return EXIT_SUCCESS; // EXIT_SUCCESS, or 0;
}

void personal_info_func() // personal info function
{
    cout << endl
         << "+--------------------------------------------------+\n"
         << "|	 Computer Science and Engineering          |\n"
         << "|	 CSCE 1030 - Computer Science I            |\n"
         << "|   Brandon Reid Bar0191 Brandonreid2@my.unt.edu   |\n"
         << "+--------------------------------------------------+\n";
    return;
}

void menu_func() // menu function with nothing but menu displayed
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
    return;
}

float sum_func(float sum) // first of two in overloaded sum function returning the sum of input values to choice '1'
{
    float digit;
    int value;

    cout << "Enter the positive quantity of numbers to read in: "; // prompt for and read in value
    cin  >> value;

    if(value >= 1 && value <= 10000000) // if value is positive and within the range of 1 and 10000000 it will run the rest of func
    {

        cout << "You will now be prompted to enter " << value << " numbers. " << endl;

        for (int n = 1; n <= value; n++) // run a loop counting up from 1 to specified value entered by the user
        {
            cout << "Enter Number "<< n << ": "; // prompt for and read in digit values
            cin  >> digit; sum+=digit;
        }

        cout << "The sum of the " << value << " numbers is: " << sum;
        return sum;
    }
    else // if value is negitive an error message will be displayed prompting to re-select an option and enter again
    {
        cout << "ERROR! Please re-select a menu option and re-enter a positive quantity of numbers to read in." << endl;
    }
}

float sum_func(double mean) // second of two in overloaded sum function returning the mean of input values to choice '2'
{
    float digit;
    int value;
    float sum = 0; // zero out sum before calculations

    cout << "Enter the positive quantity of numbers to read in: "; // prompt for and read in value
    cin  >> value;

    if(value >= 1 && value <= 10000000) // run a loop counting up from 1 to specified value entered by the user
    {

        cout << "You will now be prompted to enter " << value << " numbers. " << endl;

        for (int n = 1; n <= value; n++) // run a loop counting up from 1 to specified value entered by the user
        {
            cout << "Enter Number "<< n << ": "; // prompt for and read in digit values
            cin  >> digit; sum+=digit; mean=sum/value;
        }

        cout << "The mean of the " << value << " number is: " << mean; // output mean of numbers and return to main
        return mean;
    }
    else // if value is negitive an error message will be displayed prompting to re-select an option and enter again
    {
        cout << "ERROR! Please re-select a menu option and re-enter a positive quantity of numbers to read in." << endl;
    }
}

float min_max_func(float max_num) // first of two in overloaded min_max function returning the maximum value of input values to choice '3'
{
    float digit;
    int value;
    double min_num = 10000000; // if min_num did not equal this it would calculate max instead
    max_num = 0;

    cout << "Enter the positive quantity of numbers to read in: "; // prompt for and read in value
    cin  >> value;

    if(value >= 1 && value <= 10000000) // run a loop counting up from 1 to specified value entered by the user
    {

        cout << "You will now be prompted to enter " << value << " numbers. " << endl;

        for (int n = 1; n <= value; n++) // run a loop counting up from 1 to specified value entered by the user
        {
            cout << "Enter Number "<< n << ": "; // prompt for and read in digit values
            cin  >> digit;

            if(max_num < digit) // calculate max
            {
                max_num = digit;
            }
            if(min_num > digit) // calculate min
            {
                min_num = digit;
            }
        }

        cout << "The max of the " << value << " numbers is: " << max_num; // output max of numbers and return to main
        return max_num;
    }
    else // if value is negitive an error message will be displayed prompting to re-select an option and enter again
    {
        cout << "ERROR! Please re-select a menu option and re-enter a positive quantity of numbers to read in." << endl;
    }

}

float min_max_func(double min_num) // second of two in overloaded min_max function returning the maximum value of unpit values to choice '4'
{
    float digit;
    int value;
    min_num = 10000000; // if min_num did not equal a very large number, it would calculate the max instead
    float max_num = 0;

    cout << "Enter the positive quantity of numbers to read in: "; // prompt for and read in value
    cin  >> value;

    if(value >= 1 && value <= 10000000) // run a loop counting up from 1 to specified value entered by the user
    {
        cout << "You will now be prompted to enter " << value << " numbers. " << endl;

        for (int n = 1; n <= value; n++) // run a loop counting up from 1 to specified value entered by the user
        {
            cout << "Enter Number "<< n << ": "; // prompt for and read in digit values
            cin  >> digit;

            if(max_num < digit) // calculate max
            {
                max_num = digit;
            }
            if(min_num > digit) // calculate min
            {
                min_num = digit;
            }
        }
        cout << "The min of the " << value << " numbers is: " << min_num; //output min of number and return to main
        return min_num;
    }
    else // if value is negitive an error message will be displayed prompting to re-select an option and enter again
    {
        cout << "ERROR! Please re-select a menu option and re-enter a positive quantity of numbers to read in." << endl;
    }

 }

