#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a value: ";
    cin >> a;

    int num = 1;

    for (int i = 1; i <= a; i++)
    {
        cout << num;
        if (i < a)
            cout << ", ";
        num += 2;
    }

    return 0;
}
