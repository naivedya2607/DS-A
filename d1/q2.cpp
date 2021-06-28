#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int i,j,n,key;
    cout<<"Enter size of array";
    cin>>j;
    cout<<"Enter element of array";
    for(i=0;i<j;i++)
    {
        cin>>n;
        v.push_back(n);
    }
    cout<<"Enter the key";
    cin>>key;
    for(i=0;i<v.size();i++)
    {
        if(v[i]==key)
        {
            v.erase(v.begin()+i);
        }
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
