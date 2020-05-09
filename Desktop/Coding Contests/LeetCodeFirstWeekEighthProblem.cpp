
/*

PROBLEM STATEMENT : 

Given a positive integer num, write a function which returns True if num is a perfect square else False.

Note: Do not use any built-in library function such as sqrt.

Example 1:

Input: 16
Output: true

Example 2:

Input: 14
Output: false


*/



class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num==1){
            return true ; 
        }
        bool isPerfect = false ; 
        for(long int i=2 ; i<=sqrt(num) ; i++){
            //Because 1 will divide every number by itself ,so we will not include it in the Loop Value
            if(i*i == num){
                isPerfect = true ; 
            }
        }
        
        if(isPerfect){
            return true ; 
        }else{
            return false ; 
        }
    }
};