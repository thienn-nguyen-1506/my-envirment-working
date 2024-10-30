#include <iostream>;
using namespace std;
int main(){
    int a;
    int b;
    cout << "nhap vao nguyen a: ";
    cin >> a;
    cout << "nhap vao so nguyen b: ";
    cin >> b;
    int temp=a;
    a=b;
    b=temp;
    cout << "sau khi hoan vi \n";
    cout << "gia tri cua a la: " << a << endl;
    cout << "gia tri cua b la: " << b << endl;
    return 0;





}
