t = int(input())

for T in range(0, t):

    l, r, sum = map(int, input().split())
    deff = r-l
    more = True

    if sum >= l:

        for i in range(r, l-1, -1):

            if sum%i <= deff:

                a = i
                need = sum%i
                more = False
                break

            elif i-(sum%i) <= deff:

                a = i
                need = i-(sum%i)
                break

        if not more:
            print(a, l+need, l)
        else:
            print(a, l, l+need)

    else:

        need = l - sum

        print(l, l, l+need)


