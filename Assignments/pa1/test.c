#include <unistd.h>
#include <stdio.h>
#include <sys/syscall.h>
#include <stdlib.h>
#define PRINT_NUMBER 440

int main()
{
	int num = 0;
	
	while(num!=-1)
	{
		printf("Input an integer number (-1 for exit): ");
		scanf(" %d",&num);
		if(num==-1)
		{
		 break;
		} 
		syscall(PRINT_NUMBER,num);
		
	}
	
	exit(0);
}
