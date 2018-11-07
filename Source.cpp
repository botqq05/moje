#include <stdio.h>
#include <stdlib.h>
void tab_mnozenia(int x, int y)
{
	for (x = 1;x <= 10;x++)
	{
		for (y = 1;y <= 10;y++)
		{
			printf("%d\t", (x*y));
		}
		printf("\n");
	}
}
int main(void)
{
	int x, y;
	tab_mnozenia(x=0, y=0);
	system("pause");
	return (0);
}

