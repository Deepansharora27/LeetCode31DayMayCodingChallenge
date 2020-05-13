class Solution {
public:
    string removeKdigits(string num, int k) {
        int size = num.length(); 
        
        if(k==size) return "0" ; 
        
        
        stack<char> myStack ; //Created this New Stack of Characters.
        
        int counter = 0 ; 
        //Pushing the Individual Characters Of The String Onto the Stack : 
        while(counter < size){
            //The Greedy Algorithm at Work here 
            while(k>0  && !myStack.empty() && myStack.top() > num[counter]){
                myStack.pop(); 
                k-- ; 
             }
            
            myStack.push(num[counter]); 
            counter++ ; 
        }
        
        while(k>0){
            myStack.pop(); 
            k-- ; 
        }
        
        string newString =""; 
        while(!myStack.empty()){
            char current_char = myStack.top(); 
            newString.push_back(current_char); 
            myStack.pop(); 
        }
        reverse(newString.begin() , newString.end()); 
        
       
        
        while(newString.length() > 1 && newString[0] == '0'){
            newString.erase(newString.begin() + 0 ); 
        }
        
        return newString ; 
        
    }
};

