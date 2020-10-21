m, n = map(int, input().split())
 
adjList = [[] for i in range(m)]
 
for i in range(n):
    a, b = map(int, input().split())
    adjList[a-1].append(b)
    adjList[b-1].append(a)
 
count = 0
 
while True:
 
    v = []
 
    for i in range(0, m):
 
        if len(adjList[i]) == 1:
 
            popped = adjList[i].pop(0)
            v.append((i+1, popped))
 
            # adjList[popped-1].remove(i+1)
 
    for i in range(len(v)):
        if adjList[v[i][1]-1]:
            adjList[v[i][1]-1].remove(v[i][0])
 
    if len(v):
        count += 1
    else:
        break
 
print(f'{count}')
