#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhập vào số nguyên n: ";
    cin >> n;
    float s = 0;
    
    for ( float  i=1;i <= n ;i++ )
    {
        s=s+1/i;

    }
    cout << "kết quả tổng 1+1/2+1/3+...+1/n là: " << s << endl;
    return 0;
}