def solve(tc):
    n, m, q = map(int, input().split())
    b = [1] * 8
    ans = 8
    print(ans)
    for _ in range(q):
        r, c = map(int, input().split())
        shape = input().strip()

        if (r + (c + 1) // 2) % 2:
            b[0] &= (shape == "circle")
            b[1] &= (shape == "square")
        else:
            b[0] &= (shape == "square")
            b[1] &= (shape == "circle")

        if (r + c // 2) % 2:
            b[2] &= (shape == "circle")
            b[3] &= (shape == "square")
        else:
            b[2] &= (shape == "square")
            b[3] &= (shape == "circle")

        if (c + (r + 1) // 2) % 2:
            b[4] &= (shape == "circle")
            b[5] &= (shape == "square")
        else:
            b[4] &= (shape == "square")
            b[5] &= (shape == "circle")

        if (c + r // 2) % 2:
            b[6] &= (shape == "circle")
            b[7] &= (shape == "square")
        else:
            b[6] &= (shape == "square")
            b[7] &= (shape == "circle")

        ans = sum(b)
        print(ans)

t = int(input())
for i in range(1, t + 1):
    solve(i)
