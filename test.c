#define _CRT_SECURE_NO_WARNINGS 1
//������
//#include<stdio.h>
//int main()
//{
//	int a = 16;
//	int b =a >> 1;
//	//a������һλ �ƶ����Ƕ�����λ
//	//1.�������ơ�
//	// 	  �ұ߶�������߲�ԭ����λ
//	//2.�߼�����
//	// 	   �ұ߶�������߲�0��
//	//16�Ķ�����λ�� 10000
//	printf("%d\n", b);
//	
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = -5;
//	int b = a << 1;
//	//�������Ʋ���������߶��� �ұ߲��㣬�г�2��Ч��
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
//	//��num��λ��1 ������һλ��1 ����1�������0��Ϊ0
//	}
//	//while (num)ͳ������������������ж��ٸ�1���㷨ȱ�� ����-1ʱ�����0
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
//	//~ ��λȡ��  ������λ
//	//00000000000000000000000000000000 ԭ��
 //	//11111111111111111111111111111111 ����
//	//11111111111111111111111111111110 ����
//	//10000000000000000000000000000000 ԭ��
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
//	test(arr);����ȥ���ǵ�ַ����Ҫ��ָ����գ���32λƽ̨ ��4
//	test2(ch);����ȥ���ǵ�ַ����Ҫ��ָ����գ���32λƽ̨ ��4
//	return 0;
//}P80

//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;//��ǰ��Ϊ��ʱ�Ͳ���ִ�к��棬���ǰ�治���棬��ִ�к���������Ͳ�ִ��
//	//i = a++ && ++b && d++;//a=0ʹ���߼������Ĳ�ִ��
//	printf("%d %d %d %d", a, b, c, d);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int max = 0;
//	max=(a > b ? a:b);//���a>b�������ʽ�Ľ������a ������b
//	printf("%d", max);
//	return 0;
//}

//#include<stdio.h>//�ṹ�����
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	struct stu s1 ={"����",20,"20210926" };
//	struct stu* ps = &s1;
//	printf("%s\n", ps->name);���� (*ps).name
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
//	//һ������ռ���ڴ�ռ���32��bitλ
//	//00000000000000000000000000000011
//	//00000011 -a   ��Ϊcharֻ�ܷ�һ���ֽ� ���Դ�ʱ�����ض�
//	char b = 127;
//	//00000000000000000000000001111111
//	//011111111
//	char c = a + b;
//	//char a = 00000011
//	// 
//	//char b = 01111111
//	//���������������ǰ��ձ������������͵ķ���λ��������
//	//000000000000000000000000000000011
//	//000000000000000000000000001111111 Ȼ��ֱ�����
//	//000000000000000000000000010000010
//	//Ȼ��Ҫ����c char���� �ͷ����ض�
//	//100000010
//	//��ΪҪ��ӡ���� �ٷ�����������
//	//���ݵ�һ������λ��
//	//111111111111111111111111110000010-����
//	//111111111111111111111111110000001-����
//	//000000000000000000000000001111110-ԭ�� -126
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
//	int a = 0x11223344;//һ��16����λ��4��2����λ
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

//Ұָ�룺ָ��ָ���λ����δ֪��(ָ�벻��ʼ����ָ��Խ����ʾ���Ұָ�룩
//#include<stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
	//{
//	int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
//	*p = 20;
	
    //ָ��Խ��
	//int arr[10] = { 0 };
	//int* p = arr;
	//int i = 0;
	//for (i = 0; i < 12; i++)
	//{
	// *p =i;\   
	//	 p++;/  ===   *p++ =  i;
	//}

	//ָ��ָ���ڴ�ռ��ͷ�
//	int* p = test();���������� a�Ŀռ��ѱ��ͷ�
//	*p = 20;
//	return 0;  
// 
// ���㲻֪��ָ������ø�ʲôֵʱ int* p = NULL
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
//& arr - &������ - ��ʱ������������Ԫ�صĵ�ַ����������ʾ�������� ȡ������������ĵ�ַ
//sizeof��arr��-sizeof(������)������������ʾ�����������飬���������������Ĵ�С	
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

//����ָ��
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa=&pa;//ppa���Ƕ���ָ�� �ŵ���pa�ĵ�ַ����ô*ppa�ҵľ���pa��**ppa�ҵľ���a
//	printf(" %d\n",**ppa);
//	return 0;
//}

