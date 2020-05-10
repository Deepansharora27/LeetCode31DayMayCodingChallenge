/*
PROBLEM STATEMENT: 

You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. Check if these points make a straight line in the XY plane.

SAMPLE INPUT TEST CASES : 
Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
Output: false

Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
Output: true


*/

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int points = coordinates.size(); 
        
        //First We will calculate the x and y differences for the first two points : 
        int xdiff = abs(coordinates[1][0] - coordinates[0][0]); 
        int ydiff = abs(coordinates[1][1] - coordinates[0][1]); 
        int current_x_difference ; 
        int current_y_difference ; 
        
        //Then, we will iterate Starting from the third point :
        for(int i=2 ; i<points ; ++i){
            current_x_difference = abs(coordinates[i][0] - coordinates[i-1][0]);
            current_y_difference = abs(coordinates[i][1] - coordinates[i-1][1]); 
            if(ydiff*current_x_difference != xdiff*current_y_difference)
                return false ; 
        } 
        
        return true ; 
    }
};