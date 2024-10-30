#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"so luong so ngau nhien ban muon co ";
    cin >>n;
    srand(time(0));
    for(int i=0;i<n;i++){
        int a=rand();
        cout<<"so ngau nhien thu " <<i+1<<" la:"<<a<<"\n";
    }
return 0;
}
