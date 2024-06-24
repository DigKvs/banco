#include "Banco.h"

int main(){
  FILE *arquivo;
  arquivo = fopen("extrato.txt", "w");
  
  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return 1;
  }

  fprintf(arquivo, "-----------------------------------------------\n");
  fprintf(arquivo, "--------------------extrato--------------------\n");
  fprintf(arquivo, "-----------------------------------------------\n");

  int a = 0, b, total = 0;    



  while(a == 0){
    printf("-----------------------------------------------\n");
    printf("--------------------BANCO----------------------\n");
    printf("-----------------------------------------------\n\n");


    printf("digite 1 para sacar;\n");
    printf("digite 2 para depositar;\n");
    printf("digite 3 para pegar emprestimo;\n");
    printf("digite 4 para ver extrato;\n");
    printf("--> ");
    scanf("%i", &b);

    switch(b){
      case 1:
        total = saque(total, arquivo);
        break;
      case 2:
        total = deposito(total, arquivo);
        break;
      case 3:
        total = emprestimo(total, arquivo);
        break;
      case 4:
        a = extrato(total, a, arquivo);
        break;
      default:
        continue;
    }

    
  }



  


  fclose(arquivo);
  
}