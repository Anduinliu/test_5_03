 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//***************************ˮ�ɻ���С��ϰ************************
//int main()
//{
//	printf("���ˮ�ɻ�����\n");
//	int i, a, b, c;
//	for (i = 100; i <= 999; i++)
//	{
//		int a = i % 10;//��λ
//		int b = (i / 10) % 10;//ʮλ
//		int c = i / 100;//��λ
//		if (a * a * a + b * b * b + c * c * c == i)
//		{
//			printf("%d\n", i);
//		}
//		
//	}
//	return 0;
//
//}
//int main()
//{
//	int a, b, c, i;
//	printf("������һ��ˮ�ɻ�����\n");
//	scanf("%d",&i);
//	a = i % 10;//��λ
//	b = (i / 10) % 10;//ʮλ
//	c = i / 100;//��λ
//	if (a * a * a + b * b * b + c * c * c == i)
//	{
//		printf("��ˮ�ɻ���\n");
//	}
//	else
//		printf("����ˮ�ɻ���");
//
//		return 0;
//}
//#include<math.h>
//int flower(int n)
//{
//	int a, b, c;
//	a = n % 10;//��λ
//	b = (n / 10) % 10;
//	c = n / 100;
//	if (pow(a, 3) + pow(b, 3) + pow(c, 3) == n)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	for (n = 100; n < 999; n++)
//	{
//		if (flower(n) == 1)
//			printf("%d\n", n);
//	}
//	return 0;
//}
//**********************************����ѧϰ����ָ��*******************************************
//char* my_strcpy(char* dest, const char* src);
//1.дһ������ָ�� pf, �ܹ�ָ��my_strcpy
//char* (*pf)(char*,const char*)
//2.дһ������ָ������ pfArr , �ܹ����4��my_strcpy�����ĵ�ַ
//char*(*pfArr[4])(char* , const char*)
//************************************* �� �� ��************************************************
//void menu()
//{
//	printf("*********************************\n");
//	printf("**    1.add          2.sub     **\n"); 
//	printf("**    3.mul          4.div     **\n");
//	printf("**           0.exit            **\n");
//	printf("*********************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}int Mul(int x, int y)
//{
//	return x * y;
//}int Div(int x, int y)
//{
//	return x / y;
//}
//void Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("������������������>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:->");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//����ָ������ - ת�Ʊ�
//void menu()
//{
//	printf("*********************************\n");
//	printf("**    1.add          2.sub     **\n");
//	printf("**    3.mul          4.div     **\n");
//	printf("**    5.Xor          0.exit    **\n");
//	printf("*********************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}int Mul(int x, int y)
//{
//	return x * y;
//}int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[6])(int, int) = { 0, Add, Sub, Mul, Div, Xor };//����ָ������
//	do
//	{
//		menu();
//		printf("��ѡ��:->");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("������������������>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;//ȡ������ĵ�ַ
//	int (*pfArr[4])(int, int);//pfArr��һ������ - ����ָ�������
//	int (*(*ppfArr)[4])(int , int) = &pfArr;
//	//ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ��������һ������ָ�� int(*)(int , int )
//	//
//	return 0;
//}
//void print(char* str)
//{
//	printf("hehe:%s",str);
//}
//void test( void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//
//	test(print);
//	return 0;
//
//}
//void Bubblesort(int arr[], int sz)
//{
//
//}
//
////qsort - ���������������͵�����
//int main()
//{
//	//ð��������
//	//ð����������ֻ��������������
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubblesort(arr,sz);
//	return 0;
//}
#include<stdlib.h>
#include<string.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
struct Stu
{
	char name[20];
	int age;
};
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;//�Ƚ���������ֵ
}
int cmp_float(const void* e1, const void* e2)
{
	if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;
}
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2)
{
	//�Ƚ����־��ǱȽ��ַ���
    //�ַ����Ƚϲ���ֱ����> = < �Ƚϣ�Ӧ����strcmp����
	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);

}
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void test2()
{
	float f[] = {9.0,8.0,7.0,6.0,5.0,4.0};
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f ", f[j]);
	}
}
void test3()
{
	struct Stu s[3] = {{"liuxuan",19},{"Anduin",189}};
	int sz = sizeof(s) / sizeof(s[0]);

	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	//��һ���������������������Ԫ�ص�ַ
	//�ڶ��������������������Ԫ�ظ���
	//�����������������������ÿ��Ԫ�صĴ�С - ��λ���ֽ�
	//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�صĺ����ĵ�ַ - �������ʹ�����Լ����岢ʵ��
	//            ����ָ������������ǣ����Ƚ�����Ԫ�صĵ�ַ

}
void Swap(char* buf1, char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz, int width,int(*cmp)(void*e1,void*e2))
{
	int i = 0;
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�صıȽ�
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
void test4()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
	//֪����αȽϴ����������е�Ԫ��
	bubble_sort(arr, sz, sizeof(arr[0]),cmp_int);
}
void test5()
{
	struct Stu s[3] = { {"liuxuan",19},{"Anduin",189} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_name);

	//bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_age);
}
int main()
{
	
	
	
	//test1();
	//test2();
	//test3();
	//bubble_sort(arr,sz);
	//test4();
	test5();
}
//int main()
//{
//	int a = 0;
//	//int* pa = &a;//
//	//char* pc = &a;
//	//char ch = 'w';
//	void* p = &a;//�����͵�ָ��
//	
//	//p = &ch;
//	//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
//	//void* ���͵�ָ�� ���ܽ��н����ò���
//	//void* ���͵�ָ�� ���ܽ��мӼ������Ĳ���
//	return 0;
//}