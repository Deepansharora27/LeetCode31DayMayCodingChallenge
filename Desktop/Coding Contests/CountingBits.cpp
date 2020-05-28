#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 
vector<int> countBits(int num){
    vector<int> ans ; 
    for(int i=0 ; i<= num ; i++){
        int res = __builtin_popcount(i); 
        ans.push_back(res); 
    }

    return ans ; 
    
}


int main(){

    int num ; 
    cin >> num ; 
    countBits(num); 
}