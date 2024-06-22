#include<iostream>
using namespace std;
    int main()
    {
        int n,a=1;
        cin>>n;
        if(n<=1)
            cout<<n<<" is neither composite nor prime.";
        if(n==2)
            a=1;
        else
            for(int i=3;i<=n/2;i++)
            {
                if(n%i==0)
                    a=0;
            }
        if(a==0)
            cout<<n<<" is a composite number.";
        else
            cout<<n<<" is a prime number.";
    return 0;
    }