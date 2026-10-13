class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int>squares(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            squares[i]=nums[i]*nums[i];
        }
        sort(squares.begin(),squares.end());
        int left=0;
        int right=squares.size()-1;
        long long score=0;
        while(left<right)
        {
            score=score+(squares[right--]-squares[left++]);
        }
        if(left==right)
        {
            
                score+=squares[left];
           
        }
        return score;
    }
};