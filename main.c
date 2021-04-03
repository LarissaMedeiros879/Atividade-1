/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/* Contador de bits
 *
 * Este programa conta o numero de bits em um byte
 */

#include <stdio.h>

int main() {

  unsigned char entrada;
  unsigned int tmp;
  unsigned int n_bits;
  unsigned int contador; //contador garante que o byte todo sera lido
  unsigned char a = 1; //variavel usada para ser comparada com a entrada
  int c; //variavel usada para identificar bits iguais a 1
  n_bits = 0;

  // Ler entrada em hexadecimal 
  scanf("%x", &tmp);
  entrada = (unsigned char)tmp;
  
  //a cada iteracao do contador, cada bit e analisado para ver se ele se iguala a um. O contador comeca na posicao 0, bit menos significativo, e vai ate 7, bit mais significativo
  for(contador = 0; contador <= 7; contador = contador + 1) {
    //c e a comparacao da entrada com uma variavel que contem um unico bit igual a 1, na posicao dada pelo contador
    c = a & entrada;
    //Como a operacao feita anteriormente e um and, c so sera igual a 'a' se a entrada possuir um bit igual a 1 na posicao indicada pelo contador
    if (c == a) {
    //Essa comparacao indica que a entrada tem um bit igual a 1 na posicao dada pelo contador, entao soma-se um na variavel que conta o numero de bits iguais a 1
        n_bits = n_bits + 1;
    }
    //O bit igual a 1 em 'a' e passado para a esquerda para que a comparacao possa ser feita com todos os bits da entrada
    a = a << 1;
    }


  // Escrever numero de bits 
  printf("%d\n", n_bits);
  return 0;
}
