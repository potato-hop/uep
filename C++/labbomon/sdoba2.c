#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

long int memcpy_measure(size_t count){
	struct timespec mt1, mt2; 
	long int tt;      
	void*		buffer = malloc(count);
	void*		reciever = malloc(count);
	
	clock_gettime (CLOCK_REALTIME, &mt1);
	memcpy(reciever,buffer,count);
	clock_gettime (CLOCK_REALTIME, &mt2);

	//Заставим комп проверить, что всё скопировалось.
	//На скорость отработки memcpy это не влияет.
	int cmp = memcmp(reciever,buffer,count);
	printf("cmp: %i",cmp);

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
