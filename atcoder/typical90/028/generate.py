import random

n = random.randint(1, 10**5)

print(n)

for _ in range(n):
	lx = random.randint(0, 999)
	ly = random.randint(0, 999)
	rx = random.randint(lx+1, 1000)
	ry = random.randint(ly+1, 1000)
	print(lx, ly, rx, ry)

