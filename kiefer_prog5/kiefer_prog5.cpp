// Author: Maddison Kiefer
//
// Program: Changing a String to Uppercase
// This program will get the size of the dynamic array and the characters from a user input.
// It will then change all of the characters to uppercase and display them back to the user. 

// Header files
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    // Defining variables
    int arraySize = 0;
    char* dynamicArray = new char[arraySize + 1]();

    // User inputs the size of the array and the characters. The size of the array is stored in the arraySize variable
    cout << "Enter the size of the dynamic array: ";
    cin >> arraySize;
    cout << endl;
    cout << "Enter a string of " << arraySize << " characters to be changed to uppercase: ";

    // For loop that will loop through the array size and add each character to the array
    for (int i = 0; i < arraySize; i++)
        cin >> dynamicArray[i];

    // For loop that will change each character in the array to uppercase
    for (int i = 0; i < arraySize; i++)
        dynamicArray[i] = toupper(dynamicArray[i]);

    // Prints the uppercase letters to the consol using a for loop
    cout << endl << "The string in uppercase letters is: ";
    for (int i = 0; i < arraySize; i++)
        cout << dynamicArray[i];
    cout << endl;
}

