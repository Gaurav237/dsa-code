// check for balanced parenthesis in a string

#include <iostream>
#include <stack>
using namespace std;

bool matching(char a, char b){
    return ((a == '(' && b ==')') || (a == '{' && b == '}') || (a == '[' && b == ']'));
}

// Logic: The idea is to put all the opening brackets in the stack.
// Whenever you hit a closing bracket, search if the top of the stack
// is the opening bracket of the same nature. 
// If this holds then pop the stack and continue the iteration, 
// in the end if the stack is empty, it means all brackets are well-formed .
// Otherwise, they are not balanced.
bool balanced_parenthesis(const string &str){
    stack<char> s;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            s.push(str[i]);
        }else{
            if(s.empty() == true){
                return false; 
            }else if(matching(s.top(),str[i]) == false){
                return false;
            }else{
                s.pop();
            }
        }
    }
    
    return (s.empty() == true);
}


int main() {
    string s1 = "(())";
    string s2 = "((())";
    string s3 = "[{]}";
    string s4 = "{}[()]";
    string s5 = ")(";

    cout << boolalpha;
    cout << balanced_parenthesis(s4);

}
