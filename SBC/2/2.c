#include<stdio.h>
#include<stdlib.h>

int main(){
  int n=0, m=0, k=0, i; // n - qtd cidades, m - qtd caminhos, k - qtd de cidades necessárias para conhecer
  scanf("%d %d %d", &n, &m, &k);
  int size = m*3;
  int vet[size];

  // a posição i*3 representa a cidade
  // a posição i*3 +1 a cidade conetada a ela
  // a posição i*3 +2 é a hora que possibilita a conexão
  
  // Armazena no vetor cada linha (qtd m) com 3 elementos no vetor, ambos separados por espaço e com quebra de linha
  for(i=0; i<m; i++){
    scanf("%d %d %d", &vet[i*3], &vet[i*3+1], &vet[i*3+2]);
  }
  for(i=0; i<size; i++){
    printf("%d " , vet[i]);
  }
  
  // OK até aqui

  int ref = 0, horario=0;

  // Seleciona a primeira ocorrência da cidade referência
  for(i=0; i<size; i++){
    
    // Se a hora da posição for igual a hora comparada, verifica se há cidades iguais
    if(vet[i*3+2] == horario)
      
  }
  
  return 0;
}