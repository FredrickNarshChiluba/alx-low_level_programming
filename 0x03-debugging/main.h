#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i)
{
	if (i > 0)
                printf("%i is positive\n", i);
        else if (i < 0)
                printf("%i is negative\n", i);
        else
                printf("%i is zero\n", i);

        return (0);
}

#endif /* MAIN_H */
