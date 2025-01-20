#include <iostream>
using namespace std;

int a, x, y;
int maxValue = -1;

int main(){
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            cin >> a;
            
            if(maxValue <= a){
                maxValue = a;
                x = i;
                y = j;
            }
        }
    }
    
    cout << maxValue << '\n';
    cout << x << ' ' << y;
    
    return 0;
}