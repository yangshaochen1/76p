#define _CRT_SECURE_NO_WARNINGS 1
//操作符
//#include<stdio.h>
//int main()
//{
//	int a = 16;
//	int b =a >> 1;
//	//a向右移一位 移动的是二进制位
//	//1.算数右移○
//	// 	  右边丢弃，左边补原符号位
//	//2.逻辑右移
//	// 	   右边丢弃，左边补0；
//	//16的二进制位是 10000
//	printf("%d\n", b);
//	
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = -5;
//	int b = a << 1;
//	//对于左移操作符，左边丢弃 右边补零，有乘2的效果
//	printf("%d", b);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((num >> i) & 1)
//			count++;
//	//让num按位与1 如果最后一位是1 则是1，如果是0则为0
//	}
//	//while (num)统计输入的数二进制中有多少个1，算法缺点 输入-1时结果是0
//	//{
//	//	if (num % 2 == 1)
//	//	{
//	//		count++;
//	//	}
//	//	num /= 2;
//	//}
//	printf("%d\n", count);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	//~ 按位取反  二进制位
//	//00000000000000000000000000000000 原码
 //	//11111111111111111111111111111111 补码
//	//11111111111111111111111111111110 反码
//	//10000000000000000000000000000000 原码
//	printf("%d\n", ~a);
//	return 0;
//}
 
//#include<stdio.h>
//void test(int arr[])
//{
//	printf("%d\n", sizeof(arr));4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));4
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));40
//	printf("%d\n", sizeof(ch));10
//	test(arr);传过去的是地址，需要用指针接收，在32位平台 是4
//	test2(ch);传过去的是地址，需要用指针接收，在32位平台 是4
//	return 0;
//}P80

//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;//当前面为真时就不会执行后面，如果前面不是真，则执行后面出到真后就不执行
//	//i = a++ && ++b && d++;//a=0使得逻辑与后面的不执行
//	printf("%d %d %d %d", a, b, c, d);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int max = 0;
//	max=(a > b ? a:b);//如果a>b整个表达式的结果就是a 否则是b
//	printf("%d", max);
//	return 0;
//}

//#include<stdio.h>//结构体变量
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	struct stu s1 ={"张三",20,"20210926" };
//	struct stu* ps = &s1;
//	printf("%s\n", ps->name);或者 (*ps).name
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//
//	/*printf("%s\n",s1.name);
//	printf("%d\n",s1.age);
//	printf("%s\n",s1.id);*/
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = 3;
//	//一个整数占得内存空间是32个bit位
//	//00000000000000000000000000000011
//	//00000011 -a   因为char只能放一个字节 所以此时发生截断
//	char b = 127;
//	//00000000000000000000000001111111
//	//011111111
//	char c = a + b;
//	//char a = 00000011
//	// 
//	//char b = 01111111
//	//发生整型提升，是按照变量的数据类型的符号位来提升的
//	//000000000000000000000000000000011
//	//000000000000000000000000001111111 然后直接相加
//	//000000000000000000000000010000010
//	//然后要返回c char类型 就发生截断
//	//100000010
//	//因为要打印整形 再发生整形提升
//	//根据第一个符号位补
//	//111111111111111111111111110000010-补码
//	//111111111111111111111111110000001-反码
//	//000000000000000000000000001111110-原码 -126
//	printf(" %d\n", c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));1
//	printf("%u\n", sizeof(+c));4
//	printf("%u\n", sizeof(!c));1
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));*/
//	int a = 0x11223344;//一个16进制位是4个2进制位
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//char* p =arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//野指针：指针指向的位置是未知的(指针不初始化或指针越界访问就是野指针）
//#include<stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
	//{
//	int a;//局部变量不初始化，默认是随机值
//	int* p;//局部的指针变量，就被初始化随机值
//	*p = 20;
	
    //指针越界
	//int arr[10] = { 0 };
	//int* p = arr;
	//int i = 0;
	//for (i = 0; i < 12; i++)
	//{
	// *p =i;\   
	//	 p++;/  ===   *p++ =  i;
	//}

	//指针指向内存空间释放
//	int* p = test();函数结束后 a的空间已被释放
//	*p = 20;
//	return 0;  
// 
// 当你不知道指针变量该赋什么值时 int* p = NULL
//}87

//#include<stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main(void)
//{
//	char arr[] = "bit";
//	int i = my_strlen(arr);
//	printf("%d\n", i);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* v;
//	for (v = &arr[10]; v > &arr[0];)
//	{
//		*--v = 0;
//	}*/
//	return 0;
//}
//#include<stdio.h>
//& arr - &数组名 - 此时数组名不是首元素的地址，数组名表示整个数组 取得是整个数组的地址
//sizeof（arr）-sizeof(数组名)这里数组名表示的是整个数组，计算的是整个数组的大小	
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}

