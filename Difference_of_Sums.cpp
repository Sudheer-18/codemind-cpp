#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s1=0,s2=0;
    while(n!=0)
    {
        s1+=(n*n);
        s2+=(n);
        n-=1;
    }
    cout<<abs(s1-(s2*s2))<<endl;
}