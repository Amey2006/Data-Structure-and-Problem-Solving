#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> findPeakGrid(std::vector<std::vector<int>>& mat) {
        int l = 0, r = mat.size() - 1;
        
        while (l < r) {
            int mid = l + (r - l) / 2;
            
            int j = std::distance(mat[mid].begin(), 
                                  std::max_element(mat[mid].begin(), mat[mid].end()));
            
            if (mat[mid][j] > mat[mid + 1][j]) {
                r = mid; 
            } else {
                l = mid + 1; 
            }
        }
        
        int j = std::distance(mat[l].begin(), 
                              std::max_element(mat[l].begin(), mat[l].end()));
        return {l, j};
    }
};