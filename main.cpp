#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int rdnum1, rdnum2, rdnum3;
    int total = 0;

    // TODO: seed the random number generator with time(0)
    srand(time(0));
    // TODO: generate 3 random numbers between 0 and 99
    num1 = rand() % 100;
    num2 = rand() % 100;
    num3 = rand() % 100;

    // TODO: compute the total summation
    total = num1 + num2 + num3;

    // TODO: print the 3 random numbers on the first line
    cout << fixed << setprecision(2);
    cout << "The three random numbers are: " << num1 << ", " << num2 << ", and " << num3 << endl;

    // TODO: print the total and average (integer division) on the second line

    return 0;
}
