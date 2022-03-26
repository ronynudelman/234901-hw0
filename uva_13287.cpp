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


int main() {
    int W;
    while (cin >> W) {
        int N;
        cin >> N;
        int total_area = 0;
        for (int i = 0; i < N; i++) {
            int w, l;
            cin >> w >> l;
            total_area += w * l;
        }
        cout << total_area / W << endl;
    }
    return 0;
}
