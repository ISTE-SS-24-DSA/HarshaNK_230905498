#include<iostream>
using namespace std;
    int main()
    {
        int i,n,max;
        int a[100];
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        max=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        cout<<"Max = "<<max;

        return 0;
    }