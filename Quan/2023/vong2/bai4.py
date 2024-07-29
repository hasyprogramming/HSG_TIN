maxn = int(1e6 + 1)
m, n, k = map(int, input().split())
a = [[0] * 5002 for _ in range(5002)]
s = [[0] * 5002 for _ in range(5002)]

for i in range(m):
    a[i] = list(map(int, input().split()))

for i in range(1, m + 1):
    for j in range(1, n + 1):
        s[i][j] = a[i - 1][j - 1] + s[i][j - 1] + s[i - 1][j] - s[i - 1][j - 1]

cnt = 0
ans = 0
while cnt <= max(n, m):
    for i in range(1, m - cnt):
        for j in range(1, n - cnt):
            dif = s[i + cnt][j + cnt] - s[i - 1][j + cnt] - s[i + cnt][j - 1] + s[i - 1][j - 1]
            if dif <= k:
                ans = max(ans, cnt)
    cnt += 1

print(ans + 1)

