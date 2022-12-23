#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
   int data;
   int key;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//mostra a lista
void printList() {
   struct node *ptr = head;
   printf("\n[ ");

   //volta ao começo
   while(ptr != NULL) {
      printf("(%d,%d) ",ptr->key,ptr->data);
      ptr = ptr->next;
   }

   printf(" ]");
}

//insere o link na primeira localização
void insertFirst(int key, int data) {
   //cria um link
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->key = key;
   link->data = data;

   //aponta ele para o antigo first node
   link->next = head;

   //aponta ele para o novo first node
   head = link;
}

//deleta o primeiro item
struct node* deleteFirst() {

   //salva a reference para o primeiro link
   struct node *tempLink = head;

   head = head->next;

   //retorna o link deletado
   return tempLink;
}

//se a lista estiver vazia
bool isEmpty() {
   return head == NULL;
}

int length() {
   int length = 0;
   struct node *current;

   for(current = head; current != NULL; current = current->next) {
      length++;
   }

   return length;
}

//encontra um link com certa key
struct node* find(int key) {

   //começa do primeiro link
   struct node* current = head;

   //se a lista estiver vazia
   if(head == NULL) {
      return NULL;
   }

   //navega pela lista
   while(current->key != key) {

      //se for o ultimo node
      if(current->next == NULL) {
         return NULL;
      } else {
         //vai para o proximo link
         current = current->next;
      }
   }

   //se o dado for enncontrado,retorna o link atual
   return current;
}

void reverse(struct node** head_ref) {
   struct node* prev   = NULL;
   struct node* current = *head_ref;
   struct node* next;

   while (current != NULL) {
      next  = current->next;
      current->next = prev;
      prev = current;
      current = next;
   }

   *head_ref = prev;
}

//deleta o link com certa key
struct node* delete(int key) {

   //começa do primeiro link
   struct node* current = head;
   struct node* previous = NULL;

   //se a lista estiver vazia
   if(head == NULL) {
      return NULL;
   }

   //navega pela lista
   while(current->key != key) {

      //se for o ultimo node
      if(current->next == NULL) {
         return NULL;
      } else {
         //guarda a reference para o link atual
         previous = current;
         //move para o proximo link
         current = current->next;
      }
   }

   //encontrou um match,atualiza o link
   if(current == head) {

      head = head->next;
   } else {

      previous->next = current->next;
   }

   return current;
}

void sort() {

   int i, j, k, tempKey, tempData;
   struct node *current;
   struct node *next;

   int size = length();
   k = size ;

   for ( i = 0 ; i < size - 1 ; i++, k-- ) {
      current = head;
      next = head->next;

      for ( j = 1 ; j < k ; j++ ) {

         if ( current->data > next->data ) {
            tempData = current->data;
            current->data = next->data;
            next->data = tempData;

            tempKey = current->key;
            current->key = next->key;
            next->key = tempKey;
         }

         current = current->next;
         next = next->next;
      }
   }
}
