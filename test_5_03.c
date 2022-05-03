 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//***************************水仙花数小练习************************
//int main()
//{
//	printf("输出水仙花数：\n");
//	int i, a, b, c;
//	for (i = 100; i <= 999; i++)
//	{
//		int a = i % 10;//个位
//		int b = (i / 10) % 10;//十位
//		int c = i / 100;//百位
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
//	printf("请输入一个水仙花数：\n");
//	scanf("%d",&i);
//	a = i % 10;//个位
//	b = (i / 10) % 10;//十位
//	c = i / 100;//百位
//	if (a * a * a + b * b * b + c * c * c == i)
//	{
//		printf("是水仙花数\n");
//	}
//	else
//		printf("不是水仙花数");
//
//		return 0;
//}
//#include<math.h>
//int flower(int n)
//{
//	int a, b, c;
//	a = n % 10;//个位
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
//**********************************继续学习函数指针*******************************************
//char* my_strcpy(char* dest, const char* src);
//1.写一个函数指针 pf, 能够指向my_strcpy
//char* (*pf)(char*,const char*)
//2.写一个函数指针数组 pfArr , 能够存放4个my_strcpy函数的地址
//char*(*pfArr[4])(char* , const char*)
//************************************* 计 算 器************************************************
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
//	printf("请输入两个操作数：>");
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
//		printf("请选择:->");
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
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//函数指针数组 - 转移表
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
//	int (*pfArr[6])(int, int) = { 0, Add, Sub, Mul, Div, Xor };//函数指针数组
//	do
//	{
//		menu();
//		printf("请选择:->");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数：>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
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
//	int (*p)[10] = &arr;//取出数组的地址
//	int (*pfArr[4])(int, int);//pfArr是一个数组 - 函数指针的数组
//	int (*(*ppfArr)[4])(int , int) = &pfArr;
//	//ppfArr是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素类型是一个函数指针 int(*)(int , int )
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
////qsort - 可以排序任意类型的数据
//int main()
//{
//	//冒泡排序函数
//	//冒泡排数函数只能排序整型数组
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
	return *(int*)e1 - *(int*)e2;//比较两个整型值
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
	//比较名字就是比较字符串
    //字符串比较不能直接用> = < 比较，应该用strcmp函数
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
	//第一个参数：待排序数组的首元素地址
	//第二个参数：待排序数组的元素个数
	//第三个参数：待排序数组的每个元素的大小 - 单位是字节
	//第四个参数：是函数指针，比较两个元素的函数的地址 - 这个函数使用者自己定义并实现
	//            函数指针的两个参数是：待比较两个元素的地址

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
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素的比较
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
void test4()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//使用bubble_sort的程序员一定知道自己排序的是什么数据
	//知道如何比较待排序数组中的元素
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
//	void* p = &a;//无类型的指针
//	
//	//p = &ch;
//	//void* 类型的指针 可以接受任意类型的地址
//	//void* 类型的指针 不能进行解引用操作
//	//void* 类型的指针 不能进行加减整数的操作
//	return 0;
//}