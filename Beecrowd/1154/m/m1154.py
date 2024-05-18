l = []

inp = 0

while inp >= 0: 
    inp = int(input('idd = '))
    if inp > 0:
        l.append(inp)

print(sum(l)/len(l))

