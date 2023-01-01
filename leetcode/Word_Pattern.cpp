290. Word Pattern
Easy
Given a pattern and a string s, find if s follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.

 

Example 1:

Input: pattern = "abba", s = "dog cat cat dog"
Output: true
Example 2:

Input: pattern = "abba", s = "dog cat cat fish"
Output: false
  
 Constraints:

1 <= pattern.length <= 300
pattern contains only lower-case English letters.
1 <= s.length <= 3000
s contains only lowercase English letters and spaces ' '.
s does not contain any leading or trailing spaces.
All the words in s are separated by a single space.
  
  
 SOLUTIon
 
 
 class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, map<string , int> > m1;
        map<string, map<char , int> > m2;
        int j = 0;
        int n = s.size();
        int i = 0;
        for( i = 0; i  < pattern.size() && j < n; ++i)
        {
            string x = "";
            while(j < n)
            {   
                if(s[j] == ' ')
                {
                    j++;
                    break;
                }
                x += s[j];
                j++;
            }
            cout<<pattern[i] << " "<<x<<endl;
            char c = pattern[i];
            m1[c][x]++;
            m2[x][c]++;
            if(m1[c].size() > 1 || m2[x].size() > 1) return 0;
        }
        if(j < n || i < pattern.size() ) return 0;
        return 1;
    }
};
