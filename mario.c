
#include <stdio.h>

int main(void)
{

	int height, space;

	while(1)
	{
		do{
			printf("Height: ");
			scanf("%d", &height);

		}while(height < 1 || height > 8);


		space = height;
		for(int i = 1; i <= height; i++, space--)
		{
			for(int j = 0; j < space; j++)
			{
				printf(" " );
			}

			for(int x = 0; x < i; x++)
			{
				printf("#");
			}

			printf("  ");

			for(int x = 0; x < i; x++)
			{
				printf("#");
			}

			printf("\n");
	
		}
	}

}