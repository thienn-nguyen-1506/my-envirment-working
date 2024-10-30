#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "nhập vào số nguyên n";
    cin >> n;
    float x;
    cout << "nhập vào số thực x";
    cin >> x;
    float s=0;
    float d=0;
    for ( float i = 1;i <= n; i++)
    {
        s = s+i;
        d=d+pow(x,i)/( s );
    }
    cout << "giá trị của tổng x + x^2/(1+2) +x^3/(1+2+3) +...+x^n/(1+2+3+..+n)" << d << endl;
    return 0;
}