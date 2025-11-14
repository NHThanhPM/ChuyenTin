import random
n=10**6
with open("../Chiahetk.inp","w") as file:
    file.write(F'{n} {random.randint(1,10**9)}\n')
    for i in range(n):
        file.write(F'{random.randint(-10**9,10**9)} ')