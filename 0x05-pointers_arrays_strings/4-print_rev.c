#include <string.h>
#include <stdio.h>

/**
* print_rev -  function that prints a string, in reverse.
*
* @s: string to be reversed
*/
void print_rev(char *s)
{
	int length = strlen(s);
	int start, end;

	for (start = 0; end = length - 1; start++, end--)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		
	}
	
}


int main() {
    char str[] = "hello world";
    reverse_string(str);
    printf("%s\n", str);
    return 0;
}