//二级指针
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa=&pa;//ppa就是二级指针 放的是pa的地址，那么*ppa找的就是pa，**ppa找的就是a
//	printf(" %d\n",**ppa);
//	return 0;
//}

//指针数组- 数组-存放指针的数组
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };//指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n" ,*arr[i]);
//	}
//	return 0;
//}
//数组指针- 指针
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p;
//	int i = 0;
//	for (p = &arr[0]; p < &arr[10];)
//	{
//		*p++ = 1;
//	}
//	return 0;
//}
//作业
//#include<stdio.h> 冒泡排序 n个数就有n-1次比较（循环），n-1个数时就会有n-2次比较（循环）
//#include<stdlib.h>
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for(i=0;i<10;i++)
//	{ 
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (j = 0; j < 9; j++)
//	{
//		for (i = 0; i < 9 - j; i++)
//		{
//			if (a[i] > a[i + 1])
//			{
//				tmp = a[i];
//				a[i] = a[i+1];
//				a[i+1] = tmp;
//			}
//		}
//	}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d\n", a[i]);
//		}
//	return 0;
//}
//#include<stdio.h> 初始化数组，逆置数组
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Printf(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int i = 0;
//	int j = sz - 1; 
//	int tmp = 0;
//	while(i<j)
//	{
//		tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//		i++;
//		j--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr,sz);
//	Printf(arr, sz);
//	reverse(arr, sz);
//	Printf(arr, sz);
//	return 0;
//}

//#include<stdio.h>数组交换
//void swap(char a[], char b[])
//{
//	int i = 0;
//	int tmp=0;
//	for (i = 0; i < 5; i++)
//	{
//		tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("a[%d]=%d\n", i, a[i]);
//		printf("b[%d]=%d\n", i, b[i]);
//	}
//}
//int main()
//{
//	char a[5] = { 6,7,8,9,10};
//	char b[5] = { 1,2,3,4,5 };
//	swap(a, b);
//	return 0;
//}
//#include<stdio.h>强制转化
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*) arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0; 跳两个字节
//	}
//	for (i = 0; i < 5; i++)
//	{
//      printf("%d", arr[i]);
//	}
//	return 0;
//}

//求一个数的二进制表达式中1的个数
//#include<stdio.h>方法一
//int count_bit_one(unsigned n)//如果输入的是-1，就把它变成无符号数
//{
//	int count = 0;
//	while (n != 0)
//	{
//		if (n % 2 == 1)
//			count++;
//		
//		n /= 2;
//	}
//	return count;
//}
//#include<stdio.h>方法2
//int count_bit_one(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)让32数字都&1
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//写一个函数求a的二进制(补码）表达中 有几个1
//	int count = count_bit_one(a);
//	//13
//	//00000000000000000000000000001101
//	printf("count=%d\n", count);
//	
//	return 0;
//}94
//方法三
//#include<stdio.h>
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n != 0)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//n=n&n(n-1)
//n
//13
//1101 n
//1100 n-1
//1100 n
//1010 n-1
//1000 n
//0100 n-1
//0000 n
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("%d\n", count);
//	return 0;
//}
//整数m和n中有多少位不同
//#include<stdio.h>
//int get_differ_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp!= 0)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count =get_differ_bit(m, n);
//	printf("%d\n", count);
//	return 0;
//}

//#include<stdio.h> 打印奇数位和偶数位
//void print(int m)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ",(m>>i)&1);
//	}
//	printf("偶数位\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("寄数位\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//#include<stdio.h>递归实现n的阶乘
//int jiechen(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * jiechen(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int re= jiechen(n);
//	printf("%d\n", re);
//	return 0;
//}

//#include<stdio.h> 指针相减求字符串长度
//int my_strlen(char* str)
//{
//	char* p = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - p;
//}
//void reverse(char* arr)
//{
//	int left = 0;
//	int right = my_strlen(arr)-1;
//	int tmp = 0;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//#include<stdio.h>递归完成字符串逆置且不调用库函数
//int my_strlen(char* str)
//{
//	int i = 0;
//	while (str[i])
//	{
//		i++;
//		}
//	return i;
//}
//void reverse(char arr[])
//{
//	int tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len -1];
//	arr[len - 1] = '\0';
//	if(my_strlen(arr+1)>=2)
//	  reverse(arr+1);
//	arr[len-1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//#include<stdio.h>递归实现 数字的每位数相加
//int digitsum(unsigned int i)
//{
//	if (i > 9)
//	{
//		return i % 10 + digitsum(i / 10);
//	}
//	else
//	{
//		return i;
//	}
//	//int j = 0;
//	//j = i % 10;
//	//int tmp = i;
//	//i /= 10;
//	//if (i == 0)
//	//	return tmp;
//	//else
//	//{
//	//	return j + digitsum(i);
//	//}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int r = digitsum(i);
//	printf("%d", r);
//	return 0;
//}


