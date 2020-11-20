/*****************************************************************
//
//  NAME:        Clark Whitehead
//
//  HOMEWORK:    Homework 8
//
//  CLASS:       ICS 212
//
//  INSTRUCTOR:  Ravi Narayan
//
//  DATE:        Nov 19, 2020
//
//  FILE:        homework8.cpp
//
//  DESCRIPTION:
//   Kelvin to Fahrenheit converter
//
****************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int user_interface();

void convert(double, double &);

void print_table(int);

/*****************************************************************
//
//  Function name: main
//
//  DESCRIPTION:   Driver function to get user unput
//                 and print table
//
//  Parameters:    None
//
//  Return values:  0
//
//
****************************************************************/
int main()
{

    int num = user_interface();

    print_table(num);

    return 0;

}

/*****************************************************************
//
//  Function name: user_interface
//
//  DESCRIPTION:   Collects the users input
//
//  Parameters:    None
//
//  Return values:  (int) num - User input
//
//
****************************************************************/
int user_interface()
{

    int num;

    cout << "\n______Kelvin to Fahrenheit_______\n";

    cout << "\nThis program converts\nuser input from Kelvin\nto Fahrenheit\n";

    cout << "\nPlease type a temp in Kelvin: ";

    while ( !(cin >> num) || num < 0 )
    {

        cout << "\nPlease enter a non-negative number: ";

        cin.clear();

        cin.ignore(1000, '\n');

    }

    return num;

}

/*****************************************************************
//
//  Function name: convert
//
//  DESCRIPTION:   Converts a Kelvin temp to Fahrenheit using reference
//
//  Parameters:    (double) num: The double to be converted
//
//                 (double) &outNum: The reference to the
//                                   variable which holds the
//                                   output
//
//  Return values:  None
//
//
****************************************************************/
void convert( double num, double &outNum )
{

    outNum = (9.0/5.0)*(num - 273.15) + 32.0;

}

/*****************************************************************
//
//  Function name: print_table
//
//  DESCRIPTION:   Prints the F and K values in
//                 increments of 50 from 0 to user input temp
//
//  Parameters:    (int) num: The highest number to print,
//                            which is also the user input
//
//  Return values:  None
//
//
****************************************************************/
void print_table(int num)
{

    int i;

    double outNum;

    cout << setw(8);
    cout << "K";
    cout << setw(16);
    cout << "F\n";

    for (i = 0; i <= num; i = i + 50)
    {
        
        convert((double)i,outNum);

        cout << setw(5) << i << ".00" << "\t" << setw(7) << outNum << "\n";

    }

    cout << "\n";

}
