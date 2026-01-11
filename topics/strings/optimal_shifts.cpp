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
        int cost{0};
        int shifts{0};
        int j{0};
        while (s[j] == '0') ++j;
        for (int i = j; i < n; ++i) {
            if (s[i] == '0') {
                if (shifts > 0) {
                    --shifts;
                } else {
                    ++cost;
                }
            } else {
                shifts = cost;
            }
        }
        if (j > shifts) {
            cost += j - shifts;
        }
        cout <<cost <<endl;
    }
}