//#include<stdio.h>//递归实现n的k次方 
//double pow(int n, int k)
//{
//	if (k <0)
//	{
//		return (1.0/(pow(n,-k)));
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * pow(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = pow(n, k);
//	printf("%lf", ret);
//}97

//#include<stdio.h>  水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身。
//                   如: 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//int weishu(int i) 求位数
//{
//	int count = 1;
//	while (i > 9)
//	{
//		count++;
//		i /= 10;
//	}
//	return count;
//}
//int jiechen(int n, int k)求阶乘
//{
//	int i = 0;
//	int c = 1;
//	if (n == 0)
//	{
//		return 0;
//	}
//	for (i = 1; i <= k; i++)
//	{
//		c *= n;
//	}
//	return c;
//}
//int digit(int i)  求是不是水仙花数
//{
//	int n = weishu(i);
//	int sum = 0;
//	int num = i;
//	for(int i = 0;i<n;i++)
//	{
//		sum = sum + jiechen(num % 10,n);
//		num /= 10;
//	}
//	if (sum == i)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		if (digit(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//结构体
//#include<stdio.h>
//struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//全局变量,尽量少用全局变量
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//(加了typedef后 把struct stu 改名成了 stu)
//int main()
//{
//	struct stu b = { "杨少晨",20,"18960235433","男" };//b是局部变量
//	stu b2;
//	struct stu* p = &b;
//	printf("%s\n",p->name);
//	printf("%d\n",p->age);
//	printf("%s\n",p->tele);
//	printf("%s\n",p->sex);
//	//printf("%d\n",b.age);
//	//printf("%s\n",b.tele);
//	//printf("%s\n",b.sex);
//	return 0;
//}

//#include<stdio.h>
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* p;
//};
//int main()
//{
// 	char arr[] = "hallo bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr};
//	//struct T t = { "hehe",{},NULL};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.p);
//	return 0;
//}
//结构体传参
//#include<stdio.h>
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//void Print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//
//}
//void Print2(Stu* s)
//{
//	printf("name: %s\n", s->name);
//	printf("age: %d\n", s->age);
//	printf("tele: %s\n", s->tele);
//	printf("sex: %s\n", s->sex);
//}
//int main()
//{
//	Stu s = { "李四",20,"18960235433","男" };
//	Print1(s);
//	printf("\n");
//	Print2(&s);//相比Print1更好一点,Print1要开辟空间，在时间和空间上都比Print1好一点
//	return 0;
//}

//#include<stdio.h> 1-n的阶乘相加
//int main()
//{ 
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int ret = 1;
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//    float s = 0;
//	printf("\ayour salary is :");
//	printf("%_______\b\b\b\b\b\b\b");
//	scanf("%f", &s);
//	printf("\n\t%.2f a month is %.2f a year.", s,s*12.0);
//	printf("\rGEE!\n");
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest,const char* dest2)//加const 例如赋值写反时 容易发现错误
//{
//	//法1
//	/*int i = 0;
//	while (*dest2 !='\0' )
//	{
//		*dest = *dest2;
//		dest++;
//		dest2++;
//	}
//	*dest =*dest2;*/
//
//	//int i = 0;法2
//
//	//while (dest2[i] != '\0')
//	//{
//	//	dest[i] = dest2[i];
//	//	i++;
//	//}
//	//dest[i] = dest2[i];
//
//	//法3
//	//while (*dest++ = *dest2++)//'\0'为假
//	//{ 
//	//	;
//	//}
//	//法4优化  防止传参时错误传了一个空指针 例如my_strcmp(arr1,NULL)
//	//优化1.if (dest != NULL && dest2 != NULL)
//	//{
//		//while (*dest++ = *dest2++)
//		//{
//			;
//		//}
//	//}
//    //法4 优化2
//	//assert(dest != NULL);//断言 发现问题可以抛出来
//	//assert(dest2 != NULL);//断言
//
//	//while (*dest++ = *dest2++)
//	//{
//	//	;
//	//}
//	
//
//	//优化3
//    //strcpy函数  char* strcpy(char* strDestination,const char* strsource);
//     //const 修饰使得第二个数组的的数值不被改变
//    //char* my_strcpy(char* dest,const char* dest2)
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(dest2 != NULL);
//    while (*dest++ = *dest2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "88888*******";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	/*my_strcpy(arr1,NULL);*/
//	printf("%s\n",my_strcpy(arr1, arr2));
//	
//	return 0;
//}把dest2指向的字符串拷贝到dest指向的空间中，包含'\0'字符
//1.*dest++=*dest2++
//2.assert(dest!=NULL）
//3.const
//4.char*


//把 (用函数实现strlen）这个代码实现到满分
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//   //1.保证指针有效性
//	assert(*str != NULL);
//   //2.找'\0'
//	int count = 0;
//	while (*str != '\0')
//	{
//       str++;
//	   count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}108 

