
/*
PROBLEM STATEMENT : 
Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
Note: You may assume the string contain only lowercase letters.
*/

class Solution {
public:
    int firstUniqChar(string s) {
         map<char,int> myMap ; 

    for(int i=0 ; i<s.length() ; i++){
        myMap[s[i]]++ ; 
    }

    map<char,int> :: iterator it  = myMap.begin() ; 
    int index_occured = -1 ; 
   for(int i=0 ; i<s.length() ; i++){
       if(myMap[s[i]] == 1){
            index_occured = i ; 
           break ; 
       }
   }
        
        if(index_occured != -1){
            return index_occured ; 
        }else{return -1 ; }
    }
};
