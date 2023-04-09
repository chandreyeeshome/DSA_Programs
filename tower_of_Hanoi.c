#include<stdio.h>
#include<stdlib.h>
int Tower_of_Hanoi(int n, char src, char aux, char dest);
int main()
{
	int N;
	int i=1;
	system("clear");
	printf("Enter the number of Disks: ");
	scanf("%d",&N);
	printf("Let us name the 3 Towers - 'A'(Source) 'B'(Auxiliary) 'C'(Destination)\n\n");
	printf("In order to move the %d Disks from 'A' to 'C', follow the given steps:\n\n",N);
	Tower_of_Hanoi(N , 'A', 'B', 'C');
	return 0;
}

int Tower_of_Hanoi(int n, char src, char aux, char dest)
{
	if(n==0)
	{
		return 0;
	}
	Tower_of_Hanoi(n-1,src,dest,aux);
	printf("Move Disk-%d from Tower-%c to Tower-%c\n",n,src,dest);
	Tower_of_Hanoi(n-1,aux,src,dest);
}
//STEP %d -->
//int i=1;
//i++;
