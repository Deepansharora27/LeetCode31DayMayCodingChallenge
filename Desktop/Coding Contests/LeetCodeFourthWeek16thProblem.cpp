
/*
PROBLEM STATEMENT : 

Given a string, sort it in decreasing order based on the frequency of characters.

Example 1:

Input:
"tree"

Output:
"eert"

Explanation:
'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.


Example 2:

Input:
"cccaaa"

Output:
"cccaaa"

Explanation:
Both 'c' and 'a' appear three times, so "aaaccc" is also a valid answer.
Note that "cacaca" is incorrect, as the same characters must be together.


*/



class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> hash ; 
        priority_queue<pair<int,char>> pq ; 
        
        for(int i=0 ; i<s.length() ; i++)
            hash[s[i]]++ ; 
        
        for(auto it : hash){
            pq.push(make_pair(it.second , it.first)); //Here , Our Priority Queue is automatically doing the sorting for us . 
        }
        
        string ans  ; 
        while(!pq.empty()){
            pair<int,char> top = pq.top(); 
            pq.pop(); 
            while(top.first > 0){
                ans += top.second ; 
                top.first-- ; 
            }
        }
        
        return ans ; 
    }
};