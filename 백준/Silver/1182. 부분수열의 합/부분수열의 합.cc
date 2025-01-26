#include <iostream>
using namespace std;

int N, S;
int arr[20];
int cnt = 0;

void dfs(int idx, int sum) {
    sum += arr[idx];

    if (sum == S) {
        cnt++;
    }

    for (int i = idx + 1; i < N; i++) {
        dfs(i, sum);
    }
}

int main() {
    cin >> N >> S;

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++) {
        dfs(i, 0);
    }

    cout << cnt << endl;

    return 0;
}