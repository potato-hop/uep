#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void my_memcpy(void *dest, const void *src, size_t n)
{
	size_t n1	= n >> 2;
	size_t n2	= n & 3;

	__asm__ __volatile__ (		".intel_syntax noprefix \n\t"
			"rep movsd \n\t"
			"mov ecx,edx \n\t"
			"rep movsb \n\t"
	:
	: "S" (src), "D" (dest), "c" (n1), "d" (n2)
	: "memory"
	);

}

long int memcpy_measure(size_t count){
	struct timespec mt1, mt2; 
	long int tt;      
	void*		buffer = malloc(count);
	void*		reciever = malloc(count);
	
	clock_gettime (CLOCK_REALTIME, &mt1);
	my_memcpy(reciever,buffer,count);
	clock_gettime (CLOCK_REALTIME, &mt2);

	return tt=1000000000*(mt2.tv_sec - mt1.tv_sec)+(mt2.tv_nsec - mt1.tv_nsec);
}

int main(void){

	unsigned int	bufsize = 4194304;

	long int sum = 0;
	for(int i=0;i<100;i++){
	sum += memcpy_measure(bufsize);
	}
	printf("100 tests average result in nanoseconds: %li \n",sum/100);

	return 0;
}
