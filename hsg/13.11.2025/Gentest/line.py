import random
n=m=10**5
a=b=1;
with open("../line.inp","w") as file:
    file.write(F'{n} {m}\n')
    for i in range(n):
        a=random.randint(-10**9,10**9);
        b=random.randint(a+1,10**9)
        file.write(F'{a} {b}\n')
    for i in range(m):
        file.write(F'{random.randint(-10**9,10**9)}\n')
