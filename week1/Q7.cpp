#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    int i,n,x;
    vector<int>v;
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter the elements into the vector"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    sort(v.begin(),v.end());     
    for(auto i:v)
    {
        cout<<(i)<<" ";
    }
    cout<<endl;
    
    sort(v.rbegin(),v.rend());
    for(auto i:v)
    {
        cout<<(i)<<" ";
    }

    return 0;
}