#include <iostream>
#include <string>
#include <math.h>
using namespace std;
void input(string massage,int &n)
{
	cout << massage;
	cin >> n;
}
void cacuocso(int n)
{
	cout << "cac uoc so cua" << " " << n  << " bao gom "<< "" << endl;
	int j = 1;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << "uoc so thu " << j  << " " <<"la" << " " << i << endl;
			j = j + 1;
		}

	}
}
void tongcacuocso(int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		if ( n % i ==0)
		{
			s=s+i;
		}
	}
	cout << "gia tri cua tong cac uoc so " << n << " " << "la" << " "<< s << endl;
}
void tichcacuocso(int n)
{
	int s = 1;
	for (int i = 1; i <= n; i++)
	{
		if ( n % i ==0)
		{
			s=s*i;
		}
	}
	cout << "gia tri cua tich cac uoc so " << n << " " << "la" << " "<< s << endl;
}
void lietkeuocso( int n )
{
	int s = 0;
	for ( int i = 1; i <= n ; i++ )
	{
		if ( n % i == 0)
		{
			s = s + 1;
		}
	}
	cout << "so cac uoc so cua" << " " << n << " " << "la" << " " << s << endl;
}
void uocsole(int n)
{
	cout << "cac uoc so le cua " << " " << n << " lan luot la " << endl;
	for ( int i = 1; i <= n ; i++ )
	{
		if ( ( i % i == 0 ) && (  i % 2 == 1 ) )
		{
			cout << i << endl;
		}
	}
}
void tinh_tong_cac_uoc_so_chan( int n )
{
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		if ( ( n % i ==0) && ( i % 2 == 0) )
		{
			s=s+i;
		}
	}
	cout << "gia tri cua tong cac uoc so chan la " << s << endl;
}
void tinh_tich_cac_so_le( int n)
{
	int s = 1;
	for (int i = 1; i <= n; i++)
	{
		if ( ( n % i ==0) && ( i % 2 == 1) )
		{
			s=s*i;
		}
	}
	cout << "gia tri cua tich cac uoc so le cua " << n << " " << "la" << " "<< s << endl;
}
void so_luong_uoc_so_chan ( int n )
{
	int s = 0;
	for ( int i = 1; i <= n; i++ )
	{
		if ( ( n % i == 0) && ( i % 2 == 0 ) )
		{
			s = s + i;
		}
	}
	cout << "so luong cac uoc so chan cua so " << n << " " << "la " << s << endl;
}
void tong_cac_uoc_so_nho_hon_n(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
	{
		if ( n % i ==0)
		{
			s=s+i;
		}
	}
	cout << "gia tri cua tong cac uoc so nho hon " << n << " " << "la" << " "<< s << endl;
}
void min_uoc_so_cua_n( int n)
{

}
int main()
{
	int n;
	input("nhap vao mot so nguyen ",n);
	cacuocso(n);
	lietkeuocso(n);
	tongcacuocso(n);
	tichcacuocso(n);
	uocsole(n);
	tinh_tong_cac_uoc_so_chan(n);
	tinh_tich_cac_so_le(n);
	so_luong_uoc_so_chan(n);
	tong_cac_uoc_so_nho_hon_n(n);

	return 0;
}