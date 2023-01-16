def MaxProfit(x1,x2,M):
    a=x1-M
    b=x2-M
    ans=0
    if a>=0 and b>=0:
        ans=M*115 + a*100 + b*30
    elif a<0 and b>=0:
        ans=x1*90 + M*25 + b*30
    elif b<0 and a>=0:
        ans=x2*25 + M*90 + a*100
    else:
        ans=x1*90 + x2*25
    return ans

        
M=int(input())
x1=min(400//8,120//2)
x2=0
profit=0
for i in range(0,x1+1):
    tempprof=profit
    chair=min(((400-(i*8)))//2,(120-(i*2)))
    temp=MaxProfit(i,chair,M)
    profit=max(profit,temp)
    if profit>tempprof:
        x2=chair
        x1=i
print(profit)
print(x1,x2)