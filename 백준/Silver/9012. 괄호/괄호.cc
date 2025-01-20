#include <iostream>
#include <stack>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    while(T--){
        stack<char> s;
        string x;
        cin >> x;
        
        for(int i = 0; i < x.length(); i++){
            if(s.empty()){
                s.push(x[i]);
            } else {
                if(s.top() == '(' && x[i] == ')'){
                    s.pop();
                } else {
                    s.push(x[i]);
                }
            }
        }
        if(s.empty()){
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}