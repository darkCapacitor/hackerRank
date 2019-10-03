s, n, m=map(int, input().split())
k=list(map(int, input().split()))
u=list(map(int, input().split()))
mx=0
for i in range(len(k)):
    for j in range(len(u)):
        if k[i]+u[j] >=mx and k[i]+u[j]<=s:
            mx=k[i]+u[j]
if(mx==0):
    print(-1)
else:
    print(mx)
            