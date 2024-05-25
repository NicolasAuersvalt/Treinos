#Saci e Manelinho

linha1 = input()

N = int(linha1.split(' ')[0])
K = int(linha1.split(' ')[1])

#linha 2 : :
#distancia lojas

listaA = []

for i in range(N + 1):
  A = int(input())
  listaA.append(A)

#linha 3 : :
#quantidade de tabaco

listaB = []

for i in range(N + 1):
  B = int(input())
  listaB.append(B)

#Estudo de casos:

contp = 0

for i in range(N):

  if K < listaA[0]:
    contp = -1
    break

  elif K == listaA[i]:
    K = listaB[i]
    contp = contp + 1
  
  elif K > listaA[i]:

    if listaA[i + 1] - listaA[i] > K:
      K = listaB[i]
      contp = contp + 1      
            
#imprime quantas paradas tiveram
    
print(contp)