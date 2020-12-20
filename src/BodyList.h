// define a list data structure
#include "Body.h"


typedef struct body_node {
	struct body* b;
	struct body_node* next;
} body_node;

typedef struct body_list {
	int size;
	struct body_node* head;
} body_list;

struct body_list* create_body_list ();

void add_body (struct body_list* b, struct body* node);

struct body_node* remove_front_body (struct body_list* b);

