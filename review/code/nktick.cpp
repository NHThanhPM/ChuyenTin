#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 1e5 + 10;

int n;
int a[N], b[N];
ll f[N];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (int i = 2; i <= n; i++)
        scanf("%d", &b[i]);
    f[1] = a[1];
    for (int i = 2; i <= n; i++)
        f[i] = min(f[i - 1] + a[i], f[i - 2] + b[i]);
    printf("%lld\n", f[n]);
}
