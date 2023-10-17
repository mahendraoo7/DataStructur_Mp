#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void enQueue(int);
void deQueue();
void display();

int items[SIZE], f = -1, r = -1;


void enQueue(int value) {
  if (r == SIZE - 1)
    printf("\nQueue is Full!!");
  else {
    if (f == -1)
      f = 0;
    r++;
    items[r] = value;
    printf("\nInserted -> %d", value);
  }
}

void deQueue() {
  if (f == -1)
    printf("\nQueue is Empty!!");
  else {
    printf("\nDeleted : %d", items[f]);
    f++;
    if (f > r)
      f = r = -1;
  }
}

void display() {
  if (r == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = f; i <= r; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}

int main() {
  deQueue();

  enQueue(10);
  enQueue(20);
  enQueue(30);
  enQueue(40);

  
  display();


  deQueue();
  deQueue();

  display();

  return 0;
}
