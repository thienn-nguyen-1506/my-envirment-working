#include <iostream>
using namespace std;
int main()
{
    float n;
    float lai;
    cout << "nhập vào số tiền mà bạn muốn gửi ngân hàng: ";
    cin >> n;
    cout << "nhập lãi ngân hàng: ";
    cin >> lai;
    cout << "sau 12 tháng số tiền lãi là: " << n*(lai/100) << endl;
    cout << "số tiền lãi 1 tháng là: "<< (n*lai/100)/12 << endl;
    cout << "tổng số tiền có được sau 1 năm là: "  << n*(1+lai/100) << endl;
    return 0;
}

