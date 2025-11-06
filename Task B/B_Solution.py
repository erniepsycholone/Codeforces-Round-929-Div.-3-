t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    s = 0
    hv = False
    for i in range(n):
        s += a[i]
    if s % 3 == 0:
        print(0)
    elif s % 3 == 2:
        print(1)
    else:
        for e in a:
            if (s - e) % 3 == 0:
                print(1)
                break
        else:
            print(2)