520. Detect Capital
Easy
2.1K
397
Companies
We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Given a string word, return true if the usage of capitals in it is right.

 

Example 1:

Input: word = "USA"
Output: true
Example 2:

Input: word = "FlaG"
Output: false
 

Constraints:

1 <= word.length <= 100
word consists of lowercase and uppercase English letters.
  
  
  
  class Solution {
public:
    bool detectCapitalUse(string w) {
        if(w.size()==1) return 1;
        if(w[0] >= 'A' && w[0] <= 'Z')
        {
            if(w[1] >= 'A' && w[1] <= 'Z')
            {
              for(int i = 2; i < w.size(); ++i)
              {
                  if(w[i] >= 'a' && w[i] <= 'z') return 0;
              }

            }else
            {
              for(int i = 2; i < w.size(); ++i)
              {
                  if(w[i] >= 'A' && w[i] <= 'Z') return 0;
              }
            }
        }
        else
        {
             for(int i = 1; i < w.size(); ++i)
              {
                  if(w[i] >= 'A' && w[i] <= 'Z') return 0;
              }
        }
        return 1;
    }
};
