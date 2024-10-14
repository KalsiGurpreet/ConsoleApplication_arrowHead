#include<stdio.h>
int main(void)
{
	char a = '*';
	char sp = ' ';
	short number = 0;
	int x = 0;
	int y = 0;
	int i = 0;
	int j = 0;


	puts("Please enter your choice of number.");
	scanf_s("%hd", &number);

	if (number > 1)
	{
		if (number <= 20)
		{


			// for (int x = 0; x < number; x++)
			for (x = 0; x < number; x++)
			{
				// printf("count1 is %d\n", x); // first value that goes to second loop is 0 and its with every for loop.

				printf("%c", a);

				for (i = 0; i < x; i++) // loop run again from 0 counter and last value is saved.
				{
					// printf("count1 is %d\n", i);
					printf("%c", sp);
				}
				printf("%c\n", a);

			}
			// printf("counter1 and counter2 is %d, %d\n", x, i); // instead using locally, use it as global variable.


			for (y = 0; y < x; y++) // now here also next value that goes is 0 first.
			{
				printf("%c", a);

				for (j = i; j > y; j--) // 2>0, 1>0 runs as true, 0>0 false, loop exit, y next time will be 1.
					// loop start again, j is again 2, y is 1, 2>1 true, 1>1 false
				{
					printf("%c", sp);
				}
				printf("%c\n", a);
			}
		}
		else
		{
			puts("Please enter a valid number");
		}
	}
	else
	{
		 puts("Please enter a valid number");
	}
	
	return 0;

}