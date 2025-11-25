#include <stdio.h>
int main(){
	printf("Hey! In Loop Section we will print from 1 to 10.\n");
	
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	 char b;
	int a = 0;
	while(a <= 10){
		if(a >= 1){
			printf("%d\n", a);
		}
		a++;
	}
	printf("Now! Give Feedback:");
	scanf("%s", &b);
	
	return 0;
}