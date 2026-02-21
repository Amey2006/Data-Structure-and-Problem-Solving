#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
       int n1=arr1.size();
       int n2=arr2.size();
       int n3=arr3.size();
       
       int p1,p2,p3;
       p1=p2=p3=0;
       
       vector<int>ans;
       int index=0;
       int mx;
       while(p1<n1 && p2<n2 && p3<n3)
       {
           
            mx=max(arr1[p1],arr2[p2]);
            mx=max(mx,arr3[p3]);
            // cout<<"Max : "<<endl;
            while(p1<n1 && arr1[p1]<mx)p1++;
            while(p2<n2 && arr2[p2]<mx)p2++;
            while(p3<n3 && arr3[p3]<mx)p3++;
            
           if(p1<n1 && p2<n2 && p3<n3 &&
               arr1[p1] == arr2[p2] &&
               arr2[p2] == arr3[p3]) {
                
                if(ans.empty() || ans.back() != arr1[p1])
                    ans.push_back(arr1[p1]);
                
                p1++; p2++; p3++;
            }
       }
        if(ans.size()>0)return ans;
        else {
            ans.push_back(-1);
            return ans;
        }
    }
};