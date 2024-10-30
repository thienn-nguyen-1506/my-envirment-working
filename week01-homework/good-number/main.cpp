#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"nhap mot so nguyen:";
    cin>>n;
    int s=0;
    while(n>0){
    int b=n%10;
    s=s+b;
    n=n/10;       
    }
    int c=0;
   while(s>=10){
   int d=s%10;
   c=c+d;
   s=s/10;
   }
   switch(s+c) {
        case 0:
            cout << "Đây là số bad\n";
            break;
        case 1:
            cout << "Đây là số meh\n";
            break;
        case 2:
            cout << "Đây là số meh\n";
            break;
        case 3:
            cout << "Đây là số meh\n";
            break;
        case 4:
            cout << "Đây là số meh\n";
            break;
        case 5:
            cout << "Đây là số meh\n";
            break;
        case 6:
            cout << "Đây là số normal\n";
            break;
        case 7:
            cout << "Đây là số normal\n";
            break;
        case 8:
            cout << "Đây là số good\n";
            break;
        case 9:
            cout << "Đây là số excellent\n";
            break;
   }

   return 0;
    


}