#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    vector<int> price(m);
    vector<int> weight(m);

    for (int i = 1; i <= m; ++i)
    {
        cin >> price[i] >> weight[i];
    }

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= m; ++i)
    {
        for (int j = 0; j <= n; ++j)
        {
            if (j >= price[i])
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - price[i - 1]] + weight[i - 1]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[m][n] << endl;
    return 0;
}
