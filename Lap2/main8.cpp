#include <iostream>
#include <cmath>  
using namespace std;


double tinhDienTich(double a, double b, double c) {
    double p = (a + b + c) / 2;  // Nửa chu vi
    return sqrt(p * (p - a) * (p - b) * (p - c));  // Công thức Heron
}

int main() {
    double a;
    double b;
    double c;

    cout << "Nhap vao do dai ba canh a, b, c cua tam giac: ";
    cin >> a;
     cin >> b;
     cin >> c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Ba canh vua nhap khong tao thanh tam giac." << endl;
        return 0;  
    }

    
    double chuVi = a + b + c;
    double dienTich = tinhDienTich(a, b, c);

    cout << "Chu vi tam giac la: " << chuVi << endl;
    cout << "Dien tich tam giac la: " << dienTich << endl;

    if (a == b && b == c) {
        cout << "Day la tam giac deu." << endl;
    }
    else if (a == b || b == c || a == c) {
        cout << "Day la tam giac can." << endl;
    }
    else {
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "Day la tam giac vuong." << endl;
        } else {
            cout << "Day la tam giac thuong." << endl;
        }
    }

    if ((a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) &&
        (a == b || b == c || a == c)) {
        cout << "Day la tam giac vuong can." << endl;
    }

    return 0;
}
