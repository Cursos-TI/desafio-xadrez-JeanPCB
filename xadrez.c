#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   // Nível Novato - Movimentação das Peças
   // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   const int BISPO_MOV = 5;
   const int TORRE_MOV = 5;
   const int RAINHA_MOV = 8;

   int i = 0;

   // Implementação de Movimentação do Bispo
   // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
   printf("Movimentacao Bispo:\n");
   while (i < BISPO_MOV) {
      printf("%d - Cima, Direita\n", i + 1);
      i++;
   } 
   i = 0; // Reset do Contador Universal

   // Implementação de Movimentação da Torre
   // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
   printf("Movimentacao Torre:\n");
   do {
      printf("%d - Direita\n", i + 1);
      i++;
   } while (i < TORRE_MOV);
   i = 0; // Reset do Contador Universal

   // Implementação de Movimentação da Rainha
   // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
   printf("Movimentacao Rainha:\n");
   for (i = 0; i < RAINHA_MOV; i++) {
      printf("%d - Esquerda\n", i + 1);
   }
   i = 0; // Reset do Contador Universal

   // Nível Aventureiro - Movimentação do Cavalo
   // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
   // Um loop pode representar a movimentação horizontal e outro vertical.

   // Nível Mestre - Funções Recursivas e Loops Aninhados
   // Sugestão: Substitua as movimentações das peças por funções recursivas.
   // Exemplo: Crie uma função recursiva para o movimento do Bispo.

   // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
   // Inclua o uso de continue e break dentro dos loops.

   return 0;
}
