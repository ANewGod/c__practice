#include <stdio.h>
#include <stdio.h>
#include <time.h>

int main()
{
	
	srand(time(0));
	int a=rand(),b; 
	a%=100;
	
	printf("���һ��100���ڵ���:");
	scanf("%d",&b);
	while (b!=a){
		if(b>a)
		  printf("��´���%d,�����²�",b-a);
		if(b<a)
		  printf("���С��%d�������²�",a-b);
		
		scanf("%d",&b);
	    
		 
	}
	
	printf ("��ϲ��¶���"); 
	
	return 0;
}
