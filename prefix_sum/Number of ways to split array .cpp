class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        vector<long>v(nums.size());
        int ans=0;
        v[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            v[i]=nums[i]+v[i-1];
        }
        for(int i=0;i<nums.size()-1;i++){
            if(v[i]>=(v[v.size()-1]-v[i]))
            ans++; cout<<i<<endl;
        }
        return ans;
    }
};