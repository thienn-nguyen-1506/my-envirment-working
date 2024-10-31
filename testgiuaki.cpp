#include <iostream>
using namespace  std;
int main()
{
    srand( time(0) );
    int a = rand();
    int b = a % 10 +5;
    cout << "số ngâu nhiên thuộc đoạn [5;15] là: " << b;
    return 0;
}