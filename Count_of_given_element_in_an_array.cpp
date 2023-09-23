#include<iostream>
#include<vector>
using namespace std;

int main()
{
   vector<int> v1;
   int x,n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       v1.push_back(x);
   }
   int k,count=0;
   cin>>k;
   for(int i=0;i<v1.size();i++)
   {
       if(k==v1[i])
       {
           count+=1;
       }
   }
   cout<<count;
}
