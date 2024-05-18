idd = input()
N = int(idd.split(' ')[0])
L = int(idd.split(' ')[1])
D = int(idd.split(' ')[2])

lmin = D//1000 * N

if L >= lmin:
    print(L)

elif L < lmin:
    i = 2
    while L < lmin:
        L = L*i
        i = i + 1
    print(L)
