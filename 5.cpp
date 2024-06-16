#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, s, count = 0;
    cin >> n;

    for (int i = 1; i <= n / 4; i++) {
        for (int j = 1; j <= n / 2; j++) {
            s = 2 * i + 2 * j;
            if (s == n) {
                count = count + 1;
            } else if (s > n) {
                break;
            }
        }
    }

if(n%4==0)count=count-1;

    cout << count << endl;

    return 0;
}
