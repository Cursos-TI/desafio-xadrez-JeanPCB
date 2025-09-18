#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void piecesMov(int numMoves, char dir[]) {
   if (numMoves > 0) {
      piecesMov(numMoves - 1, dir);
      printf("%d - %s\n", numMoves, dir);
   }
}

int main() {
   // Nível Novato - Movimentação das Peças
   // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   const int BISPO_MOV = 5;
   const int TORRE_MOV = 5;
   const int RAINHA_MOV = 8;
   const int CAVALO_MOV = 3;

   int i = 0;

   // Implementação de Movimentação do Bispo
   // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
   printf("Movimentacao Bispo:\n");
   piecesMov(BISPO_MOV, "Cima Direita");

   // Implementação de Movimentação da Torre
   // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
   printf("Movimentacao Torre:\n");
   piecesMov(TORRE_MOV, "Direita");

   // Implementação de Movimentação da Rainha
   // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
   printf("Movimentacao Rainha:\n");
   piecesMov(RAINHA_MOV, "Esquerda");

   // Nível Aventureiro - Movimentação do Cavalo
   // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
   // Um loop pode representar a movimentação horizontal e outro vertical.
   printf("Movimentacao Cavalo:\n");
   for (i = 0; i < CAVALO_MOV - 2; i++) {
      int j = 0;
      
      while (j < CAVALO_MOV - 1) {
         printf("%d - Baixo\n", j + 1);
         j++;
      }

      printf("%d - Esquerda\n", j + 1);
   }

   // Nível Mestre - Funções Recursivas e Loops Aninhados
   // Sugestão: Substitua as movimentações das peças por funções recursivas.
   // Exemplo: Crie uma função recursiva para o movimento do Bispo.

   // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
   // Inclua o uso de continue e break dentro dos loops.

   return 0;
}
