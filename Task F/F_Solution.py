import sys
import math
from collections import defaultdict

# globals
MAX = 10**9

def init():
    # initialize
    pass

def solve(case_no):
    # solve
    n, m = map(int, input().split())
    a = [[False] * (m + 1) for _ in range(n)]
    for i in range(n):
        row = list(map(int, input().split()))
        for j in range(1, m + 1):
            a[i][j] = bool(row[j-1])

    dp = [[MAX] * (m + 1) for _ in range(n)]
    dp[0][1] = 0
    for i in range(1, m + 1):
        for j in range(n):
            if a[j][i]:
                continue
            dp[j][i] = min(dp[j][i], dp[(j - 1 + n) % n][i - 1] + 1)
        for j in range(3 * n):
            if a[j % n][i] or a[(j - 1 + n) % n][i]:
                continue
            dp[j % n][i] = min(dp[j % n][i], dp[(j - 2 + n) % n][i] + 1)

    ans = MAX
    for i in range(n):
        if dp[i][m] == MAX:
            continue
        npos = ((n - 1) + dp[i][m]) % n
        if npos < i:
            npos += n
        cur = dp[i][m] + min(npos - i, n - (npos - i))
        ans = min(ans, cur)
    print(-1 if ans == MAX else ans)

def main():
    init()
    t = int(input())
    for i in range(1, t + 1):
        solve(i)

if __name__ == "__main__":
    main()