#include<bits/stdc++.h>
using namespace std;

 vector<int> leftRightDifference(vector<int>& nums) 
 {
        int len = nums.size();
        vector<int> lsum(len,0);
        vector<int> rsum(len,0);
        vector<int> ans;
        for(int i=1;i<len;i++){
            lsum[i] = lsum[i-1]+nums[i-1];
        }
        
        for(int i=len-2;i>=0;i--){
            rsum[i] = rsum[i+1]+nums[i+1];
        }
        
        for(int i=0;i<len;i++){
            ans.push_back(abs(lsum[i]-rsum[i]));
        }
        return ans;
 }
int main()
{
        vector<int> nums{10, 4, 8, 3};
        leftRightDifference(nums);
}