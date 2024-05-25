def primo(n):
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True


def xey(n):
    xeymin = -1
    for x in range(n // 2, 0, -1):
        if not primo(x):
            y = n - x
            if not primo(y):
                return (x, y)
    return xeymin


N = int(input())  # número de entradas
lin = []
for i in range(N):
    n = int(input())  # números ímpares
    lin.append(n)

for n in lin:
    res = xey(n)
    if res == -1:
        print(-1)
    else:
        print(res[0], res[1])
