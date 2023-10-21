#include<iostream>
int main()
{
    int n;
    std::cin>>n;
    int y=n/365;
    int w=(n%365)/7;
    std::cout<<y<<std::endl;
    std::cout<<w<<std::endl;
}