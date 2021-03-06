/*
Christopher Cedeno Problem 1
Each new term in the Fibonacci sequence is generated by adding the previous 
two terms. By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not 
exceed two million, find the sum of the odd-valued terms.
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 1, c = 0, sum = 0;

    while (a < 2000000)
    {
        if (a % 2 != 0) //Checks if a is divisible by 2 if so adds it to sun
        {
            sum += a;
        }
        c = a + b; //Add previous 2 values together to make the new value for next loop iteration
        a = b; //Makes the second value the first value for the next loop iteration
        b = c; //Makes the previous total the second argument to be added next loop iteration
    }

    cout << sum << endl;
}