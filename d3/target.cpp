#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    vector<int> v(n);
    vector<int> res(n);
    vector<int> arr;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    for(i=0;i<n;i++){
        cin>>res[i];
    }
    for(i=0;i<n;i++){
        arr.insert(arr.begin()+res[i],v[i]);
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
