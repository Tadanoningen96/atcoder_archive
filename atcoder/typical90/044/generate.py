import random

n = random.randint(2,2*10**5)
q = random.randint(1,2*10**5)

print(n, q)

for _ in range(n):
	a = random.randint(1,10**9)
	print(a,end=" ")

for _ in range(q):
	t = random.randint(1,3)
	if t == 1:
		while True:
			x = random.randint(1,n)
			y = random.randint(1,n)
			if x != y:
				break
		print(t,x,y)
	elif t == 2:
		print(t,0,0)
	else:
		x = random.randint(1,n)
		print(t,x,0)


		
