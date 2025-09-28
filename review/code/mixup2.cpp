#include <bits/stdc++.h>
#define N 17
using namespace std;
int n, k, a[N];
long long f[N][1 << (N - 1)], res = 0;

int getbit(int k, int x){
    return (x >> (k-1)) & 1;
}

int offbit(int k, int x){
    return x & (~ (1 << (k-1)));
}

main(){

    //freopen("exam.inp", "r", stdin);

    scanf("%d%d", &n, &k);
    for (int i=1; i<=n; i++) scanf("%d", &a[i]);

    long s = (1 << n) - 1;
    for (int i=1; i<=s; i++){
        for (int j=1; j<=n; j++)
            if (getbit(j, i)){
                long tmp = offbit(j, i);
                if (tmp == 0) f[j][i] = 1;
                else
                    for (int jj=1; jj<=n; jj++)
                        if (getbit(jj, tmp) && (fabs(a[jj] - a[j]) > k))
                            f[j][i] += f[jj][tmp];
        }
    }
    for (int j=1; j<=n; j++)
        res += f[j][s];
    cout << res;
}
