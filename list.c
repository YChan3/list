
#include <stdio.h>
#include <stdlib.h>

struct node { int i; struct node *next;};

void print_list(struct node *head){

	printf("%d\n", head->i);

	if(head->next){
		print_list(head->next);
	}

	return;
}

struct node * insert_front(struct node *head, int val){
	struct node *new = malloc(sizeof(struct node));
	new->i = val;
	new->next = head;
	return new;
}

struct node * free_list(struct node *head){
	while(head){
		struct node *release = head->next;
		free(head);
		head = release;
	}
	return head;
}
