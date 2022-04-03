#include <stdio.h>
#include <string.h>

int main(void) 
{
	char name[11] = "Abbas Joda";

	printf("%s", name);

	int age = 37;

	int *address = &age;

	printf("%u", *address);
	
	return 0;
}
