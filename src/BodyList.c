#include "Body.h"
#include "BodyList.h"
#include <stdlib.h>

struct body_list* create_body_list () {
	struct body_list* temp = malloc(sizeof(struct body_list));
	temp->head = NULL;
	temp->size = 0;
	return temp;
}

void add_body (struct body_list* b, struct body* node) {
	struct body_node* temp = malloc(sizeof(struct body_node));
	temp->b = node;
	temp->next = b->head;
	b->head = temp;
	b->size++;
}

struct body_node* remove_front_body (struct body_list* b) {
	struct body* = b->head.b;
	b->head = h->head.next;
	b->size--;
	return body;
}