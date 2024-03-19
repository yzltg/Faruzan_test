#include <iostream>
#include <deque>
using namespace std;
const int N = 1005;
int a, b, n, map[N][N], row_max[N][N], row_min[N][N], col_max[N][N], col_min[N][N];
void solve()
{
    cin >> a >> b >> n;
    for (int i = 1; i <= a; i++)
        for (int j = 1; j <= b; j++)
            cin >> map[i][j];
    for (int i = 1; i <= a; i++)
    {
        deque<pair<int, int>> q_max, q_min;
        for (int j = 1; j <= b; j++)
        {
            while (q_max.size() && q_max.back().first <= map[i][j])
                q_max.pop_back();
            while (q_max.size() && q_max.front().second <= j - n)
                q_max.pop_front();
            q_max.push_back({map[i][j], j});
            if (j >= n)
                row_max[i][j - n + 1] = q_max.front().first;
            while (q_min.size() && q_min.back().first >= map[i][j])
                q_min.pop_back();
            while (q_min.size() && q_min.front().second <= j - n)
                q_min.pop_front();
            q_min.push_back({map[i][j], j});
            if (j >= n)
                row_min[i][j - n + 1] = q_min.front().first;
        }
    }
    for (int j = 1; j <= b - n + 1; j++)
    {
        deque<pair<int, int>> q_max, q_min;
        for (int i = 1; i <= a; i++)
        {
            while (q_max.size() && q_max.back().first <= row_max[i][j])
                q_max.pop_back();
            while (q_max.size() && q_max.front().second <= i - n)
                q_max.pop_front();
            q_max.push_back({row_max[i][j], i});
            if (i >= n)
                col_max[i - n + 1][j] = q_max.front().first;
            while (q_min.size() && q_min.back().first >= row_min[i][j])
                q_min.pop_back();
            while (q_min.size() && q_min.front().second <= i - n)
                q_min.pop_front();
            q_min.push_back({row_min[i][j], i});
            if (i >= n)
                col_min[i - n + 1][j] = q_min.front().first;
        }
    }
    int ans = 1e9;
    for (int i = 1; i <= a - n + 1; i++)
        for (int j = 1; j <= b - n + 1; j++)
            ans = min(ans, col_max[i][j] - col_min[i][j]);
    cout << ans;
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    solve();
    return 0;
}