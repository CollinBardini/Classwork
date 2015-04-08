#include <stdio.h>
int counter(const char *x)
{
	int y;
	while(*x != '\0')
	{
		if(*x = ' ')
			y++;
		*x++;
	}
	return ++y;
}
int main(void)
{
	char x[80];
	fgets(x,80,stdin);
	puts(x);
	puts(x);
	int x = counter(x);
	return 0;
}
