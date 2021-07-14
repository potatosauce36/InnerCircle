t=int(input())
for _ in range(t):
    
    l=list([0 for i in range(9)])
    l[0],l[1],l[2]=list(map(int,input().split()))
    l[3],l[5]=list(map(int,input().split()))
    l[6],l[7],l[8]=list(map(int,input().split()))
    averages=[]
    if (l[0]+l[8])%2==0:
        averages.append((l[0]+l[8])/2)
    if (l[2]+l[6])%2==0:
        averages.append((l[2]+l[6])/2)
    
    if (l[1]+l[7])%2==0:
        averages.append((l[1]+l[7])/2)
    
    if (l[3]+l[5])%2==0:
        averages.append((l[3]+l[5])/2)
    count=[averages.count(averages[i]) for i in range(len(averages))]
    total=max(count)
    if (l[0]+l[6])/2==l[3]:
        total+=1
    if (l[2]+l[8])/2==l[5]:
        total+=1
    if (l[0]+l[2])/2==l[1]:
        total+=1
    if (l[6]+l[8])/2==l[7]:
        total+=1
    print("Case #",_+1,": ",total,sep="")
    
    
        
        

    
    
    

    
