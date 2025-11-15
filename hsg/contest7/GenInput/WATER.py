import random
n=10**5
with open("../WATER.INP","w") as file:
    file.write(F'{n} {random.randint(0,n)}\n')
    for i in range(n):
        file.write(str(random.randint(0,1))+" ")