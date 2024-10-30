#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float giagoc;
    float sothangtragop;
    float laisuat;
    float tratruoc;
    float dichvu;
    cout << "nhập vào giá gốc của chiếc điện thoại iphone: " << endl;
    cin >> giagoc;
    cout << "nhập vào số tháng trả góp: " << endl;
    cin >> sothangtragop;
    cout << "nhập vào lãi suất: " << endl;
    cin >> laisuat;
    cout << "nhập vào số tiền khách trả trước: " << endl ;
    cin >> tratruoc;
    cout << " nhập vào phí dịch vụ: " << endl ;
    cin >> dichvu;
    
    cout << "so tiền bạn phải trả hàng tháng là: "<< ( giagoc-tratruoc )*( laisuat/100 )*pow(( 1 + laisuat/100),sothangtragop) << endl;
    cout << " chênh lệch giá gốc so với trả góp là " << abs(( giagoc-tratruoc )*( laisuat/100 )*pow(( 1 + laisuat/100),sothangtragop)-giagoc) << endl;
    return 0;
    
}