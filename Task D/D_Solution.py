t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    if a[0] != a[1]:
        print("YES")
    else:
        ans = False
        for i in range(1, n):
            if a[i] % a[0] != 0:
                ans = True
        if ans:
            print("YES")
        else:
            print("NO")