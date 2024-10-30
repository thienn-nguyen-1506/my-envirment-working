#include <iostream>
using namespace std;
int main()
{
    int ngay;
    int thang;
    int nam;
    cout<<"nhap nam:";
    cin>>nam;
    if (nam % 4==0 || ((nam % 100==0) && (nam % 400==0)))
    {
        cout<<"nhap thang";
        cin>>thang;
        switch(thang)
        {
            case 1:case 3: case 5: case 7: case 8 : case 10: case 12:
            cout<<"nhap ngay";
            cin>>ngay;
            if ((1<=ngay) && (ngay<=31))
            {
                cout<<"day la ngay thang nam hop le";
            }
else
{
    cout<<"day la ngay thang nam khong hop le";
}
break;
case 2:
 cout<<"nhap ngay";
 cin>>ngay;
 if((1<=ngay) && (ngay<=29))
 {
    cout<<"day la ngay thang nam hop le";
 }
 else{
    cout<<"day la ngay thang nam khong hop le";
 }
 break;
case 4: case 6 : case 9 : case 11:
 cout<<"nhap ngay";
 cin>>ngay;
 if (ngay>=1 && ngay<=30)
 {
    cout<<"day la ngay thang nam hop le";
 }
 else
 {
    cout<<"day la ngay thang nam khong hop le";
 }
 break;
 default:
 cout<<"day khong phai ngay thang nam hop le";

        }

    }
    else { 
        cout<<"nhap thang";
        cin>>thang;
        switch(thang)
        {
            case 1:case 3: case 5: case 7: case 8 : case 10: case 12:
            cout<<"nhap ngay";
            cin>>ngay;
            if ((1<=ngay) && (ngay<=31))
            {
                cout<<"day la ngay thang nam hop le";
            }
else
{
    cout<<"day la ngay thang nam khong hop le";
}
break;
case 2:
 cout<<"nhap ngay";
 cin>>ngay;
 if((1<=ngay) && (ngay<=28))
 {
    cout<<"day la ngay thang nam hop le";
 }
 else{
    cout<<"day la ngay thang nam khong hop le";
 }
 break;
case 4: case 6 : case 9 : case 11:
 cout<<"nhap ngay";
 cin>>ngay;
 if (ngay>=1 && ngay<=30)
 {
    cout<<"day la ngay thang nam hop le";
 }
 else
 {
    cout<<"day la ngay thang nam khong hop le";
 }
 break;
 default:
 cout<<"day khong phai la ngay thang nam hop le";
  
    }
}

return 0;
}
    

   