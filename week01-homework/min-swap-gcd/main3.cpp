#include <iostream>
using namespace std;

// Hàm tính GCD (Ước chung lớn nhất) sử dụng thuật toán Euclid
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b; // Lấy phần dư
        a = temp;  // Gán giá trị mới cho a
    }
    return a; // Khi b == 0, a chính là GCD
}

int main() {
    int num1, num2;
    
    // Nhập hai số từ người dùng
    cout << "Nhập số thứ nhất: ";
    cin >> num1;
    cout << "Nhập số thứ hai: ";
    cin >> num2;
    
    // Tính GCD của hai số
  if (gcd(num1,num2))
{
 cout << "Ước chung lớn nhất của " << num1 << " và " << num2 << " là: "  << endl;
}
    
    // In ra kết quả
    cout << "Ước chung lớn nhất của " << num1 << " và " << num2 << " là: " << endl;

    return 0;
}
