#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums;
    int c=0,n;
    int i=0,j=0,k;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>k;
        nums.push_back(k);
    }
        for(i=0;i<nums.size()-1;i++){
            for(j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    c++;
                }
            }
        }
         cout<<c;
}
