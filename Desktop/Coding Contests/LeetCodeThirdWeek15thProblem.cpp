

/*

PROBLEM STATEMENT : 

Given two strings s1 and s2, write a function to return true if s2 contains the permutation of s1. In other words, one of the first string's permutations is the substring of the second string.

 

Example 1:

Input: s1 = "ab" s2 = "eidbaooo"
Output: True
Explanation: s2 contains one permutation of s1 ("ba").

Example 2:

Input:s1= "ab" s2 = "eidboaoo"
Output: False

 

Note:

    The input strings only contain lower case letters.
    The length of both given strings is in range [1, 10,000].


*/




class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if(s2.size() < s1.size()) return false ; 
        
        vector<int>permute_string(26,0); 
        vector<int> slide_window(26,0); 
        
        for(auto c : s1)
        {
            permute_string[c-'a'] += 1 ; 
        }
        
        int n = s1.size(); 
        int m = s2.size(); 
        
        int i ; 
        for(i=0 ; i<n ; i++){
            slide_window[s2[i]-'a'] +=1 ; 
        }
        //Sample Input String ==> "eidboaoo"
        for(;i<m ; i++){
            if(permute_string == slide_window)
                return true ;
            slide_window[s2[i]-'a'] += 1 ; 
            slide_window[s2[i-n]-'a'] -= 1 ; 
        }
        
        if(permute_string == slide_window)
            return true ; 
        return false ; 
    }
};