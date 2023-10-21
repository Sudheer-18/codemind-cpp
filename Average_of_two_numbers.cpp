#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    float avg=(n+m)/2.0;
    cout<<fixed<<setprecision(2);
    cout<<"Average of "<<n<<" and "<<m<<" is: "<<avg<<endl;
}