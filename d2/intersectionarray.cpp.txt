#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums1;
    vector<int>nums2;
    int arr[1001]={0};
    int n,m,k;
    cin>>n>>m;
     for(int i=0;i<n;i++){
        cin>>k;
        nums1.push_back(k);
    }
     for(int i=0;i<m;i++){
        cin>>k;
        nums2.push_back(k);
    }
    for(int i=0;i<nums1.size();i++)
    {
        arr[nums1[i]]=1;
    }
    vector<int>v;
    for(int i=0;i<nums2.size();i++)
    {
        if(arr[nums2[i]]==1)
            {
                v.push_back(nums2[i]);
                arr[nums2[i]]=0;
            }
    }
    for(int i=0;i<v.size();i++){
         cout<<v[i];
    }
}
