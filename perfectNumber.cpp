#include<stdio.h>

void mukemmel(int);
int main()
{	
	int sayi;
	scanf("%d",&sayi);
	mukemmel(sayi);

return 0;
}

void mukemmel(int sayi)
{
	int i=1,toplam=0;
	while(i<sayi)	//kosulu saglamazsa while a hic girmez..
	{
		if(sayi%i==0)
		{
			toplam+=i;
		}
		i++;
	}
	if(toplam==sayi)
	{
		printf("1");	//mukemmel sayi demek..
	}
	else
	{
		printf("0");	//mukemmel sayid degil demek..
	}
}
