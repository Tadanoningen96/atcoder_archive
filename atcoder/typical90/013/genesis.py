import random

n = random.randint(2,10**5)
m = random.randint(1,min(10**5,n*(n-1)//2))

print(n,m)

judge = [[] for i in range(n+1)]

for _ in range(m):

	while True:
		ok = True
		b = random.randint(1,n)
		a = random.randint(1,b)
		if a == b:
			continue
		for x in judge[a]:
			if x == b:
				ok = False
				break

		if ok:
			judge[a].append(b)
			judge[b].append(a)
			break
		else:
			continue

	c = random.randint(1,10000)

	print(a,b,c)


