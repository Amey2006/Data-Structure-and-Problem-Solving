class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //     if(nums2.size()==0) return;
    //     int p1=0;
    //     int p2=0;
    //     while(p1<nums1.size() && p2<nums2.size() && p1<(nums1.size()-n) )
    //     {
    //         if(nums1[p1]>nums2[p2])
    //         {
    //             nums1.insert(nums1.begin()+p1,nums2[p2]);
    //             p1++;
    //             p2++;
    //         }
    //         else{
    //             p1++;
    //         }
    //     }

    //     if(p2<nums2.size())
    //     {
    //         while(p2<nums2.size())
    //         {
    //             nums1.insert(nums1.begin()+p1,nums2[p2]);
    //             p1++;
    //             p2++;
    //         }
    //     } 
        
    //     nums1.erase(nums1.begin()+(m+n),nums1.end());

    // }

    //Approch 2

    int idx=m+n-1;
    int i=m-1;
    int j=n-1;
    while(i>=0 && j>=0)
    {
        if(nums1[i]<nums2[j])
        {
            nums1[idx]=nums2[j];
            j--;
            idx--;
        }
        else
        {
            nums1[idx]=nums1[i];
            i--;
            idx--;
        }
    }
    while(j>=0)
    {
        nums1[idx]=nums2[j];
        j--;
        idx--;
    }
    }
};