#include <iostream> 
#include  <string>
using namespace std;

/// <summary>
/// Hàm nhập vào một số nguyên lớn hơn một số nguyên cho trước
/// </summary>
/// <param name="message">Hướng dẫn nhập</param>
/// <param name="number">Số cần phải nhập</param>
/// <param name="minimum">Giá trị tối thiểu</param>
void input(string message, int& number, int minimum) {
    do {
        cout << message;
        cin >> number;
        if (number <= minimum) {
            cout << "Vui lòng nhập một số lớn hơn " << minimum << "." << endl;
        }
    } while (number <= minimum);
}

int main() {
    int number;
    input("Nhập một số lớn hơn 10: ", number, 10);
    cout << "Số bạn đã nhập là: " << number << endl;
    return 0;
}

/*#include <iostream>
#include <string>
using namespace std;
void input( string massage,int& number,int mininum)
{
    do {
        cout << massage;
        cin >> number;
        cout << "số của bạn vừa nhập không hợp lê,vui lòng nhập lại" << endl;
        ++ number;
    }
    while( number < mininum);
}
int main()
{
    int number;
    input("vui lòng nhập số thuộc đoạn [4,9]",number,3);
    cout << "số bạn vừa nhâp là";
    cout << number ;
    return 0;

}*/

