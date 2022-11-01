#include <main.h>
#include <stdio.h>
void foo(char** str)
{
	char* new_str = malloc(100);
	memset(new_str, 0, 100);
	strcpy(new_str, (char*)"new test");
	if (str) { /* if pointer to pointer is valid then */
		if (*str)   /* if there is a previous string, free it */
			free(*str);
		*str = new_str;  /* return the string */
	}
}

int main (int argc, char *argv[])
{
	char* str = malloc(100);
	memset(str, 0, 100);

	strcpy(str, (char*)"test");

	foo(&str);

	printf("str = %s\n", str);
}
