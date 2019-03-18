#include <iostream>
using namespace std;

int main()
{
    int e = 15, d = 25, temp;

    cout << "Before swapping." << endl;
    cout << "e = " << e << ", d = " << d << endl;

    temp = e;
    e = d;
    d = temp;

    cout << "\nAfter swapping." << endl;
    cout << "e = " << e << ", d = " << d << endl;

    return 0;
}
