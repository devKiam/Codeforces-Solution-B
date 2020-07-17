t = int(input())

for j in range(0, t):

    x = int(input())
    v = list(map(int, input().split()))

    Sum = sum(v)

    # done taking input

    LM, GM = v[0], v[0]

    for i in range(1, len(v)-1):
        LM = max(LM+v[i], v[i])
        if LM > GM:
            GM = LM

    LM2, GM2 = v[1], v[1]

    for i in range(2, len(v)):
        LM2 = max(LM2+v[i], v[i])
        if LM2 > GM2:
            GM2 = LM2

    if Sum > GM and Sum > GM2:
        print("YES")
    else:
        print("NO")
