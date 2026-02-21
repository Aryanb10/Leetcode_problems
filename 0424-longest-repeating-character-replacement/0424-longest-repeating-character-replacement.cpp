class Solution {
public:
    int characterReplacement(string s, int k) {
        int cnt[26]{};
        int left = 0, maxfreq= 0;
        int n = s.length();

        for (int right = 0; right< n; right++) {
            maxfreq = max(maxfreq, ++cnt[s[right] - 'A']);

            if (right - left + 1 - maxfreq > k) {
                --cnt[s[left++] - 'A'];
            }
        }
        return n - left;
    }
};