#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int r;
    cin>>r;
    float ar=3.14*r*r;
    float per=2*3.14*r;
    cout<<fixed<<setprecision(2);
    cout<<ar<<endl;
    cout<<per;
}