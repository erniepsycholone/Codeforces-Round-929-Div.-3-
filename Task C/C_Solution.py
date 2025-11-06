for _ in range(int(input())):
    a, b, l = map(int, input().split())
    ans = set()
    for i in range(20):
        for j in range(20):
            prod = a ** i * b ** j
            if l % prod == 0:
                ans.add(l // prod)
    print(len(ans))