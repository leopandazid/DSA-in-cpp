// 409. Longest Palindrome
// link to question
// https://leetcode.com/problems/longest-palindrome/

/*
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

 

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
Example 2:

Input: s = "a"
Output: 1
Explanation: The longest palindrome that can be built is "a", whose length is 1.
 

Constraints:

1 <= s.length <= 2000
s consists of lowercase and/or uppercase English letters only.
*/

/*
Algorithm

1.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        sort(s.begin(),s.end());  //first sort the string
        int count=0;   
        stack <char> Stack;
        for(int i=0;i<s.size();i++)  //checking pair of letters with stack
        {
            Stack.push(s[i])   ;   
            if(Stack.top()==s[i+1])
            {
                Stack.pop();
                i+=1;
                count+=2;
            }
        
        }
        if(Stack.empty())
            return count;
        else
            return count+1;      
       
    }
};
