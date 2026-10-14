class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans="";
        while(sum>0 && num)
        {
            if(sum>=9)
            {
                sum-=9;
                ans.append("9");
            }
            else{
                ans.append(to_string(sum));
                sum-=sum;
            }
            num--;
        }
        if(sum!=0)
        {
            return "";
        }
        else if(sum==0 && num)
        {
            while(num--)
            {
                ans.append("0");
            }
        }
        return ans;
    }
};