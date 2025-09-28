#include <bits/stdc++.h>
using namespace std;
const int maxN = 2005;
int n, a[maxN];
long f[maxN][maxN], s[maxN];

int bsearch(int l, int r){
    int i = l, j = r, mid = (l+r)/2;
    while (i!=mid && j!=mid){
        if (f[l][mid] + s[mid] - s[l-1] > f[mid+1][r] + s[r] - s[mid]) j = mid;
        else if (f[l][mid] + s[mid] - s[l-1] == f[mid+1][r] + s[r] - s[mid]) return mid;
        else i = mid;
        mid = (i+j)/2;
    }
    if (min(f[l][i] + s[i] - s[l-1], f[i+1][r] + s[r] - s[i]) > min(f[l][j] + s[j] - s[l-1], f[j+1][r] + s[r] - s[j])) return i;
    else return j;
}

int main(){
    //freopen("dtgame.inp", "r", stdin);
    //freopen("dtgame.out", "w", stdout);

    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        scanf("%d", &a[i]);
        s[i] = s[i-1] + a[i];
    }

    for (int i=n; i>=1; i--)
        for (int j=i+1; j<=n; j++){
            int vt = bsearch(i,j);
            f[i][j] = min(f[i][vt] + s[vt] - s[i-1], f[vt+1][j] + s[j] - s[vt]);
            //cout << vt << " " << i << " " << j << endl;
        }

    printf("%ld", f[1][n]);
}
