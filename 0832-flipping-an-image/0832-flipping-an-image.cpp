class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto &v:image){
            reverse(v.begin(), v.end());
            for(auto &a:v)
                a^=1;
        }
        return image;
    }
};