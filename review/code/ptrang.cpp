#include <bits/stdc++.h>
using namespace std;

int n, l, a[6001], s[6001], f[6001];

void enter()
{
  int i;
  scanf("%d %d", &n, &l);
  for (i = 1; i <= n; i++)
  {
    scanf("%d", &a[i]);
    s[i] = s[i - 1] + a[i];
  }
}

int main()
{
  int i, j, u, k;
  enter();
  for (i = 1; i <= n; i++)
  {
    f[i] = max(f[i - 1], l - a[i]);
    for (j = 0; j <= i - 1; j++)
    {
      u = s[i] - s[j];
      if (u <= l)
      {
        k = max(f[j], l - u);
        f[i] = min(k, f[i]);
      }
    }
  }
  printf("%d", f[n]);
}
