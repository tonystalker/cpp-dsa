#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    for (int i = 1; i <= n / 4; i++) {
        int remaining = n - 2 * i;
        if (remaining % 2 == 0 && remaining / 2 > i) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
