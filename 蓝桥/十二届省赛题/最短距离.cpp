#include <bits/stdc++.h>
using namespace std;

int n, m, n1, m1, n2, m2;

int main()
{
    cin >> n >> m >> n1 >> m1 >> n2 >> m2;
    cout << min(min(n1 - 1 + m1 - 1 + n - n2 + m - m2, n2 - 1 + m2 - 1 + n - n1 + m - m1), n - 1 + m - 1) << "\n";
}
