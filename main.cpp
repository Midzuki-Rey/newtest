#include <iostream>
using namespace std;
int main()
{
    int a;
    int d;
    cin >> a;
    cin >> d;

    while (a!=d)
    {
        if (a>d)
        {
            a = a-d;
        }
        else
        {
            d = d-a;
        }
    }
    cout << "NOD=" << a;

}







