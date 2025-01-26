#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
vector<string> g;

int getSum(string a){
    int len = a.length();
    int sum = 0;
    for(int i = 0; i < len; i++){
        if(a[i] - '0' <= 9 && a[i] - '0' >= 0){
            sum += a[i] - '0';
        }
    }
    return sum;
}

bool compare(string a, string b){
    if(a.length() != b.length()){
        return a.length() < b.length();
    } else {
        int aSum = getSum(a);
        int bSum = getSum(b);
        if(aSum != bSum){
            return aSum < bSum;
        } else {
            return a < b;
        }
    }
}

int main(){
    cin >> n;
    string input;
    
    for(int i = 0; i < n; i++){
        cin >> input;
        g.push_back(input);
    }
    
    sort(g.begin(), g.end(), compare);
    
    for(int i = 0; i < n; i++){
        cout << g[i] << endl;
    }
    
    return 0;
}