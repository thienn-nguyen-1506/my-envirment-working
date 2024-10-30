#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout<<"nhap vao so nguyen a: ";
      cin>>a;
    cout<<"nhap vao so nguyen b:";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"sau khi hoan vi thi \n";
    cout<<"gia tri cua so nguyen a la:"<< a <<endl;
    cout<<"gia tri cua so nguyen b la "<< b <<endl;
    return 0;

}