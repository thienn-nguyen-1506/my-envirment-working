#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhập vào số nguyên n: ";
    cin >> n;
    int s=0;
    for (int i=1;i <= n;i++)
    {
        
        s=s+i*i;
    }
    cout << "tổng dãy số 1^2+2^2+3^2+..+n^2 là: " << s << endl;
    return 0;
}