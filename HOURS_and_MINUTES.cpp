#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin>>s;
    int r=s%60;
    int h=s/60;
    cout<<h<<" Hour(s) "<<r<<" Minute(s)";
}