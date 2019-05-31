t = int(input())
for _ in range(t):
    n = int(input())
    l = [int(x) for x in input().split(" ")]
    m = min(l)
    c = l.count(m)
    if c%2==0:
        print("Unlucky")
    else:
        print("Lucky")
