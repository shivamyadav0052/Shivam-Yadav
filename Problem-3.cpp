#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a value: ";
    cin >> a;


    if (a % 2 == 0)
    {
        a = a - 1;
    }

    
    for (int i = 1; i <= 2 * a - 1; i += 2)
    {
        cout << i;
        if (i < 2 * a - 1)
        {
            cout << ", ";
        }
    }

    return 0;
}
