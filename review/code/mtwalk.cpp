#include <bits/stdc++.h>
using namespace std;
const int N = 210;
int n, a[N][N], dd[N][N], ll[4] = {1, -1, 0, 0}, rr[4] = {0, 0, 1, -1}, u[N * N], v[N * N], ltop, rtop, mina = 999, maxa = -1;

bool ok(int i, int j, int x, int y)
{
  if (i > 0 && i <= n && j > 0 && j <= n && dd[i][j] == 0 && a[i][j] >= x && a[i][j] <= y)
    return true;
  return false;
}

void init()
{
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      dd[i][j] = 0;
  dd[1][1] = 1;
  ltop = 0;
  rtop = 1;
  u[1] = 1;
  v[1] = 1;
}

bool bfs(int x, int y)
{
  init();
  if (a[1][1] < x || a[1][1] > y)
    return false;
  while (ltop < rtop)
  {
    ltop++;
    int tmpu = u[ltop], tmpv = v[ltop];
    if (tmpu == n && tmpv == n)
      return true;
    for (int ii = 0; ii <= 3; ii++)
      if (ok(tmpu + ll[ii], tmpv + rr[ii], x, y))
      {
        dd[tmpu + ll[ii]][tmpv + rr[ii]] = 1;
        rtop++;
        u[rtop] = tmpu + ll[ii];
        v[rtop] = tmpv + rr[ii];
      }
  }
  return false;
}

int main()
{

  // freopen("exam.inp", "r", stdin);

  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
    {
      scanf("%d", &a[i][j]);
      mina = min(mina, a[i][j]);
      maxa = max(maxa, a[i][j]);
    }

  int l = -1, r = maxa - mina, mid = (l + r) / 2;
  while (l + 1 < r)
  {
    for (int dau = mina; dau <= maxa - mid; dau++)
      if (bfs(dau, dau + mid))
        break;
    if (dd[n][n] == 1)
      r = mid;
    else
      l = mid;
    mid = (l + r) / 2;
  }
  cout << r;
}
