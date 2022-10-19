#include <iostream>
using namespace std;
int main()
{
    int n,counter=0;
    LOOP:
    cin >> n;
    int guess=0;
    if (n >= 0 && n <= 100)
    {           
        while (guess != n)
        {
            cin >> guess;
            if (guess < n)
            {
                cout << "Your number is lower than the target number!" << endl;
            }
            else if (guess > n)
            {
                cout << "Your number is larger than the target number!" << endl;
            }
            counter++;
        }
        cout <<"You tried " << counter <<" times"<< endl;
        cout << "The wanted number is: " << n << endl;
    }
    else
    {
        cout << "Please enter a valid number!" << endl;
    }
    goto LOOP;
}

