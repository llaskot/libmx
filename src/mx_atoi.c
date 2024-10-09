#include "libmx.h"

static int atoi_rules(const char c) {
	switch (c) {
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
	default: return -1;
	}

}


int mx_atoi(const char *str) {
	int res = 0;
	char* cleaned =  mx_del_extra_spaces(str);
	for (int i = 0; cleaned[i] != '\0'; i++) {
		const int num = atoi_rules(cleaned[i]);
		if (num == -1) {
			mx_strdel(&cleaned);
			return -1;
		}
		res = res * 10 + num;
	}
	mx_strdel(&cleaned);
	return res;
}
