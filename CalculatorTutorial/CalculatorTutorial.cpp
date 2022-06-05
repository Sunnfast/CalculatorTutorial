// CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//https://docs.microsoft.com/en-us/cpp/get-started/tutorial-console-cpp?view=msvc-170&viewFallbackFrom=vs-2019

#include <iostream>
#include "Calculator.h" // Since C++ programs always start at the main() function, we need to call our other code from there, so an #include statement is needed.

using namespace std;


int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format a+b | a-b | a*b | a/b"
        << endl;

    Calculator c; // declares an object named 'c' as an instance of the Calculator class.

    while (true) //  the condition here is simply listed as true, it's always true, so the loop runs forever
    {
        cin >> x >> oper >> y; // used to accept input from the user
        if (oper == '/' && y == 0) // checks to see if dividing by zero
        {
            cout << "Division by 0 exception" << endl; // provides error message for division by zero
            continue;
        }
        else // if not dividing by zero proceeds with the calculation as normal
        {
            result = c.Calculate(x, oper, y); // calls the Calculate function defined earlier, and supplies the entered input values then returns a number that gets stored in result
        }
        cout << "Result is: " << result << endl; // result is printed to the console, so the user sees the result of the calculation
    }

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
