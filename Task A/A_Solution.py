def solve():
    n = int(input())
    print(sum([abs(int(x)) for x in input().split()]))
    
for _ in range(int(input())):
    solve()