#include <iostream>
#include <cstdlib> // Thư viện cho rand() và srand()
#include <ctime>   // Thư viện cho time()
using namespace std;
bool generateRandomNumbers(int n) {
    if (n <= 0) {
        cout << "Số lượng phải lớn hơn 0.\n";
        return false; // Trả về false nếu n không hợp lệ
    }

    srand(static_cast<unsigned int>(time(0))); 
    
    for (int i = 0; i < n; i++) {
        int a = rand(); 
        cout << "Số ngẫu nhiên thứ " << i + 1 << " là: " << a << "\n";
    }
    
    return true; 
}

int main() {
    int n;
    cout << "Số lượng số ngẫu nhiên bạn muốn có: ";
    cin >> n; 

   
    if (!generateRandomNumbers(n)) {
        cout << "Không thể sinh số ngẫu nhiên.\n";
    }

    return 0;
}


