#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
  printf("Make a node with 0 as its value\n");
  struct node * n0 = insert_front(0,0);
  print_list(n0);

	printf("Insert a 1 at the front\n");
	struct node *n1  = insert_front(n0, 1);
	print_list(n1);

	printf("Insert a 2 at the front\n");
	struct node *n2  = insert_front(n1, 2);
	print_list(n2);

	printf("free_list(): %p\n", free_list(n2));

	return 0;
}
