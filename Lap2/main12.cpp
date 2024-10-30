#include <iostream>
using namespace std;
bool namnhuan(int n)
{
    if (( n % 4 == 0 && n % 100 !=0 ) || (n % 400 == 0))
   { 
    return true;}
    else{
        return false;
}
}
int main()
{
    int n;
  cout << " nhập vào năm bạn muốn kiểm tra: ";
  cin >> n;
  if (namnhuan(n)) {
    cout << "đây la năm nhuận" << endl;

  }
  else {
    cout << "đây không phải năm nhuận"<<endl;
  }
  return 0;
}



