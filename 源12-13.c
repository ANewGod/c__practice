#include <stdio.h>
#include <string.h>

//int main()
//{
//  int num;
//  num = (-3) % 2;
//  pritnf("%d", num);
//return 0;
//}
//int main()
//{
//	int i = 3;
//	char a[5] = "abcd";
//	/*printf("sizeof:%d %d %d ", sizeof(i), sizeof(a),sizeof(a[3]));*/
//	printf("strlen:  %d",  strlen(a));
//	return 0;
//}

//int main()
//{
//	int year;
//	printf("请输入要判断的年份：\n");
//	scanf("%d", &year);
//	if (year % 400 == 0)
//		printf("%d是闰年", year);
//	else if (year % 4 == 0 && year % 100 != 0)
//		printf("%d是闰年", year);
//	else
//		printf("%d是平年", year);
//	
//	return 0;
//}

//判断素数
int isprime(int x)
{
	int t=1;
	for (int i = 2; i < x; ++i)
	{
		if (x%i == 0)
		{
			t = 0;
			break;
		}
     }
	return t;
}
int main()
{
	for (int i = 100; i < 201; ++i)
	{
		if (isprime(i))
			printf("%d ", i);
	}
	return 0;
}