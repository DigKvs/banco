#include <stdio.h>

#ifndef BANCO_H
#define BANCO_H

float saque(float total, FILE *arquivo){
  float valorsaque;
  printf("quanto vc quer sacar? ");
  scanf("%f", &valorsaque);

  if (total - valorsaque < 0){
      printf("\nvc não tem o valor necessario para o saque\n\n");
    }
  else {
    total = total - valorsaque;
    fprintf(arquivo, "-%.2f saque\n", valorsaque);
    }

  return total;
}
float deposito(float total, FILE *arquivo){
  float deposito;
  printf("quanto vc quer depositar? ");
  scanf("%f", &deposito);
  total = total + deposito;
  fprintf(arquivo, "+%.2f deposito\n", deposito);

  return total;
}
float emprestimo(float total, FILE *arquivo){
  float emprestimo;
  printf("quanto vc quer de emprestimo? ");
  scanf("%f", &emprestimo);
  total = total + emprestimo;
  fprintf(arquivo, "+%.2f emprestimo\n", emprestimo);

  return total;
}
int extrato(float total, int a, FILE *arquivo) {
  printf("\n\nimprimindo seu extrato...\n\n");
  printf("\nextrato imprimido em extrato.txt");
  fprintf(arquivo, "\nSAlDO TOTAL = %.2f\n", total);
  a = 1;
  return a;
}

#endif