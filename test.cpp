#include <iostream>
using namespace std;

/// <summary>
/// Hàm nhập vào một số nguyên lớn hơn một số nguyên cho trước
/// </summary>
/// <param name="message">Hướng dẫn nhập</param>
/// <param name="number">Số cần phải nhập</param>
/// <param name="minimum">Giá trị tối thiểu</param>
void input(string message, int& number, int minimum) {
    cout << message;
    do {
        cin >> number;
        if (number < minimum) {
            cout << "So nhap vao phai lon hon hoac bang " << minimum << ". Xin hay nhap lai.\n";
        }
    } while (number < minimum);
}


/// <summary>
/// Vẽ hình chữ nhật đặc
/// </summary>
/// <param name="row">Số dòng</param>
/// <param name="column">Số cột</param>
void draw_solid_rectangle(int row, int column) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

/// <summary>
/// Vẽ hình chữ nhật rỗng
/// </summary>
/// <param name="row">Số dòng</param>
/// <param name="column">Số cột</param>
void draw_hollow_rectangle(int row, int column) {
    for (int i = 0; i < row; i++) {
        if (i == 0 || i == row - 1) {
            for (int j = 0; j < column; j++) {
                cout << "*";
            }
            cout << "\n";
        } else {
            cout << "*";
            for (int j = 1; j < column - 1; j++) {
                cout << " ";
            }
            cout << "*\n";
        }
    }
}

int main() {
    cout << "Ve hinh chu nhat dac\n\n";
    int row;
    input("Nhap vao so dong (>= 2): ", row, 2);
    int column;
    input("Nhap vao so cot (>= 2): ", column, 2);

    draw_solid_rectangle(row, column);
    cout << "\n\n";

    draw_hollow_rectangle(row, column);

    int n;
    bool isValid = false;
    int attempts = 0;
    const int MAX_ATTEMPTS = 3;

    do {
        cout << "Nhap so nguyen [1,9]: ";
        cin >> n;

        isValid = (n >= 1 && n <= 9);
        if (!isValid) {
            attempts++;
            if (attempts == MAX_ATTEMPTS) {
                cout << "Ban da nhap sai qua so luot cho phep.\n";
                cout << "Chuong trinh se ket thuc.";
                return 0;
            }
            cout << "So nhap vao khong dung mien gia tri. Xin hay nhap lai.\n";
        }
    } while (!isValid);

    cout << "So ban vua nhap la: " << n << endl;

    return 0; // Kết thúc chương trình thành công
}
