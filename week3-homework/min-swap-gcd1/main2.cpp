#include <iostream>
using namespace std;
bool swapvalue(int &a,int &b)
{
    int temp = a;
     a = b;
     b=temp;
return true;
}
int main()
{
    int number1;
    int number2;
  cout<<"nhap va so thu 1: ";
  cin >> number1;
  cout<<"nhap vao so thu 2: ";
  cin >> number2;
  if (swapvalue(number1,number2))
  {
    cout<<"Hoan doi thanh cong"<<endl;
    cout<<"gia tri sau khi hoa doi"<<endl;
    cout<<"gia tri so thu 1: "<<number1<<endl;
    cout<<"gia tri so thu 2: "<<number2<<endl;
  }
  else{cout<<"hoan vi khong thanh cong";}
  return 0;

}

