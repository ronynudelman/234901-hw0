#include <algorithm>
#include <bitset>
 #include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pii;


bool comp_char(char a, char b) { // return a < b
    char lower_a = tolower(a);
    char lower_b = tolower(b);
    if (lower_a == lower_b) {
        if (a == lower_a) {
            return false;
        }
        if (b == lower_b) {
            return true;
        }
    }
    return lower_a < lower_b;
}

bool comp_str(string a, string b) {
    size_t len = min(a.size(), b.size());
    for (size_t i = 0; i < len; i++) {
        if (comp_char(a[i], b[i])) { // a[i] < b[i]
            return true;
        }
        if (comp_char(b[i], a[i])) { // b[i] < a[i]
            return false;
        }
    }
    return true;
}


int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        vector<string> v;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        do {
            v.push_back(s);
        } while (next_permutation(s.begin(), s.end()));
        sort(v.begin(), v.end(), comp_str);
        for (auto& e : v) {
            cout << e << endl;
        }
    }
    return 0;
}
