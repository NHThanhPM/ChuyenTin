temp1=1
temp2=6
n=m=0
with open("SEQ.INP",'r') as file:
    temp=file.readline().split(' ')
    n=int(temp[0])
    m=int(temp[1])
for i in range(2,n+1):
    temp3=(6*temp2-9*temp1)
    temp1=temp2
    temp2=temp3


with open("SEQ.OUT",'w') as out:
    out.write(str(temp3%m))