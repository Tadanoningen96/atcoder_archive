def gcd(a,b):
    if b == 0:
        return a
    else:
        return gcd(b,a%b)

def lcm(a,b):
    return a*b//gcd(a,b)

n = int(input())

a = [int(input()) for i in range(n)]

ans = 1

for x in a:
    ans = lcm(ans,x)

print(ans)
