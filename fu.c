#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void paixv(int arr[], int n)
//{
//	int i = 0;
//	int j = 0;
//	int a = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				a = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = a;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 2,5,8,4,3,6,9,10,1,7 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	paixv(arr, n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int chazhao(int* arr, int len, int n)
//{
//	int left = 0;
//	int right = len - 1;
//
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;          //��left��right��ֵ����ʱ�����
//		int mid = left + ((right - left) >> 1);  //1����ֹ�������λҲ����Ч 2��ÿ��ѭ������Ҫ���¡�
//		if (n < *(arr + mid))
//		{
//			right = mid - 1;
//		}
//		else if (n > *(arr + mid))
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//��ʾδ���ҵ�
//}
//int chazhao(int* arr, int left,int right, int n)
//{
//	int mid = (right + left) / 2;
//	if (left > right)
//	{
//		return -1;
//	}
//	if (n > arr[mid])
//	{
//		return chazhao(arr, mid + 1,right, n);
//	}
//	if (n < arr[mid])
//	{
//		return chazhao(arr, left,mid - 1, n);
//	}
//	return mid;
//}
//
//int main()
//{
//	int arr[] = { 1,3,5,7,9,11,13,15 };
//	int n = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &n);
//	int l = 0;
//	int f = len - 1;
//	printf("%d\n", chazhao(arr, l,f, n));
//	return 0;
//}

////������Add��Sub��Mul��Div�ĸ�����
//int Calc(int(*pf)(int, int))//��Ϊ�ص�����
//{
//    int x = 0;
//    int y = 0;
//    printf("����������������:>");
//    scanf("%d %d", &x, &y);
//    return pf(x, y);
//}
//int main()
//{
//    int ret1 = Calc(Add);
//    int ret2 = Calc(Sub);
//    int ret3 = Calc(Mul);
//    int ret4 = Calc(Div);
//    printf("%d %d %d %d\n", ret1, ret2, ret3, ret4);
//    return 0;
//}
//#include <stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//	int size = sizeof(arr[0]);
//	qsort(arr, num, size, cmp_int);
//	for (int i = 0; i < num - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdlib.h>
//#include <string.h>
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int sort_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int sort_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//int main()
//{
//	struct Stu s[] = { {"������",20},{"���ú�",19},{"������",22},{"�ӽ���",21} };
//	int num = sizeof(s) / sizeof(s[0]);
//	//������������
////	qsort(s, num, sizeof(s[0]), sort_age);
//	//������������
//	qsort(s, num, sizeof(s[0]), sort_name);
//
//	for (int i = 0; i < num; i++)
//	{
//		printf("%s %d\n", s[i].name,s[i].age);
//	}
//	return 0;
//}