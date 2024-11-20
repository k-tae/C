#include <stdio.h>

int main()
{
	unsigned int data;
	unsigned int *p32b;
	unsigned short *p16b;
	unsigned char *p8b;

	data = 0x12345678;
	
	p32b = &data;
	p16b = (unsigned short *)&data;
	p8b = (unsigned char *)&data;

	printf("p32b address : %p, p32b data : %x\n\n", p32b, *p32b);
	printf("p16b address : %p, p16b data : %x\n\n", p16b, *p16b);
	printf("p8b address : %p, p8b data : %x\n\n", p8b, *p8b);

	return 0;
}