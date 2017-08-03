#include<stdio.h>
#include<stdlib.h>

int trataString(char *);//A função que receberá a string inserida e retornará a quantidade de palavras na mesma.

int main(){
  int QtdPalavras = 0;
  char *str = null;//O ponteiro para array de caracteres que guardará nossa string.

  scanf("%[^\n]", str);//Recebemos a string de entrada até ser inserido o caractere de uebra de linha.
  
  if(str != null) resultado = trataString(str);//Somente chama a função se a string str não estiver VAZIA (quando o usuário não insere nenhuma palavra e clica enter).
  
  printf("Palavras: %d\n", resultado);
}

int trataString(char *str){
 int i = 0;
  int QtdPalavras = 0;
  
  for(i = 0; str[i] != '\0'; i++){
   
    
    
  }
  
}
