#include <iostream>
using namespace std;

int Snumber(int n) {
    int s = 0;
    while (n > 0) {
        s = n % 10; 
        n = n / 10; 
    }
    return s; 
}
int S2number(int n) {
    int s = Snumber(n); 
    while (s >= 10) {
        s = Snumber(s);
    }
    return s; 
}

void PL(int s) {
    switch (s) {
        case 0:
            cout << "Đây là số bad\n";
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Đây là số meh\n";
            break;
        case 6:
        case 7:
            cout << "Đây là số normal\n";
            break;
        case 8:
            cout << "Đây là số good\n";
            break;
        case 9:
            cout << "Đây là số excellent\n";
            break;
        default:
            cout << "Giá trị không hợp lệ.\n"; 
    }
}

int main() {
    int n;
    cout << "Nhập vào số n: ";
    cin >> n; 

    int number = Snumber(n); 
    int number2 = S2number(number); 
    PL(number2); 

    return 0;
}
