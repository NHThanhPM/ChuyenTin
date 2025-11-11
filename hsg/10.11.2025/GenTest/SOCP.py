import random
with open('../SOCP.INP',"w") as file:
    file.write(str(10**6)+"\n")
    file.write(" ".join(str(x*x) for x in range(0,1000002)))