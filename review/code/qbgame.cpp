#include <bits/stdc++.h>
using namespace std;
int ch[9][260],bit[9],scs=1,n;
long a[9][10005];
long long f[10005][260],res;

bool checkbit(){
    for (int i=1;i<=7;i++)
        if ((bit[i]==1) && (bit[i+1]==1)) return false;
    return true;
}
void next(){
    for (int i=8;i>=1;i--)
        if (bit[i]==0)
    {
        bit[i]=1; for (int j=i+1;j<=8;j++) bit[j]=0; break;
    }
}
void initbit(){
    for (int i=1;i<=8;i++) ch[i][1]=bit[i];
    for (int i=1;i<=255;i++)
    {
        next();
        if (checkbit())
        {
            scs++;
            for (int j=1;j<=8;j++) ch[j][scs]=bit[j];
        }
    }
}
bool check(int i, int j){
    for (int k=1;k<=8;k++)
        if (ch[k][i]+ch[k][j]==2) return false;
    return true;
}
long long sum(int i, int x){
    long long ress=0;
    for (int j=1;j<=8;j++)
        ress+=ch[j][x]*a[j][i];
    return ress;
}
int main()
{
    int i,j,jj;
    initbit();
    scanf("%d", &n);
    res=-9999999999999;
    for (i=1;i<=8;i++)
        for (j=1;j<=n;j++)
            {
                scanf("%ld", &a[i][j]);
                res=max((long)res,a[i][j]);
            }
    if (res<0) printf("%ld", res);
    else
    {
        for (j=1;j<=scs;j++) f[1][j]=sum(1,j);
        for (i=1;i<=n;i++)
            for (j=1;j<=scs;j++)
            {
                f[i][j]=-9999999999999;
                for (jj=1;jj<=scs;jj++)
                    if (check(j,jj))
                        f[i][j]=max(f[i][j],f[i-1][jj]+sum(i,j));
                res=max(res,f[i][j]);
            }
        printf("%ld", res);
    }
}
