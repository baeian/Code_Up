#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);

	printf(a < 0 ? "minus\n" : "plus\n");
	printf(a % 2 == 0 ? "even" : "odd");

	return 0;
}
