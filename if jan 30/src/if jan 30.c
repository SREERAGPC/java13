/*
 ============================================================================
 Name        : if.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("enter 2 number");
	int a,b,c,result;
	scanf("%d%d",&a,&b);
	printf("\n 1 for addition \n 2 for substraction \n 3 for multi \n 4 for div \n enter ur choice ");
	scanf("%d",&c);
	if(c==1){result==a+b;
		}else if(c==2){result==a-b;

		}else if(c==3){result==a*b;

		}else if(c==4){result==a/b;

		}else {printf("fool!!!")
		printf("result = %d",result);
	return EXIT_SUCCESS;
}
