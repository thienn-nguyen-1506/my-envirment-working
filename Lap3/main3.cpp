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
        s=s+1/(2*i);
    }
    cout << "tổng của 1/2+1/4+1/6+..+1/2n là: " << s << endl;
    return 0;
}