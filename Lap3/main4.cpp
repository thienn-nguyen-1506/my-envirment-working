#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhạp vào một số nguyên n: ";
    cin >> n;
    float s = 0;
    for (float i = 0;i <= n ;i++ )
    {
        s=s+1/( 2*i + 1 );
    }
    cout << "tổng của dãy 1 +1/3 +1/5+..+1/(2N+1) là: " << s << endl;
    return 0;
}