#include <bits/stdc++.h>
using namespace std;
long long n,s,d,l[100005],l1,l2,l3,c1,c2,c3;
long long f[100005];
const long long oo= 1e15+3;

void enter()
{
    cin >> l1 >> l2 >> l3 >> c1 >> c2 >> c3;
    cin >> n;
    cin >> s >> d;
    l[1]=0;
    for (int i=2;i<=n;i++) cin >> l[i];
}

int main()
{
    enter();
    int i,j;
    long long tmp;
    for (i=s+1;i<=d;i++)
    {
        f[i]=oo;
        for (j=i-1;j>=s;j--)
        {
            if (l[i]-l[j]>l3) break;
            else if (l[i]-l[j]>l2) tmp=c3;
            else if (l[i]-l[j]>l1) tmp=c2;
            else tmp=c1;
            if (f[i]>(f[j]+tmp)) f[i]=f[j]+tmp;
        }
    }
    cout << f[d];
}
