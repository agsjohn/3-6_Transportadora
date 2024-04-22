#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
  int distancia; 
  float valor, frete;
  printf("Digite o valor do produto: ");
  scanf("%f", &valor);
  getchar();
  printf("Digite a distância que a encomenda deve percorrer: ");
  scanf("%i", &distancia);
  getchar();
  if(distancia >= 0 && distancia <= 100){
    frete = valor * 0.2;
  }
  else if(distancia >= 101 && distancia <= 300){
    frete = valor * 0.17;
  }
  else if(distancia >= 301 && distancia <= 500){
    frete = valor * 0.15;
  }
  else if(distancia >= 501 && distancia <= 1000){
    frete = valor * 0.13;
  }
  else if(distancia > 1000){
    frete = valor * 0.1;
  }
  else{
    printf("Distância inválida");
  }
  printf("O frete do produto será: R$%.2f", frete);
  getchar();
}