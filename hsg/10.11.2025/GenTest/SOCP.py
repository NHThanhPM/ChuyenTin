import random
with open('../SOCP.INP',"w") as file:
    file.write(str(10**6)+"\n")
    i=0
    while(i<10**6):
        file.write(str(i)+' ')
        i+=1