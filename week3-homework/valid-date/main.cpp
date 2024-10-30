#include <iostream>
using namespace std;

// Hàm kiểm tra năm nhuận
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Hàm kiểm tra tính hợp lệ của ngày
bool isValidDate(int day, int month, int year) {
    // Kiểm tra tháng hợp lệ
    if (month < 1 || month > 12) {
        return false;
    }

    // Số ngày trong mỗi tháng
    int daysInMonth;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            daysInMonth = isLeapYear(year) ? 29 : 28;
            break;
        default:
            return false; // Tháng không hợp lệ
    }

    // Kiểm tra ngày hợp lệ
    return (day >= 1 && day <= daysInMonth);
}

int main() {
    int day, month, year;

    cout << "Nhập năm: ";
    cin >> year;

    cout << "Nhập tháng: ";
    cin >> month;

    cout << "Nhập ngày: ";
    cin >> day;

    // Kiểm tra và thông báo tính hợp lệ của ngày
    if (isValidDate(day, month, year)) {
        cout << "Đây là ngày tháng năm hợp lệ.\n";
    } else {
        cout << "Đây không phải là ngày tháng năm hợp lệ.\n";
    }

    return 0; // Kết thúc chương trình
}
