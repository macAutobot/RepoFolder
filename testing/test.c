#include <stdio.h>
#include <string.h> 
int main(void)
{
	char buffer[256];
	printf("Enter your name and Press <Enter>: ");
	fgets(buffer,256,stdin);
	printf("The size of your name is: %lu Characters\n", strlen(buffer)-1);
	return 0;
}