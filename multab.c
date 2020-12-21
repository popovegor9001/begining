#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)

{
    int r1;
    int r2;
    int d;
    int CorrectAnswer;

    srand(time(NULL));
    CorrectAnswer = 1;
    d = 0;
    r1 = 0;
    r2 = 0;
    while (CorrectAnswer < 30)
	{
        if (d == r1 * r2)
        {
         	r1 = rand();
		    r1 = r1 % (10 - 1 + 1) + 1;
		    r2 = rand();
		    r2 = r2 % (10 - 1 + 1) + 1;
        }
		printf("%d. Реши пример %d * %d = \n", CorrectAnswer, r1, r2);
        if (scanf("%d", &d) != 1)
        {
            while(fgetc(stdin) != '\n');
            continue;
        }
        if (d == r1 * r2)
            CorrectAnswer++;
	}

        return (0);
}

