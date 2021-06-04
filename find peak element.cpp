 int findPeakElement(vector<int>& nums) {
        int left=0,mid=0,right=1,len=nums.size()-1,flag=0,maxi;
        if(len==0)
            return len;
        else if(len==1)
        {
            maxi=max(nums[0],nums[1]);
            if(nums[0]==maxi)
                return 0;
            else
                return 1;
        }
        else
        {   //nums[left]=-1;
            int value=-1;
            while(right<=len)
        {
            if(nums[mid] > value && nums[mid] > nums[right])
            {
                return mid;
                cout<<mid<<endl;
            }
            else
            {
            value=nums[mid];
            mid++;
            right++;
            }

        }
        }


            return  right-1;
    }
