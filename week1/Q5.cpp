#include<iostream>
using namespace std;
int main()
{
    int i,j,k,a=0,n=9;
    for(i=1;i<=5;i++)
    {
        
        for(j=a;j<n/2;j++)
       { 
            cout<<" ";
       }
       a++;
       for(k=1;k<i*2;k++)
       {
            cout<<"*";
       }
       cout<<"\n";
       
    }
    return 0;
}