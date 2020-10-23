#pragma warning(disable:4996)

#include <stdio.h>

#include <conio.h>

int main()
{
	char ch, t;

	printf("Type a letter 'a' to 'z': ");

	scanf("%c", &ch);

	for (t = 'a'; t <= 'z'; t++) {
		putchar(t);
	}

	putchar('\n');

	_getch();
	return(0);
}