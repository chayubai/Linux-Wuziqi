#include "game.h"

int main()
{
	int quit = 0;
	int select = 0;
	while (!quit)
	{
		Menu();
		printf("Please Select#：");
		scanf("%d", &select);
		switch (select)
		{
			case 1:
				Game();
				break;
			case 0:
				quit = 1;
				printf("ByeBye!\n");
				break;
			default:
				printf("Enter Error,Try Again!\n");
				break;
		}
	}
	return 0;
}

