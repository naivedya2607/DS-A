#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,toffee;
    cin>>n>>toffee;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=0; 
    bool res[n];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){ 
        if(arr[i]+toffee>=max){
            res[i]=true;
        }
    else{
        res[i]=false;
    }
    }
    for(int i=0;i<n;i++){
        cout<<res[i];
    }
}
