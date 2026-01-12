#include <iostream>

// https://codeforces.com/problemset/problem/2176/B

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    int n;
    string s;

    cin >>t;
    while (t--) {
        cin >>n;
        cin >>s;
        int max{0};
        int cnt{0};
        int j{0};
        while (j < n && s[j] == '0') j++; // 0
        int i = j; // 0
        while (i < n) {
            if (s[i] == '0') {
                ++cnt;
                ++i;
            } else {
                if (cnt > max) {
                    max = cnt;
                }
                while (++i < n && s[i] == '1');
                cnt = 0;
            }
        }
        cnt += j;
        if (cnt > max) {
            max = cnt;
        }
        cout <<max <<endl;
    }
}
