 #include<iostream>

  int main()
  {
    int r,n,a=0;
   std:: cin>>n;
    while(n>0)
    {
        r=n%10;
        a= a*10 + r;
        n/=10;
    }
    std::cout<<a;
    return a;
  }