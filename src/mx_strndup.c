#include <stddef.h>
#include <stdlib.h>

int mx_strlen(const char* s);

char* mx_strncpy(char* dst, const char* src, size_t n);

static char* my_strnew(const size_t size) {
	char* str = malloc(size * sizeof(char) + 1);

	if (str == NULL)
		return NULL;
	for (size_t i = 0; i <= size; i++)
		str[i] = '\0';
	return str;
}

char* mx_strndup(const char* s1, size_t n) {
	const size_t size_max = mx_strlen(s1);
	const size_t size = n > size_max ? size_max : n;
	char* newString = my_strnew(size);

	mx_strncpy(newString, s1, size);
	return newString;
}
