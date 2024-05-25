# K-Ã©simo Fator Primo e o Desafio do Pai do Mato 

import math

T = int(input())
K = int(input())

def fatprimo(n):
    fat = []
    while n % 2 == 0:
        fat.append(2)
        n //= 2
    for i in range(3, int(math.sqrt(n)) + 1, 2):
        while n % i == 0:
            fat.append(i)
            n //= i
    if n > 2:
        fat.append(n)
    return fat

def remdupli(l):
    v = set()
    lunica = []
    for item in l:
        if item not in v:
            v.add(item)
            lunica.append(item)
    return lunica

i = 2

while i >= 2:
  p = 