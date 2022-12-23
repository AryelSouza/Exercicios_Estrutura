//Segunda avaliação
//Aluno:Aryel de Souza Silva


#include "lista5.h"

void main() {
   insertFirst(1,10);
   insertFirst(2,20);
   insertFirst(3,30);
   insertFirst(4,1);
   insertFirst(5,40);
   insertFirst(6,56);

   printf("Lista Original: ");

   //printa a lista
   printList();

   while(!isEmpty()) {
      struct node *temp = deleteFirst();
      printf("\nValor deletado:");
      printf("(%d,%d) ",temp->key,temp->data);
   }

   printf("\nLista após deletar todos os items: ");
   printList();
   insertFirst(1,10);
   insertFirst(2,20);
   insertFirst(3,30);
   insertFirst(4,1);
   insertFirst(5,40);
   insertFirst(6,56);

   printf("\nLista restaurada: ");
   printList();
   printf("\n");

   struct node *foundLink = find(4);

   if(foundLink != NULL) {
      printf("Elemento encontrado: ");
      printf("(%d,%d) ",foundLink->key,foundLink->data);
      printf("\n");
   } else {
      printf("Elemento não encontrado.");
   }

   delete(4);
   printf("Lista após deletar um item: ");
   printList();
   printf("\n");
   foundLink = find(4);

   if(foundLink != NULL) {
      printf("Elemento encontrado: ");
      printf("(%d,%d) ",foundLink->key,foundLink->data);
      printf("\n");
   } else {
      printf("Elemento não encontrado.");
   }

   printf("\n");
   sort();

   printf("Lista após organizar os dados: ");
   printList();

   reverse(&head);
   printf("\nList após reverter os dados ");
   printList();
}
