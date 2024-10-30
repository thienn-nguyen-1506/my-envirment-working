#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhạp vào một số nguyên n: ";
    cin >> n;
    float s = 0;
    for (float i = 1;i <= n ;i++ )
    {
        s=s+1/( i*(i + 1) );
    }
    cout << "tổng của dãy 1/1*2 + 1/2*3 + 1/3*4 +...+ 1/n*(n+1) là: " << s << endl;
    return 0;
}