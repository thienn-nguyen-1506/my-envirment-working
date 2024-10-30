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
        s = s + pow(x,2*i);

    }
    cout << "giá trị của tổng x^2 + x^4 +...+ x^2n là:" << s << endl;
    return 0;
}