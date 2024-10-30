#include <iostream>
using namespace std;
int main(){
float num1;
float num2;
cout << "nhap so a: ";
cin >> num1;
cout << "nhap vao so b: ";
cin >> num2;
if(num1 == 0){
    if (num2 == 0)
    {
        cout<<"phuong trinh vo so nghiem \n";   
    }
    else {
        cout<<"phuong trinh vo nghiem \n "; 
    }
}
        if (num1 != 0)
        {
            float x=(-num2)/num1;
            cout<<"phuong tring co nghiem la x = " << x <<endl;
        }
    

return 0;
}


