#include <iostream>
using namespace std;
int main()
{
    float n;
    cout << "nhập vào số lương của bạn: ";
    cin >> n;
    cout << "số tiền chi tiêu thiết yêu là:" << n*55/100 << endl;
    cout << "số tiề cho tự do tài chính là: " << n*0.1 << endl;
    cout << "số tiền cho giáo dục là: " << n*0.1 << endl;
    cout << "số tiền chi tiêu cho dài hạn là :" << n*0.1 << endl;
    cout << "số tiền chi tiêu cho tận hưởng là: " << n*0.1 << endl;
    cout << "số tiền chi tiêu cho cho đi là: " << n*0.05 << endl;
    return 0;

}