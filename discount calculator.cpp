#include <stdio.h>

int main(){
	int op,dp,ta,da;
	
	printf("What is your original price?\n");
	scanf("%d",&op);
	printf("What is your discount percentage?\n");
	scanf("%d",&dp);
	
	da = op * dp/100;
	
	printf("discounted amount %d * %d/100 = %d\n",op,dp,da);
	
	ta = op - da;
	
	printf("Total amount after discount: %d\n",ta,da,op);
	
	return 0;
}
