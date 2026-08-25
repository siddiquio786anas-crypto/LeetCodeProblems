class Solution {
    public int pivotIndex(int[] nums) {
        
        for(int i=0;i<nums.length;i++)
        {
        int ls=0;
        int rs=0;
        for(int x=0;x<i;x++)
        {
            ls+=nums[x];
        }
        for(int j=i+1;j<nums.length;j++)
        {
            rs+=nums[j];
            

        }
        if(ls==rs)
        {
            return i;
        }

        }
        return -1;
        
    }
}