#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhạp vào một số nguyên n: ";
    cin >> n;
    int s=1;
    for (int i=1; i <= n ;i++ )
    { 
        s=s*i;

    }
    cout << "tích của dãy số 1.2.3.4.5..n có giá trị là: " << s << endl <<endl;
    return 0;
}