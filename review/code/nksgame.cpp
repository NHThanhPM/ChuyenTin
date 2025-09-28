#include <bits/stdc++.h>
#define fore(i, a, b) for (long i = a; i <= b; i++)
#define ford(i, a, b) for (long i = a; i >= b; i--)
using namespace std;
long n, a[100005], b[100005];

long tkmin()
{
  long res = 99999999999, tmp;
  long i = 1, j = n;
  while ((i <= n) && (j > 0))
  {
    tmp = a[i] + b[j];
    if (tmp == 0)
      return 0;
    if (fabs(tmp) < res)
      res = fabs(tmp);
    if (tmp < 0)
      i++;
    else
      j--;
  }

  return res;
}

int main()
{
  scanf("%ld", &n);
  fore(i, 1, n) scanf("%ld", &a[i]);
  fore(i, 1, n) scanf("%ld", &b[i]);
  sort(a + 1, a + n + 1);
  sort(b + 1, b + n + 1);
  printf("%ld", tkmin());
}
