#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums;
    int i=0,j=0,n;
    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter element of array";
    for(i=0;i<n;i++)
    {
        cin>>j;
        nums.push_back(j);
    }
    if(nums.size()==0){
         return 0;
     }
   for(i=0;i<nums.size();i++){
        if(i<nums.size()-1){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
    }
    for(i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
}
