
#include <stdio.h>

#define MAX 10

void addFront(int *, int, int *, int *);
void addRear(int *, int, int *, int *);
int delFront(int *, int *, int *);
int delRear(int *, int *, int *);
void display(int *);
int count(int *);


void addFront(int *a, int item, int *pfront, int *prear) {
  int i, k, c;

  if (*pfront == 0 && *prear == MAX - 1) {
    printf("\nDeque is full.\n");
    return;
  }

  if (*pfront == -1) {
    *pfront = *prear = 0;
    a[*pfront] = item;
    return;
  }

  if (*prear != MAX - 1) {
    c = count(a);
    k = *prear + 1;
    for (i = 1; i <= c; i++) {
      a[k] = a[k - 1];
      k--;
    }
    a[k] = item;
    *pfront = k;
    (*prear)++;
  } else {
    (*pfront)--;
    a[*pfront] = item;
  }
}

void addRear(int *a, int item, int *pfront, int *prear) {
  int i, k;

  if (*pfront == 0 && *prear == MAX - 1) {
    printf("\nDeque is full.\n");
    return;
  }

  if (*pfront == -1) {
    *prear = *pfront = 0;
    a[*prear] = item;
    return;
  }

  if (*prear == MAX - 1) {
    k = *pfront - 1;
    for (i = *pfront - 1; i < *prear; i++) {
      k = i;
      if (k == MAX - 1)
        a[k] = 0;
      else
        a[k] = a[i + 1];
    }
    (*prear)--;
    (*pfront)--;
  }
  (*prear)++;
  a[*prear] = item;
}

int delFront(int *arr, int *pfront, int *prear) {
  int item;

  if (*pfront == -1) {
    printf("\nDeque is empty.\n");
    return 0;
  }

  item = arr[*pfront];
  arr[*pfront] = 0;

  if (*pfront == *prear)
    *pfront = *prear = -1;
  else
    (*pfront)++;

  return item;
}

int delRear(int *arr, int *pfront, int *prear) {
  int item;

  if (*pfront == -1) {
    printf("\nDeque is empty.\n");
    return 0;
  }

  item = arr[*prear];
  arr[*prear] = 0;
  (*prear)--;
  if (*prear == -1)
    *pfront = -1;
  return item;
}

void display(int *arr) {
  int i;

  printf("\n front:  ");
  for (i = 0; i < MAX; i++)
    printf("  %d", arr[i]);
  printf("  :rear");
}

int count(int *arr) {
  int c = 0, i;

  for (i = 0; i < MAX; i++) {
    if (arr[i] != 0)
      c++;
  }
  return c;
}
int main() {
  int a[MAX];
  int f, r, i, n;

  f = r = -1;
  for (i = 0; i < MAX; i++)
    a[i] = 0;

  addRear(a, 5, &f, &r);
  addFront(a, 12, &f, &r);
  addRear(a, 11, &f, &r);
  addFront(a, 5, &f, &r);
  addRear(a, 6, &f, &r);
  addFront(a, 8, &f, &r);

  printf("\nElements in a deque: ");
  display(a);

  i = delFront(a, &f, &r);
  printf("\nremoved item: %d", i);

  printf("\nElements in a deque after deletion: ");
  display(a);

  addRear(a, 16, &f, &r);
  addRear(a, 7, &f, &r);

  printf("\nElements in a deque after addition: ");
  display(a);

  i = delRear(a, &f, &r);
  printf("\nremoved item: %d", i);

  printf("\nElements in a deque after deletion: ");
  display(a);

  n = count(a);
  printf("\nTotal number of elements in deque: %d", n);
}