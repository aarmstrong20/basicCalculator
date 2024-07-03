// calculator.cpp : create a basic calculator that does two int only
//

#include <iostream>
#include <iomanip>
#include <string>
#include "calulator.h"

using namespace std;


int main()
{
    string repeat = "y";
    while (repeat == "y") {
        //variables for two numbers
        Calc<int> equation;
        int num1;
        int num2;
        int Answer = 0;
        int choice;
        std::cout << "Enter num1: ";
        cin >> num1;

        while (cin.fail()) {
            cin.clear();
            cin.ignore(255, '\n');
            std::cout << "please enter an int: ";
            cin >> num1;
        }
        //get num2

        std::cout << "Enter num2: ";
        cin >> num2;
        while (cin.fail()) {
            cin.clear();
            cin.ignore(255, '\n');
            std::cout << "please enter an int: ";
            cin >> num2;
        }


        //choose math type
        std::cout << "Please enter number for which equation type you want?" << endl;
        std::cout << "1. Add" << endl;
        std::cout << "2. Subtract" << endl;
        std::cout << "3. multiply" << endl;
        std::cout << "4. divide" << endl;
        std::cout << "5. Remainder" << endl;
        std::cout << "6. Power of" << endl;

        cin >> choice;
        while (cin.fail()) {
            cin.clear();
            cin.ignore(255, '\n');
            std::cout << "please enter an int between 1 and 6: ";
            cin >> num1;
        }

        switch (choice) {
        case 1:
            Answer = equation.add(num1, num2);
            break;
        case 2:
            Answer = equation.sub(num1, num2);
            break;
        case 3:
            Answer = equation.mul(num1, num2);
            break;
        case 4:
            Answer = equation.div(num1, num2);
            break;
        case 5:
            Answer = equation.remainder(num1, num2);
            break;
        case 6:
            Answer = equation.power(num1, num2);
            break;

        default:
            std::cout << "ERROR........... not a number between 1 and 6" << endl;

        }
        std::cout << "The answer is " << Answer << endl;
        std::cout << "Would you like to go again? enter y for yes. enter anything else for no: ";
        std::cin >> repeat;
    }



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
