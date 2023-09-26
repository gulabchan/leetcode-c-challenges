class Solution {
public:
    string removeDuplicateLetters(string s) {
        // Step 1: Initialize vectors to keep track of character counts and usage
        vector<int> count(26, 0);
        vector<bool> used(26, false);

        // Step 2: Count the occurrences of each character in the input string
        for (char c : s) {
            count[c - 'a']++;
        }
        string ans = "";
        // Step 3: Process each character in the input string
        for (char c : s) {
            // Decrement the count for the current character
            count[c - 'a']--;

            // If the character is already used, skip it
            if (used[c - 'a']) {
                continue;
            }

            // Process the character to ensure the correct order
            while (!ans.empty() && c < ans.back() && count[ans.back() - 'a'] > 0) {
                // Pop characters from 'ans' until the correct position is found
                used[ans.back() - 'a'] = false;
                ans.pop_back();
            }
            // Append the character to the result string and mark it as used
            ans += c;
            used[c - 'a'] = true;
        }
        return ans;
    }
};