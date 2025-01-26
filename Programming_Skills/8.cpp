class Solution 
{
public:
    int arraySign(vector<int>& nums) 
    {
        long int mul=1;
        int i=0;
        int sign;
        int len=nums.size();
        for(i=0;i<len;i++)
        {
            mul=mul*nums[i];
        }
        if(mul<0){
            return -1;
        }
        else if(mul>0)
        {
            return 1;
        }

        return 0;
    }
};