//ָ������- ����-���ָ�������
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };//ָ������
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n" ,*arr[i]);
//	}
//	return 0;
//}
//����ָ��- ָ��
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
//��ҵ
//#include<stdio.h> ð������ n��������n-1�αȽϣ�ѭ������n-1����ʱ�ͻ���n-2�αȽϣ�ѭ����
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
//#include<stdio.h> ��ʼ�����飬��������
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

//#include<stdio.h>���齻��
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
//#include<stdio.h>ǿ��ת��
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*) arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0; �������ֽ�
//	}
//	for (i = 0; i < 5; i++)
//	{
//      printf("%d", arr[i]);
//	}
//	return 0;
//}

//��һ�����Ķ����Ʊ��ʽ��1�ĸ���
//#include<stdio.h>����һ
//int count_bit_one(unsigned n)//����������-1���Ͱ�������޷�����
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
//#include<stdio.h>����2
//int count_bit_one(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)��32���ֶ�&1
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
//	//дһ��������a�Ķ�����(���룩����� �м���1
//	int count = count_bit_one(a);
//	//13
//	//00000000000000000000000000001101
//	printf("count=%d\n", count);
//	
//	return 0;
//}94
//������
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
//����m��n���ж���λ��ͬ
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

//#include<stdio.h> ��ӡ����λ��ż��λ
//void print(int m)
//{
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ",(m>>i)&1);
//	}
//	printf("ż��λ\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("����λ\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//#include<stdio.h>�ݹ�ʵ��n�Ľ׳�
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

//#include<stdio.h> ָ��������ַ�������
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
//#include<stdio.h>�ݹ�����ַ��������Ҳ����ÿ⺯��
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

//#include<stdio.h>�ݹ�ʵ�� ���ֵ�ÿλ�����
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


//#include<stdio.h>//�ݹ�ʵ��n��k�η� 
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

//#include<stdio.h>  ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//                   ��: 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//int weishu(int i) ��λ��
//{
//	int count = 1;
//	while (i > 9)
//	{
//		count++;
//		i /= 10;
//	}
//	return count;
//}
//int jiechen(int n, int k)��׳�
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
//int digit(int i)  ���ǲ���ˮ�ɻ���
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

//�ṹ��
//#include<stdio.h>
//struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//ȫ�ֱ���,��������ȫ�ֱ���
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//(����typedef�� ��struct stu �������� stu)
//int main()
//{
//	struct stu b = { "���ٳ�",20,"18960235433","��" };//b�Ǿֲ�����
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
//�ṹ�崫��
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
//	Stu s = { "����",20,"18960235433","��" };
//	Print1(s);
//	printf("\n");
//	Print2(&s);//���Print1����һ��,Print1Ҫ���ٿռ䣬��ʱ��Ϳռ��϶���Print1��һ��
//	return 0;
//}

//#include<stdio.h> 1-n�Ľ׳����
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
//char* my_strcpy(char* dest,const char* dest2)//��const ���縳ֵд��ʱ ���׷��ִ���
//{
//	//��1
//	/*int i = 0;
//	while (*dest2 !='\0' )
//	{
//		*dest = *dest2;
//		dest++;
//		dest2++;
//	}
//	*dest =*dest2;*/
//
//	//int i = 0;��2
//
//	//while (dest2[i] != '\0')
//	//{
//	//	dest[i] = dest2[i];
//	//	i++;
//	//}
//	//dest[i] = dest2[i];
//
//	//��3
//	//while (*dest++ = *dest2++)//'\0'Ϊ��
//	//{ 
//	//	;
//	//}
//	//��4�Ż�  ��ֹ����ʱ������һ����ָ�� ����my_strcmp(arr1,NULL)
//	//�Ż�1.if (dest != NULL && dest2 != NULL)
//	//{
//		//while (*dest++ = *dest2++)
//		//{
//			;
//		//}
//	//}
//    //��4 �Ż�2
//	//assert(dest != NULL);//���� ������������׳���
//	//assert(dest2 != NULL);//����
//
//	//while (*dest++ = *dest2++)
//	//{
//	//	;
//	//}
//	
//
//	//�Ż�3
//    //strcpy����  char* strcpy(char* strDestination,const char* strsource);
//     //const ����ʹ�õڶ�������ĵ���ֵ�����ı�
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
//}��dest2ָ����ַ���������destָ��Ŀռ��У�����'\0'�ַ�
//1.*dest++=*dest2++
//2.assert(dest!=NULL��
//3.const
//4.char*


//�� (�ú���ʵ��strlen���������ʵ�ֵ�����
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//   //1.��ָ֤����Ч��
//	assert(*str != NULL);
//   //2.��'\0'
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

