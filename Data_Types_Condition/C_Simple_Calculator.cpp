#include <iostream>
using namespace std;
void mulitply(int a, int b);
void add(int a, int b);
void subtract(int a, int b);
int main()
{
    int x, y;
    cin >> x >> y;
    add(x, y);
    mulitply(x, y);
    subtract(x, y);
    return 0;
}

void mulitply(int a, int b)
{
    cout << a << " * " << b << " = " << ((long long)a * b) << endl;
}
void add(int a, int b)
{
    cout << a << " + " << b << " = " << (a + b) << endl;
}
void subtract(int a, int b)
{
    cout << a << " - " << b << " = " << (a - b) << endl;
}