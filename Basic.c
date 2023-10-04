#include <stdio.h>
#include <stdlib.h>

typedef struct {
  void* next;
  int data;
} Node;


Node* head = NULL;

Node* addNode(int data) {

  Node* new = NULL;

  if (head == NULL) {
    new = malloc(sizeof(Node));
    if (new == NULL) {
      return NULL;
    }

    new->data = data;
    head = new;
    new->next = NULL;
  }
  else {
    new = malloc(sizeof(Node));
    if (new == NULL) {
      return NULL;
    }

    new->data = data;
    new->next = head;
    head = new;
  }

  return new;
}


Node* insertNode(int data, int pos) {
  Node* current = head;
  while (current != NULL && pos != 0) {
    pos--;

  }

  if (pos != 0) {
    printf("Requested position to far into list");
    return NULL;
  }

  Node* new = malloc(sizeof(Node));
  if (new == NULL) {
    return NULL;
  }

  new->data = data;
  new->next = current->next;
  current->next = new;

  return new;

}

int removeNode(int data) {

  Node* current = head;
  Node* prev = head;

  while (current != NULL) {
    if (current->data == data) {
      if (current == head) {
        head = current->next;
        free(current);
        current = NULL;
      }
      else {
        prev->next = current->next;
        free(current);
        current = NULL;
      }


      return 1;
    }

    prev = current;
    current = current->next;
  }

  return 0;

}



void printList() {
  Node* current = head;
  while (current != NULL) {
    printf("%d->", current->data);
    current = current->next;

  }
  printf("\n");
  return;
}


void printMenu() {
  printf("You have the following options:\n");
  printf("\t1. Add a node to the list\n");
  printf("\t2. Remove a node from the list\n");
  printf("\t3. Insert a node into the list\n");
  printf("\t4. Print the list\n");
  printf("\t5. Quit.\n");
}

int main() {

  int option = -1;
  int arg1 = 0;
  int arg2 = 0;
  while (option != 5) {
    printMenu();
    int numReceived = scanf("%d", &option);
    if (numReceived == 1 && option > 0 && option < 5) {
      switch (option) {
      case 1:
        //Add
        printf("What data should I insert?:\n");
        scanf("%d", &arg1);
        Node* new = addNode(arg1);
        break;
      case 2:
        printf("What data should I remove?:\n");
        scanf("%d", &arg1);
        int success = removeNode(arg1);
        if (!success) printf("Element not found!");
        break;
      case 3:

        printf("What data should I insert?:\n");
        scanf("%d", &arg1);
        printf("What position:\n");
        scanf("%d", &arg2);
        new = insertNode(arg1, arg2);
        if (new == NULL) {
          return 0;
        }
        break;

      case 4:
        //Print the list
        printList();
        break;

      case 5:
        break;
      }
    }

  }

  return 0;
}
