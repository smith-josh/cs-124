// COMMENT FORMATTING

/***********************************************************************
* Program:
*    Assignment XX, <ASSIGNMENT NAME>
*    Brother <TEACHER>, CS124
* Author:
*    <YOUR NAME>
* Summary: 
*    <Brief explanation of what the program does>
************************************************************************/

// INCLUDE library for input output
#include <iostream>;

// INCLUDE library for setw() function
#include <iomanip>;

// USE standard namespace
using namespace std;

int main()
{
    // Display out to the console
    cout << "Display";

    // Display decimal in correct format
    cout.setf(ios::fixed);     // no scientific notation please
    cout.setf(ios::showpoint); // always show the decimal for real numbers
    cout.precision(2);         // two digits after the decimal

    // NEW LINE
    cout << endl;
    cout << "\n";

    // TABS
    cout << "\t"; // 8 Space/Char indent

    cout << setw(8);

    /* Data Types Chart
    Data-type       Use                                Size  Range of values
    bool            Logic                              1     true, false
    char            Letters and symbols                1     -128 to 127 … or 'a', 'b', etc.
    short           Small numbers, Unicode characters  2     ±32,767
    int             Counting                           4     ±2000000000
    long (long int) Larger Numbers                     8     ±9,223,372,036,854,775,808
    float           Numbers with decimals              4     10-38 to 1038 accurate to 7 digits
    double          Larger numbers with decimals       8     10-308 to 10308 accurate to 15 digits
    long double     Huge Numbers                       16    10-4932 to 104932 accurate to 19 digits

    1 byte equals 8 bits
    to find bits multiply by 8
    to find bytes divide by 8
    */

    // Variables
    bool checked = false;
    char letter = 'a';
    char name[256] = "Josh Smith";
    short smallNum = 1;
    int regularNum = 10;
    long largeNum = 400000;
    float gpa = 3.9;
    double income = 103295.05;
    long double pi = 3.14159265358979323;

    // Get User input
    cin >> name;

    // Multiple Extraction
    int age;
    cin >> name >> age;

    // Store whole line of text
    char fullName[256]; // store an individual’s full name: Dr. Drake Ramoray
    cin.getline(fullName, 256);

    // Order of Operation
    /*
    ()                  Parentheses
    ++ --               Increment, Decrement
    * / %               Multiply, Divide, Modulo
    + -                 Addition, Subtraction
    = += -= *= /= %=    Assign, Add-on, Subtract-from, Multiply onto, Divide from, Modulo from
    */
}
