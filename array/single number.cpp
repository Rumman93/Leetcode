 int singleNumber(vector<int>& nums) {
        set<int> s;
        int i,j,n,sum1=0,sum2=0;
        n=nums.size();
        for(i=0;i<n;i++)
        {
            sum1+=nums[i];
            if(!s.count(nums[i]))
            {
                sum2+=(nums[i]*2);
                s.insert(nums[i]);
            }
        }
        return sum2-sum1;
    }
