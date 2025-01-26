#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int T, cnt;
string s;

int isPalindrome(int l, int r, int lev){
    cnt = max(cnt, lev);
    if(l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return isPalindrome(l + 1, r - 1, lev + 1);
}

int main(){
    cin >> T;
    for(int i = 1; i <= T; i++){
        cin >> s;
        cnt = 0;
        cout << isPalindrome(0, s.length() - 1, 1) << " " << cnt << "\n";
    }
    return 0;
}