#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    string s;
    cin>>n;
    cin>>s;
    vector<int> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    char arr[100];
    for(i=0;i<s.size();i++){
        arr[v[i]]=s[i];
    }
    for(i=0;i<s.size();i++){
        cout<<arr[i];
    }
}
