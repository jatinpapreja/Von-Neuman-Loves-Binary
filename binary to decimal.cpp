#include<iostream>
using namespace std;
int main()
{
    int n,m,i,pow,sum;
    cin>>m;
    cout<<endl;
    for(i=1;i<=m;i++)
    {cin>>n;
    sum=0;
    ///sum will contain the decimal representation of binary form of the input number.

    ///decimal number is formed by multiplying the given binary term with the power of 2.
    ///power of 2 will change from 0 to (length of binary number - 1).

    pow=1;   ///initially power of 2 is 0. Hence,pow(2,0) = 1.

    while(n)
    {
        int rem=n%10;
        sum=sum+ rem*pow;
        pow*=2;
        n=n/10;
    }
    cout<<sum<<endl;;
}
return 0;
}
