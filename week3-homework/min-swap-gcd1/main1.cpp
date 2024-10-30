#include<iostream>
using namespace std;
bool isMin(int a,int b)
{return a >= b ;}
int main()
{
    int num1;
    int num2;
    cout <<"nhap so thu nhat: ";
    cin >> num1;
    cout<<"nhap so thu hai: ";
    cin >> num2;
    if  (isMin(num1,num2)){
        cout << num2 << " " <<"la so nho nhat"<<endl;
    }
    else {cout << num1 <<" " <<"la so nho nhat"<<endl;}
    return 0;
}

