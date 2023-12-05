#include<iostream>
using namespace std;
int is_prime(int n)
{
    if(n<=1)
        return 0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    int result=is_prime(n);
    if(result==1)
    {
        cout<<"Prime"<<endl;
    }
    else {
        cout<<"Not Prime"<<endl;
    }
}