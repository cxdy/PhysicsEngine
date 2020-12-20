#include "BodyList.h"

typedef struct world {
		float gravity;
		struct body_list* body_list;
} world;