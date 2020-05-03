

/*
PROBLEM STATEMENT :
Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note. 
*/


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count = 0 ; 
        for(int i=0 ; i<ransomNote.length() ; i++){
            char ransomChar = ransomNote[i]; 
            for(int j=0 ; j<magazine.length() ; j++){
                if(magazine[j] == ransomChar){
                    count++ ; 
                    magazine[j]='.';
                    break ; 
                }
            }
        }
        
        if(count ==  ransomNote.length()){
            return true; 
        }else{
            return false  ; 
        }
    }
};