li = list(map(int, input().split()))
li[2]-=li[0]
li[3]-=li[1]
print(min(li))