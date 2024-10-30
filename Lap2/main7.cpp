#include <iostream>
using namespace std;

int main() {
    float a, b;
    
 
    cout << "Nhap vao do dai hai canh a va b cua hinh chu nhat: ";
    cin >> a ;
    cin>>b;
    
    
    float P = 2 * (a + b);  
    float S = a * b;         


    cout << "Chu vi hinh chu nhat la: " << P << endl;
    cout << "Dien tich hinh chu nhat la: " << S << endl;

   
    if (a == b) {
        cout << "Day la hinh vuong!" << endl;
    }

    return 0;
}
