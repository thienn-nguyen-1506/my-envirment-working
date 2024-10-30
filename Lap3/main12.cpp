#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhạp vào một số nguyên n: ";
    cin >> n;
    float s = 0;
    float d = 0;
    for (float i = 1;i <= n ;i++ )
    {
        s = s+i;
        d = d + 1/s;
    }
    cout << "tổng của dãy 1 +1/(1+2) +1/(1+2+3)...+1/(1+2+3+..+n) là: " << d << endl;
    return 0;
}