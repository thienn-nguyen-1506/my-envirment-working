#include <iostream>
#include <math.h>
using namespace std;

// Hàm kiểm tra xem n có phải là số chính phương không
bool isPerfectSquare(int n) {
    if (n < 0) {
        return false; // Số âm không thể là số chính phương
    }
    int a = sqrt(n); // Tính căn bậc hai của n
    return (n == a * a); // Kiểm tra xem n có bằng bình phương của a không
}

int main() {
    int n;
    cout << "Nhập vào 1 số nguyên: ";
    cin >> n;

    // Gọi hàm kiểm tra và in kết quả
    if (isPerfectSquare(n)) {
        cout << n << " là số chính phương.\n";
    } else {
        cout << n << " không phải là số chính phương.\n";
    }

    return 0; // Kết thúc chương trình
}
