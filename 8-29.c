#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int is_leapyear(int i)
//{
//	if (((i % 4 == 0) && (i % 100 != 0)) || i % 400 == 0)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	int a = 0;
//	int count = 0;
//	/*scanf("%d", &a);*/
//	for (a = 1000; a <= 2000; a++)
//	{
//		if (is_leapyear(a) == 0)
//		{
//			printf("%d is leapyear\n", a);
//			count++;
//		}
//		/*else
//			printf("%d is not leapyear\n", a);*/
//	}
//	printf("amount is %d\n", count);
//	return 0;
//}
//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = (left + right)/2;
//	int i = 0;
	//for (i=0;i<= (sizeof(arr)/* / sizeof(arr[0]) - 1);i++)*/
	
//		if (k < arr[mid])
//		{
//			right = mid;
//		}
//		else if (k > arr[mid])
//		{
//			left = mid;
//		}
//		else if (k = arr[mid])
//		{
//			return 1;
//			break;
//		}
//		mid = (left + right) / 2;
//	}
//	return 0;
//}
//
//int main()
//{
//	int k=0;
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
// sz=sizeof(arr1)/sizeof(arr[0])
//	scanf("%d",&k);
//	if (binary_search(arr1, k,sz)==1)
//		printf("find it \n");
//	else
//		printf("do not find it \n");
//	return 0;
//}
#include<string.h>
void func(int arr[],int a)
{
	printf("something");
}
int main()
{
	int b=0;
	int a[] = {0};
	func(a,b);
	return 0;
}