#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v1;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        v1.push_back(k);
    }
    int cnt=0;
    for(int i=0;i<v1.size();i++)
    {
        if(v1[i]%m!=0)
            cnt+=1;
    }
    cout<<cnt<<endl;
}