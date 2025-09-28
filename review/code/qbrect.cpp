#include <bits/stdc++.h>
using namespace std;
const int maxN=1010;
int n, m, a[maxN][maxN], h[maxN], l[maxN], r[maxN], d[maxN], top;
long res=0;

int main(){
    //freopen("qbrect.inp", "r", stdin);
    scanf("%d%d", &n, &m);
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
            scanf("%d", &a[i][j]);
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=m; j++)
            if (a[i][j]==1) h[j]++;
            else  h[j] = 0;
        top = 0; d[0] = 0;
        for (int j=1; j<=m; j++)
        {
            while (top>0 && h[j]<=h[d[top]]) top--;
            l[j] = d[top]+1;
            d[++top] = j;
        }
        top = 0; d[0] = m+1;
        for (int j=m; j>=1; j--)
        {
            while (top>0 && h[j]<=h[d[top]]) top--;
            r[j] = d[top]-1;
            d[++top] = j;
        }
        for (int j=1; j<=m; j++)
            res = max(res, (long)(r[j] - l[j]+1)*h[j]);
    }
    cout << res;
}
