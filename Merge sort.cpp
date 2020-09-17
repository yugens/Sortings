class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        int temp[n];
        mergesort(nums,temp,0,n-1);
        return nums;
    }
        void mergesort(vector<int>& nums,int temp[],int l,int r)
        {
            int mid=0;
            if(r>l)
            {
                int mid=(r+l)/2;
                mergesort(nums,temp,l,mid);
                mergesort(nums,temp,mid+1,r);
                merge(nums,temp,l,mid+1,r);
            }
        }
        void merge(vector<int>& nums,int temp[],int l,int mid,int r)
        {
            int i=l;
            int j=mid;
            int k=l;
            while((i<=mid-1)and(j<=r))
            {
                if(nums[i]<=nums[j])
                {
                    temp[k]=nums[i];
                    k++;i++;
                }
                else
                {
                    temp[k]=nums[j];
                    k++;j++;
                }
            }
            while(i<=mid-1)
                temp[k++]=nums[i++];
            while(j<=r)
                temp[k++]=nums[j++];
            for(i=l;i<=r;i++)
                nums[i]=temp[i];
            return;    
        }
    
};
