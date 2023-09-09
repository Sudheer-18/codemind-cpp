#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k,flag=0;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(k==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"True";
    }
    else {
        cout<<"False";
    }
}