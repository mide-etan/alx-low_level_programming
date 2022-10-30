#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char lc;
	for(lc = 'z'; lc >= 'a'; lc--)
	{
		putchar(lc);
	}
	putchar(lc);
	return (0);
}
