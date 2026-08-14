class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count_s;
        unordered_map<char, int> count_t;
        
        // loop through s put all letters into holding (are they characters?)
        // then loop through t and check if it is holding (wont work because it is just a set)
        // OR count number of characters in s with hash map then loop through t and compare count
        if (s.length() != t.length()) {
            return false;
        }

        for (int i = 0; i < s.length(); i++) {
            count_s[s[i]]++; // how do I make it default to zero like in python?
            count_t[t[i]]++; // count both at the same time since they are the same length? 
        }
        
        // check that the counts match
        // for (int j=0; j < s.length(), i++) {
        //     if (count_s[s[j]] != count_t[s[j]]){
        //         return false;
        //     }
        // }
        if (count_s != count_t) {
            return false;
        }
        return true;

        // overall Time O(n + n) = O(n), Space = O(n + n) = O(n)
    }
};
