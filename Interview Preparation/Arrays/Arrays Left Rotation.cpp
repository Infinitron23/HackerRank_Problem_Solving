#include <bits/stdc++.h>
using namespace std;

vector<int> rotLeft(vector<int> a, int d) {
    vector<int> res;
    for (int i = d; i < a.size(); i++)
        res.push_back(a[i]);
    for (int i = 0; i < d; i++)
        res.push_back(a[i]);
    return res;
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> ar;
    for (int i = 0; i <n; i++){
        int val;
        cin >> val;
        ar.push_back(val);
    }
    vector<int> res = rotLeft(ar, d);
    for (int i = 0; i < n; i++)
        cout << res[i] << " ";
    return 0;
}