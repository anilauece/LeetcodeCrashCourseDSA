#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        
        return i == s.size();
    }
};

int main() {
    Solution solution;
    
    bool result = solution.isSubsequence("ace", "abcde");
    cout << (result ? "True" : "False") << endl; // True

    result = solution.isSubsequence("aec", "abcde");
    cout << (result ? "True" : "False") << endl; // False

    result = solution.isSubsequence("abc", "ahbgdc");
    cout << (result ? "True" : "False") << endl; // True

    result = solution.isSubsequence("axc", "ahbgdc");
    cout << (result ? "True" : "False") << endl; // False
    return 0;
}

// Time-complexity : O(n+m)
// Space complexity: O(1)
