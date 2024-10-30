#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a;
    float b;
    float c;
    cout << "nhap vao so  a: ";
    cin >> a;
    cout << "nhap vao so nguyen b: ";
    cin >> b;
    cout<<"nhao vao so nguyen c ";
    cin >> c;
    #define can sqrt
    float denta = (b*b-4*a*c);
    if (a == 0){
        if (b == 0){
            if(c == 0)
            {cout<<"phuuong trinh vo so nghiem";}
            else {
                cout << "phuong trinh vo nghiem";
            }
        }
        else {
            float x = (-c)/b;
            cout  << "phuong trinh co nghiem la:"<< x << endl;
        }
        }
       else if  (a != 0 ) {
            if( denta>0) {
            float x1;
            float x2;
            x1 = ((-b) - can (denta))/( 2 * a);
            x2 = ((-b)+  can(denta))/(2 * a);
             cout << "khi do phuong trinh co 2 nghiem \n";
             cout << "X1= " << x1<<endl;
             cout << "X2= " << x2 <<endl;
            }
             else if ( denta == 0){
                float x3 = (-b)/(2*a);
                cout<<"phuong trinh co nghiem duy nhat la x = "<< x3 <<endl;
             }
             else {
                cout<<"phuong trinh vo nghiem";
             }
             
            }
            return 0;



        }
         
    
    

