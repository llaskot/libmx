#include "tlist.h"

int mx_list_size(t_list* list) {
	if (!list)
		return 0;
	int counter = 1;
	const t_list* current = list;

	while (current->next) {
		current = current->next;
		counter++;
	}
	return counter;
}
