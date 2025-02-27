#include <stdio.h>

int main(void)
{
	int hole;
	int par;
	int shots;

	printf("What hole did you play?");
	scanf("%d", &hole);
	
	printf("Par?");
	scanf("%d", &par);

	printf("How many shots did it take you?");
	scanf("%d", &shots);

	printf("You holed the ball in %d shots on a par %d, that is a bogey which scores you +2.\n", shots, par);

	return (0);
}

