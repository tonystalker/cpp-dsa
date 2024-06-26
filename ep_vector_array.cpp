#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> &v) {
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << endl;
    }
}

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> v;
    
    for (int i = 0; i < N; ++i) {
        int n;
        cin >> n;
        
        vector<int> temp;
        for (int j = 0; j < n; ++j) {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        
        v.push_back(temp); // Push the filled temp vector into v
    }
    v[1].push_back(0);
    

    for (int i = 0; i < v.size(); ++i) {
        printVec(v[i]);
    }
    
    return 0; 
}