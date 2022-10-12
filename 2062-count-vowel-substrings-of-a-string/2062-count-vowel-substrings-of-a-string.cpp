class Solution {
public:
     bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    };
    int atMost(string &s, int goal) {
        int ans = 0, i = 0, j = 0, N = s.size();
        unordered_map<char, int> cnt;
        for (; j < N; ++j) {
            if (!isVowel(s[j])) {
                i = j + 1;
                cnt.clear();
                continue;
            }
            cnt[s[j]]++;
           while(cnt.size()> goal){
               cnt[s[i]]--;
               if(cnt[s[i]]==0)cnt.erase(s[i]);
               i++;
           }
            ans += j - i + 1; // this window [i, j] is the maximum window ending at `s[j]` that has at most `goal` number of unique vowels.
        }
        return ans;
    }

    int countVowelSubstrings(string s) {
        return atMost(s, 5) - atMost(s, 4);
    }
};