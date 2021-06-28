#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    vector<int> b;
    int i=0,j=0,l=0,n=0,y=0;
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the elements\n";
    for(i=0;i<n;i++)
    {
        cin>>j;
        a.push_back(j);
    }
    l = a.size()/2;
    y = l;
    for(i=0;i<y;i++)
    {
        b.push_back(a[i]);
        b.push_back(a[l]);
        l++;
    }
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
