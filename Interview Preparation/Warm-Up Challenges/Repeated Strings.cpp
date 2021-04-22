#include <bits/stdc++.h>
using namespace std;


long long int repeatedString(string s, long long int n) {
    long long int count = 0;
    long len = s.length();
    for (int i = 0; i < len; i++)
        if(s[i] == 'a')
            count++;
    long long int rem = n%len;
    long long int quo = n/len;
    count *= quo;
    for (int i = 0; i < rem; i++)
         if(s[i] == 'a')
            count++;
    return count;
}

int main() {
    string s;
    cin >> s;
    long long int n;
    cin >> n;
    cout << repeatedString(s, n);
    return 0;
}