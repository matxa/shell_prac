#include <stdlib.h>
#include <stdio.h>

/**
* main - main
* Return: (success 0);
*
*/

int main(void)
{
	char *buffer; /* char pointer */

	size_t characters; /*start--> Where the result of getline or the user
	input information will be stored ...end*/
	/*start--> size_t -> It is guaranteed to be big enough to contain the
	 size of the biggest object the host system can handle  ...end*/

	size_t bufsize = 32; /* buffer size */

	buffer = malloc(sizeof(char) * bufsize); /*start--> momory allocation,
	 I've noticed a questionable behavior,
	everytime I type more than 32 characters, the amount of momory allcated
	 duplicates. If I type 33 chars == 2 mallocs,
	and 2 free(). 65 chars == 3 mallocs, and 3 frees. an so on... ...end*/

	if (buffer == NULL) /* checking if buffer was successfully allocated */
		printf("could not allocate memory for buffer!");

	printf("$ "); /* what's printed first when the program is exec. */

	characters = getline(&buffer, &bufsize, stdin); /* start--> getline() reads
	 an entire line from stream, storing the address of the
	buffer containing the text into *lineptr. The buffer is null-terminated and
	 includes the newline character, if one was found.

	If *lineptr is NULL, then getline() will allocate a buffer for storing the line,
	 which should be freed by the user program.
	(In this case, the value in *n is ignored.)

	Alternatively, before calling getline(), *lineptr can contain a pointer to a
	malloc(3)-allocated buffer *n bytes in size. If the buffer
	is not large enough to hold the line, getline() resizes it with realloc(3),
	 updating *lineptr and *n as necessary.
	In either case, on a successful call, *lineptr and *n will be updated to reflect
	 the buffer address and allocated size respectively. ...end*/

	printf("%s\n", buffer); /*start--> print the input.... Question: Why are we
	 printing the buffer and not variable characters ...end*/

	free(buffer); /* always free allocated memory - to avoid momory leak */

	return (0);
}
