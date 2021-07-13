//brute_force

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
       for(int i=0;i<n;i++){
           int cnt=0;
           for(int j=0;j<n;j++){
               if(nums[i]==nums[j]){
                   cnt++;
               }
           }
           if(cnt%2!=0){
               return nums[i];
           }
           return -1;
       }
};
  
  //xor
  
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = 0;
        for(int i = 0; i < nums.size(); i++) {
            a^=nums[i];
        }
        return a;
      }
};
  
//sorting
  
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-1; i=i+2)
            if(nums[i]!=nums[i+1]) return nums[i];
        return nums[nums.size()-1];
      }
};
