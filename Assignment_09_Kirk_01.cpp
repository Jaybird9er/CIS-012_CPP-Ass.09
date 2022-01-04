#include <iostream>
#include <string>
using namespace std;

int main ()
{
    // variables
    int firstNum = 0;
    int secondNum = 0;
    int evenSum = 0;
    int baseNum = 1;
    int squareNum = 0;
    int oddSquareSum = 0;
    char letter = 65;
    string reentry = "Please try again.\n\nEnter two positive numbers.\nThe first number must be less than the second number:\nEnter numbers: ";

    //a
    cout << "Enter two positive numbers." << endl;
    cout << "The first number must be less than the second number:" << endl;
    cout << "Enter numbers: ";
    cin >> firstNum >> secondNum;

    // validation
    for (int i = 0; i == 0; i = i)
    {
        if (firstNum < secondNum && (firstNum > 0 && secondNum > 0))
        {
            i++;
        }
        else if (firstNum < 0 || secondNum < 0)
        {
            cout << "No NEGATIVE numbers!" << endl;
            cout << reentry;
            cin >> firstNum >> secondNum;
        }
        else
        {
            cout << "The first number must be LESS than the second number!" << endl;
            cout << reentry;
            cin >> firstNum >> secondNum;
        }
    }
    cout << endl;

    // b
    cout << "Odd integers between " << firstNum << " and " << secondNum << " are:" << endl;
    for (int i = firstNum; i <= secondNum; i++)
    {
        if (i % 2 == 0)
        {
            evenSum = evenSum + i;
        }
        else
        {
            cout << i << " ";
        }
    }
    cout << endl << endl;
    cout << "Sum of even integers between " << firstNum << " and " << secondNum << " = " << evenSum << endl;
    cout << endl;

    // c
    cout << "Square number of numbers: " << endl;
    for (int i = baseNum; i <= 10; i = baseNum)
    {
        cout << baseNum << "\t";
        squareNum =  baseNum * baseNum;
        cout << squareNum << endl;
        baseNum++;
    }
    cout << endl;

    // d
    for (int i = firstNum; i <= secondNum; i = firstNum)
    {
        if (i % 2 == 1)
        {
            i = i * i;
            oddSquareSum = oddSquareSum + i;
        }
        firstNum++;
    }
    cout << "Sum of the squares of odd integers between " << firstNum << " and " << secondNum << " = " << oddSquareSum << endl;
    cout << endl;

    // e
    cout << "Upper case letters are: ";
    for (int i = letter; i < 91; i = letter)
    {
        cout << letter << " ";
        letter++;
    }
    cout << endl;

    return 0;
}
