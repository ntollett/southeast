// Nick Tollett
// southeast.c

#include <stdio.h>

void goSouthEast(int* latitude_ptr, int* longitude_ptr)
{
	*latitude_ptr = *latitude_ptr - 1;
	*longitude_ptr = *longitude_ptr + 1;
}


int main(void)
{
	int latitude = 32;
	int longitude = 64;

	goSouthEast(&latitude, &longitude);

	printf("Now at [%i %i\n]", latitude, longitude);

	return 0;
}
