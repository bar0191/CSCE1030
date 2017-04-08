/*
==================================================================================================================================================
 Homework 4 ceasar cipher
1. cryptosystem that incorporates topic related to file I/O.
	- will read an input file and write the results in output file
2. function to display personal info
3. prompt the user whether he/she would like to encrypt or decrypt a file.
	- if invalid response, repeat until response is valid
4. then prompt user to enter name of input file to read from and the output file to write the respulting plaintext or ciphertext as apprpriate.
	- if error openning file you will display meaningful error message and exit program using exit status
5. write a FUNCTION to process the input file that will encrypt or decrpyt the input file and write the results to the output file as followed:
	1. prompt the user to enter a numerical key used to E/D file
	2. the E/D file will only contain upper/lower case letters, numerical digits,and spaces, tabs, newline character etc
	3. function should accept minimum of two parameters, process each file char by char(get and put functions)
	4. handling encryption:
		- encrypt all characters, using users entered key, upper case will encypt uppercase, so on so forth
		- encrypt all digits, (0-9)
		- remove tabs, white space, or newline char
		- no other chars like #@#%#!^, just dont write chars to file
		- decryption should be handled the same way
===================================================================================================================================================
*/
#include <iostream>
#include <fstream>
#include <cstdlib> // exit_failures and success // not needed
#include <cctype> // library used to read certain types of characters
using namespace std;

void banner(); // personal info
char select(char& choice); // choice E or D, loop if invalid choice
void ceasar(ifstream& in_stream, ofstream& out_stream); // overloaded func // Encryption
void caesar(ifstream& in_stream, ofstream& out_stream); // decryption


int main()
{
    char choice; // choice
    char input_file[33]; // no more then 32 characters
    char output_file[33]; // no more then 32 characters
    ifstream fin;
    ofstream fout;

    banner(); // display info

    select(choice); // prompt choice

    if (choice == 'E' || choice == 'e') // if E then prompt for file to encrypt and output file to write to
    {
        cout << "Enter the name of your input file that you want to encrypt: ";
        cin  >> input_file;
        cout << "Enter the name of the output file to write the ciphertext to: ";
        cin  >> output_file;

        fin.open(input_file); // open files
        fout.open(output_file);

        if (fin.fail()) // ERROR check if file doesnt open properly
        {
            cout << "Input file failed to open. " << endl;
            exit(1);
        }

        ceasar(fin, fout); // process files and functions
        fout << endl;

        fin.close();
        fout.close(); // close files
    }
    if (choice == 'D' || choice == 'd') // same as above just for decryption
    {
        cout << "Enter the name of your input file that you want to decrypt: ";
        cin  >> input_file;
        cout << "Enter the name of the output file to write the plaintext to: ";
        cin  >> output_file;

        fin.open(input_file);
        fout.open(output_file);

        if (fin.fail())
        {
            cout << "Input file failed to open. " << endl;
            exit(1);
        }

        caesar(fin, fout);
        fout << endl;

        fin.close();
        fout.close();
    }

	return 0;
}

void banner() // personal info function
{
    cout << endl
         <<"\t+--------------------------------------------------+\n"
         <<"\t|	  Computer Science and Engineering         |\n"
         <<"\t|	  CSCE 1030 - Computer Science I           |\n"
         <<"\t|   Brandon Reid Bar0191 Brandonreid2@my.unt.edu   |\n"
         <<"\t+--------------------------------------------------+\n"
         << endl;
    return;
}

char select(char& choice) // choice func
{

    cout << "Would you like to ENCRYPT OR DECRYPT a file (E or D)? ";
    cin  >> choice;

        switch (choice)
        {
            case 'E':
            case 'e':
                    //Encryption
                    break;
            case 'D':
            case 'd':
                    //Decryption
                    break;
            default:
                    // loop back if E or D is not choosen
                    return select(choice);
         }
}
/*
============================================================================
Function : caesar
Parameters : both instream and outstream for input and output files
Return : ciphered or deciphered text specified by the user
Description : this func either encypts or decrypts depending on what the user
prompts and indicates
============================================================================
*/
void ceasar(ifstream& in_stream, ofstream& out_stream)
{
    int key; // key should be positive int
    char text; //specified by instructions to not use string array

    cout << "Enter the numerical key (i.e., an integer) used to encrypt: ";
    cin  >> key;

    in_stream.get(text); // process input file text into function

    while (! in_stream.eof()) // read every character until EOF
    {

        if (isalpha(text)) // check for alphabet
        {
            if (text >= 'A' && text <= 'Z') // if upper
            {
                text = (((text - 'A') + key + 26) % 26) + 'A'; // function to cipher each character determined by key entered
                out_stream.put(text);
            }
            else if (text >= 'a' && text <= 'z') // if lower
            {
                text = (((text - 'a') + key + 26) % 26) + 'a'; // function to cipher each character determined by key entered
                out_stream.put(text);
            }
        }
        else if (isdigit(text)) // check for digit and cipher determined by key entered
        {
            if (text >= '0' && text <= '9')
            {
            text = (((text - '0') + key + 10) % 10) + '0';
            out_stream.put(text);
            }
        }

    in_stream.get(text); // process text in file

    }
    return;
}
/*
============================================================================
Function : caesar
Parameters : both instream and outstream for input and output files
Return : ciphered or deciphered text specified by the user
Description : this func either encypts or decrypts depending on what the user
prompts and indicates
============================================================================
*/
void caesar(ifstream& in_stream, ofstream& out_stream) // process same as above just for decryption
{
    int key;
    char text;

    cout << "Enter the numerical key (i.e., an integer) used to decrypt: ";
    cin  >> key;

    in_stream.get(text);

    while (! in_stream.eof())
    {

        if (isalpha(text))
        {
            if (text >= 'A' && text <= 'Z')
            {
                text = (((text - 'A') - key + 26) % 26) + 'A'; // function to cipher each character determined by key entered
                out_stream.put(text);
            }
            else if (text >= 'a' && text <= 'z')
            {
                text = (((text - 'a') - key + 26) % 26) + 'a'; // function to cipher each character determined by key entered
                out_stream.put(text);
            }
        }
        else if (isdigit(text)) // check for digit
        {
            if (text >= '0' && text <= '9')
            {
            text = (((text - '0') + key + 14) % 10) + '0';
            out_stream.put(text);
            }
        }

    in_stream.get(text);

    }
    return;
}

