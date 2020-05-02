
/*
PROBLEM STATEMENT : 
You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".
*/



class Solution {
public:
    int numJewelsInStones(string J, string S) {
        //J is a type of string representing the types of stones that are jewels.
        //S is a type Of String representing the stones that we have currently.
        //Letters in j are Guaranteed distinct 
        int count=0 ; 
        for(int i=0 ; i<J.length() ; i++){
            for(int j=0 ; j<S.length() ; j++){
                if(S[j]==J[i]){
                    count++ ; 
                }else{continue ; }
            }
        }
        return count ; 
    }
};