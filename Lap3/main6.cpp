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
        s=s+i/( i+1);
    }
    cout << "tổng của dãy 1/2 + 2/3 + 4/4 +...+ n/(n+1) là: " << s << endl;
    return 0;
}