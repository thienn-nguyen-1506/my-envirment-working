#include <iostream>
using namespace std;
bool validate( int ngày, int tháng, int năm)
{
    if ( năm < 1900)
    {
        return false;
    }
if ( (tháng < 1 ) || ( tháng > 12 ) )
{
    return false;
}
if ( ( ngày < 1) || ( ngày > 31) )
{
    return false;
}
int maxngay[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
if ( ((năm % 4==0) && (năm % 100 !=0)) || ( năm % 400 == 0) )
{
     maxngay[2]=29;
}
if ( (ngày < 1 || ngày > maxngay[tháng] ) )
{
    return false;
}
return true;
}
void nextday(int& ngày,int& tháng ,int& năm)
{
    int maxngay[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
if ( ((năm % 4==0) && (năm % 100 !=0)) || ( năm % 400 == 0) )
{
     maxngay[2]=29;
}
ngày ++;
if ( ngày > maxngay[tháng] )
{
    ngày=1;
    tháng++;
}

if (tháng > 12)
{
    tháng = 1;
    năm++;
}

}
int main()
{
    int ngày;
    int tháng;
    int năm;
    cout << "nhập ngày";
    cin >> ngày;
    cout << "nhập tháng";
    cin>> tháng;
    cout << " nhập năm ";
    cin >> năm;
    if ( validate( ngày , tháng ,năm ) )
    {
        cout<< " đây là ngày hợp lệ" << endl;
        nextday( ngày ,tháng, năm);
        
            cout <<" ngày kế tiếp là:" << ngày << "/" << tháng << "/" << năm << endl;
    }
        
        else 
        {
            cout << " đây không phải ngày hợp lệ "<< endl;
        }
    
    return 0;

}

