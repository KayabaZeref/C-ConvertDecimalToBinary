#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int convert(int i)
{
    if (i > 0)
    {
        convert (i/2);
        printf("%d",i%2);
	}
}

int main(int argc, char *argv[]) 
{
	int num;
	char key;
	do
	{
		printf("Convert Decimal to Binary program");
		do
		{
			printf("\nEnter a positive number: ");
			scanf("%d",&num);
		}
		// Number cannot be negative
		while(num<=0);
		convert(num);
		printf("\n");
		printf("Press any key to continue, Exit if press ESC.");
		// User input from keyboard
		key=getchar();
		key=getch();
		printf("\n");
	} 
	// Program complete if user input esc button
	while (key != 27);
	return 0;
}
