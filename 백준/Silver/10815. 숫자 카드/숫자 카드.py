n=int(input())

arr = set((map(int,input().split())))

m=int(input())

card = list(map(int,input().split()))

answer =[]

for i in card:
  if i in arr:
    answer.append(1)
  else:
    answer.append(0)


print(" ".join(map(str,answer)))