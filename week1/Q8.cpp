#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    int i,n,x;
    vector<int>v ={1,2,3,4,5};
    
    for( auto i=v.begin();i<v.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    for( auto i=v.rbegin();i<v.rend();i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}