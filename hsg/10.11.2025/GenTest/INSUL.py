import random
n=10**5-1
with open("../INSUL.INP","w") as file:
    file.write(str(n)+"\n")
    for i in range(n+1):
        file.write(str(random.randint(1,10**4))+"\n")