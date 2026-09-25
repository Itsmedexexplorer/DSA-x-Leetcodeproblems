class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;

        int left = 0;
        int maxlength = 0;

        for(int right = 0; right < s.length(); right++) {

            while(window.count(s[right])) {
                window.erase(s[left]);
                left++;
            }

            window.insert(s[right]);

            maxlength = max(maxlength, right - left + 1);
        }

        return maxlength;
    }
};