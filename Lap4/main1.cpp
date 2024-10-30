#include <iostream>
#include <string>
#include <math.h>
using namespace std;
void input(string massage,int &n)
{
    cout << massage;
    cin >> n;
}
void tìm_ước(int n)
{
    cout << "các ước số của số " << " " << n  << " "<< "gồm có" << endl;
    int j = 1;
    for (int i = 1;i <= n;i++)
    {
        if (n % i == 0)
        {
            cout << "ước thứ " << j  << " " <<"là" << " " << i << endl;
            j = j + 1;
        }
        
    }
}
void tính_tổng_các_ước(int n){
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        if ( n % i ==0)
        {
            s=s+i;
        }
    }
    cout << "tổng các ước của số " << n << " " << "là" << " "<< s << endl;
}
void tính_tích_các_ước(int n)
{
    int s = 1;
    for (int i = 1; i <= n; i++)
    {
        if ( n % i ==0)
        {
            s=s*i;
        }
    }
    cout << "tích các ước của số " << n << " " << "là" << " "<< s << endl;
}
void số_lượng_của_ước_số( int n)
{
    int s = 0;
    for ( int i = 1; i <= n ; i++ )
    {
        if ( n % i == 0)
        {
            s = s + 1;
        }
    }
    cout << "số lượng ước số của số " << " " << n << " " << "là" << " " << s << endl;
}
void liệt_kê_ước_số_lẻ(int n)
{
    cout << "các ước số lẻ lần lượt là" << endl;
    for ( int i = 1; i <= n ; i++ )
    {
        if ( ( i % i == 0 ) && (  i % 2 == 1 ) )
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int n;
    input("nhập vào một số nguyên n: ",n);
    tìm_ước(n);
    số_lượng_của_ước_số(n);
    tính_tổng_các_ước(n);
    tính_tích_các_ước(n);
    liệt_kê_ước_số_lẻ(n);
    return 0;

}