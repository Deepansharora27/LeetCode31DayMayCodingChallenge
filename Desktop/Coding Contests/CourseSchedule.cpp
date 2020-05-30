class Solution {
public:
    
    bool helper_DFS(vector<vector<int>> &graph , vector<bool>&visited , int i){
        visited[i] = true ; 
        
        //At this Point Of Line , I need to dive in a Little Bit Deeper. 
        for(auto node : graph[i]){
            if(visited[node] == true || (visited[node] == false && !helper_DFS(graph , visited,node))){
                return false ; 
            }
        }
        visited[i] = false ; 
        return true ; 
    }
    
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int len = prerequisites.size(); 
        
        vector<vector<int>> adj(numCourses+1);
        
        //Iterating Over the Edge List : 
        for(int i=0 ; i<len ; i++){
            int a = prerequisites[i][0] ,  b = prerequisites[i][1]; 
            adj[b].push_back(a); 
        }
        
        vector<bool> visited(numCourses,false); 
        
        for(int i=0 ; i<numCourses ; i++){
            if(helper_DFS(adj , visited , i) == false) 
                return false ; 
        }
        
        return true ; 
    }
};