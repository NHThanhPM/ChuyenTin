#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 1e5 + 10;
const int M = 4;

int n;
int a[M][N];
ll f[1 << M][N];
vector<int> amask;

ll sum(int col, int mask) {
    ll ret = 0;
    for (int i = 0; i < 4; i++) if (mask >> i & 1)
        ret += a[i][col];
    return ret;
}

int main() {
    scanf("%d", &n);
    ll res = -1ll * N * N * N;
    for (int i = 0; i < 4; i++)
        for (int j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
            res = max(res, 1ll * a[i][j]);
        }
    if (res < 0) {
        printf("%lld\n", res);
        return 0;
    }
    for (int mask = 0; mask < (1 << 4); mask++) {
        int pre = -2;
        amask.push_back(mask);
        for (int j = 0; j < 4; j++) if (mask >> j & 1) {
            if (pre + 1 == j) {
                amask.pop_back(); break;
            }
            pre = j;
        }
    }
    for (int i = 0; i < n; i++)
        for (int mask1: amask) for (int mask2: amask) {
            if (mask1 & mask2) continue;
            f[mask1][i + 1] = max(f[mask1][i + 1], f[mask2][i] + sum(i + 1, mask1));
        }
    for (int mask: amask) res = max(res, f[mask][n]);
    printf("%lld\n", res);
}
