m=10**5
n=2*m
import random
with open("../Bai1.INP","w") as file:
    file.write(F'{n} {m}\n')
    for i in range(n):
        file.write(str(random.randint(1,n))+' ')