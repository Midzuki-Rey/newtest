#include <iostream>
using namespace std;
int main()
{
    string a;
    cin >> a;
    char b = a[0];
    if (b <= 122 && b >= 97)
    {
        b = b - 32;
    }
    else
    {
        b = b + 32;
    }

    cout << b;
}
