#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{
    int m,n;
    cin >> m >> n;
    int product = m * n;
     
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(3);
            cout << ((i * n) + (j + 1));
        }
        cout << endl;
    }
}

