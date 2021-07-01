#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector<int>nums;
   vector<int>result;
    int count=0;
    int n,k;
    cin>>n;
     for(int i=0;i<n;i++){
        cin>>k;
        nums.push_back(k);
    }
    for(int i =0; i< nums.size(); i++){
        for(int j =0; j<nums.size(); j++){
            if(nums[i] > nums[j])
                count++;
            }
        result.push_back(count);
        count=0;
    }
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }

}
