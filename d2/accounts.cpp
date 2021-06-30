#include <bits/stdc++.h>
using namespace std;

int main(){
    int max=0;
    int cst=0;
    int sum=0;
    int rw,cl;
    cin>>rw>>cl;
    int acc[100][100];
    for(int i=0;i<rw;i++){
        for(int j=0;j<cl;j++){
            cin>>acc[i][j];
        }
    }
    for(int i=0;i<rw;i++){
        sum=0;
        for(int j=0;j<cl;j++){
            sum=sum+acc[i][j];
        }
        if(sum>max){
            max=sum;
        }
    }
    cout<<max;
}
