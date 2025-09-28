#include <bits/stdc++.h>
using namespace std;
const int N = 5005;
int n, t, w[N], a[N], tn[N], res, maxx, f[N];

void qs(int l, int r)
{
  int i = l, j = r, midl = a[(l + r) / 2],
      midw = w[(l + r) / 2];
  while (i <= j)
  {
    while ((a[i] < midl) || (a[i] == midl && w[i] < midw))
      i++;
    while ((a[j] > midl) || (a[j] == midl && w[j] > midw))
      j--;
    if (i <= j)
    {
      swap(a[i], a[j]);
      swap(w[i], w[j]);
      i++;
      j--;
    }
  }
  if (i < r)
    qs(i, r);
  if (l < j)
    qs(l, j);
}

main()
{

  // freopen("exam.inp", "r", stdin);

  scanf("%d", &t);
  while (t--)
  {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
      scanf("%d%d", &a[i], &w[i]);
      tn[i] = 0;
    }

    res = 0;
    maxx = 0;
    qs(1, n);
    for (int i = n; i >= 1; i--)
    {
      f[i] = lower_bound(tn + 1, tn + 1 + maxx, w[i]) - tn;
      tn[f[i]] = w[i];
      if (f[i] > maxx)
      {
        res++;
        maxx = f[i];
      }
    }
    printf("%d\n", res);
  }
}
