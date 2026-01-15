class Solution {
  public:
    int transform(string A, string B) {
       if(A.length()!=B.length())return -1;
       unordered_map<char,int>freqA;
       unordered_map<char,int>freqB;
       for(int i=0;i<A.length();i++)
       {
           freqA[A[i]]++;
           freqB[B[i]]++;
       }
       for(auto it:freqA)
       {
           if(freqB[it.first]!=it.second)
           {
               return -1;
           }
       }
       int i=A.length()-1;
       int j=B.length()-1;
       int count=0;
       while(i>=0 && j>=0)
       {
           if(A[i]==B[j])
           {
               i--;
               j--;
           }
           else
           {
               i--;
               count++;
           }
       }
       return count;
    }
};
