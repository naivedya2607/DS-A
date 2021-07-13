#include<bits/stdc++.h>
using namespace std;
int solve(int n,int b)
{
int sum=0;
int p=1;
while(n!=0)
{
    int lastdig=n%10;
    n=n/10;
    sum+=lastdig*p;
    p=p*b;

}
return sum;

}
int main()
{
    int n,b;
    cin>>n>>b;
    int slv=solve(n,b);
    cout<<slv;
    return 0;
    
}
