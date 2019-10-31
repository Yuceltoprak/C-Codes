#include<stdio.h>
#include<stdlib.h>

int main()
{
	char a[100];	scanf("%s",a);
	int i;
	
	while(a[i] != '\0'){
		
		if(islower(a[i]) != 0){
			printf("%c",toupper(a[i]));
		}
		else{
			printf("%c",tolower(a[i]));
		}
	i++;
	}

}
