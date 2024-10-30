#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhạp vào một số nguyên n: ";
    cin >> n;
    int s=1;
    int p=0;
    for (int i=1; i <= n ;i++ )
    { 
        s=s*i;
        p=p+s;
    }
    cout << "tích của dãy số 1 + 1.2 + 1.2.3+...+1.2.3..n có giá trị là: " << p << endl <<endl;
    return 0;
}