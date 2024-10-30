#include <iostream>
using namespace std;

// Hàm kiểm tra xem n có phải là số nguyên tố không
bool isPrime(int n) {
    // Kiểm tra các trường hợp đặc biệt
    if (n <= 1) {
        return false; // Không phải số nguyên tố
    }
    if (n == 2 || n == 3) {
        return true; // 2 và 3 là số nguyên tố
    }
    if (n % 2 == 0) {
        return false; // Loại bỏ các số chẵn lớn hơn 2
    }

    // Kiểm tra từ 3 đến sqrt(n) để tìm ước số
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false; // Không phải số nguyên tố
        }
    }
    
    return true; // Là số nguyên tố
}

int main() {
    int n;
    cout << "Nhập số bạn muốn kiểm tra: ";
    cin >> n;

    // Gọi hàm kiểm tra và in kết quả
    if (isPrime(n)) {
        cout << n << " là một số nguyên tố.\n";
    } else {
        cout << n << " không phải là số nguyên tố.\n";
    }

    return 0; // Kết thúc chương trình
}
