#include<iostream>
#include<vector>
using namespace std;


int main() {
    
    string s="ysugfyusbhfkcsdciuhds";
    int left=0;
    int right=0;
    int n=s.length();
    vector<int>map(255,-1);
    int maxlen=-1;
 
	while(right<n)
	{
		if(map[s[right]]!=-1)
		{
			if(map[s[right]]>=left)
				left=map[s[right]]+1;
		}
		int len=right-left+1;
		maxlen=max(maxlen,len);
		map[s[right]]=right;
		right++;
		
	}
    
    
    return 0;
}