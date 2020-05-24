
/*
PROBLEM STATEMENT : 

Given two lists of closed intervals, each list of intervals is pairwise disjoint and in sorted order.

Return the intersection of these two interval lists.

(Formally, a closed interval [a, b] (with a <= b) denotes the set of real numbers x with a <= x <= b.  The intersection of two closed intervals is a set of real numbers that is either empty, or can be represented as a closed interval.  For example, the intersection of [1, 3] and [2, 4] is [2, 3].)

Input: A = [[0,2],[5,10],[13,23],[24,25]], B = [[1,5],[8,12],[15,24],[25,26]]
Output: [[1,2],[5,5],[8,10],[15,23],[24,24],[25,25]]
Reminder: The inputs and the desired output are lists of Interval objects, and not arrays or lists.

 

Note:

    0 <= A.length < 1000
    0 <= B.length < 1000
    0 <= A[i].start, A[i].end, B[i].start, B[i].end < 10^9

NOTE: input types have been changed on April 15, 2019. Please reset to default code definition to get new method signature.

*/


class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        //Two Closed Interval Lists are Given to us 
        //We need to find out the Intersection Intervals as Output . 
        vector<vector<int>> res ; 
        
        int ASize = A.size(); 
        int BSize = B.size(); 
        
        int FirstPointer = 0 ; 
        int SecondPointer = 0 ; 
        
        vector<int> temp(2); 
        
        while(FirstPointer < ASize && SecondPointer < BSize){
            //Then Conditionally Incrementing Each Of The Pointers 
            //After writing the Logic : 
            if(B[SecondPointer][0] <= A[FirstPointer][1] && A[FirstPointer][0] <= B[SecondPointer][1]){
                temp.at(0) = max(A[FirstPointer][0] , B[SecondPointer][0]); 
                temp.at(1) = min(A[FirstPointer][1] , B[SecondPointer][1]); 
                res.push_back(temp); 
            }
            
            //Now Conditionally Incrementing Each Of the Pointers : 
            if(A[FirstPointer][1] > B[SecondPointer][1]){
                SecondPointer++ ;  
            }else{
                FirstPointer++ ; 
            }
        }
        
        return res ; //Returning Final Vector at the End 
        
    }
};