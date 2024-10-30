#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "nhập vào số nguyên n: ";
    cin >> n;
    float x;
    cout << "nhập vào số thực x ";
    cin >> x;
    float s = 0;
    for ( float i = 1; i <= n; i++)
    {
        s = s + pow(x,i);

    }
    cout << "giá trị của tổng x+x^1 + x^2 +...+ x^n là:" << s << endl;
    return 0;
}