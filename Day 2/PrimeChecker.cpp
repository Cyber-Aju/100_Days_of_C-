//PrimeChecker
#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int num;
    cout << "Enter number to check prime: ";
    cin >> num;

    bool isPrime = true;

    if (num <= 1) 
    {
        isPrime = false;
    } 
    else 
    {
        for (int i = 2; i <= sqrt(num); i++) 
        {
            if (num % i == 0) 
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) 
    {
        cout << "It's a Prime Number" << endl;
    } 
    else 
    {
        cout << "It's not a Prime number" << endl;
    }

    return 0;
}
