#include <bits/stdc++.h>
using namespace std;
const long oo = 1e9 + 5;
long a[17][17], f[17][65537], res = oo, n, s = 1;

int getbit(int k, int x){
    return (x >> (k-1)) & 1;
}

int setbit(int k, int x){
    return (x & (~ (1 << (k-1))));
}


main(){

    //freopen("exam.inp", "r", stdin);

    scanf("%d", &n);

    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            scanf("%d", &a[i][j]);

    for (int i=1; i<=n; i++) s*=2;
    s--;

    for (int i=1; i<=s; i++){
        long d = 0, t[17];
        for (int j=1; j<=n; j++)
            if (getbit(j, i)){
                t[++d] = j;
                f[j][i] = oo;
            }
        if (d == 1) f[t[1]][i] = 0;
        else{
            for (int j=1; j<=d; j++){
                long tmp = setbit(t[j], i);
                for (int jj=1; jj<=d; jj++)
                    if (jj!=j)
                        f[t[j]][i] = min(f[t[j]][i], f[t[jj]][tmp] + a[t[jj]][t[j]]);
            }
        }
    }


    for (int i=1; i<=n; i++) res = min(res, f[i][s]);
    cout << res;
}
