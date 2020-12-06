#include <stdio.h>
#include <stdio.h>
#include <time.h>

int main()
{
	
	srand(time(0));
	int a=rand(),b; 
	a%=100;
	
	printf("请猜一个100以内的数:");
	scanf("%d",&b);
	while (b!=a){
		if(b>a)
		  printf("你猜大了%d,请重新猜",b-a);
		if(b<a)
		  printf("你猜小了%d，请重新猜",a-b);
		
		scanf("%d",&b);
	    
		 
	}
	
	printf ("恭喜你猜对了"); 
	
	return 0;
}
