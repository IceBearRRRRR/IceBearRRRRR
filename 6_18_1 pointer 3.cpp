#include<stdio.h>
//Ұָ��:ָ��ָ���λ���ǲ���֪�ģ�����ġ�����ȷ�ġ�û����ȷ���Ƶģ�
// 
//int main()
//{
//	//1.ָ��δ��ʼ��
//	//�����p��һ��Ұָ��
//	//int* p;//p��һ���ֲ���ָ��������ֲ���������ʼ���Ļ���Ĭ�������ֵ
//	//*p = 20;//�Ƿ������ڴ�
//	//2.Խ�����
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*p = i;
//	//	p++;
//	//}
//	//3.ָ��ָ��Ŀռ��ͷ�
//	//
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;//��a�ĵ�ַ����֮��a���������ڽ�������ַ���ͷ�
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//��ι��Ұָ��
// 1.ָ���ʼ��
//int main()
//{
//	//��֪����ʼ��Ϊʲôʱ����ʼ��ΪNULL
//	int* p = NULL;
//	//֪��ָ���ʼ��Ϊʲôʱֱ�ӳ�ʼ��
//	return 0;
//}
// 2.С��ָ��Խ��
// c���Ա������������ݵ�Խ��
// 3.ָ��ָ��Ŀռ��ͷż�ʹָ��Ϊ��NULL
// 4.ָ��ʹ��ǰҪ������Ч�Լ��
//int* p = NULL;
//if (p != NULL)
//*p = 10;


//ָ������
//1.ָ��+-���� 
//2.ָ��-ָ��
//3.ָ��Ĺ�ϵ����
//
//int main()
//{
//	float va[5] = { 0 };
//	float* vp;
//	for (vp = &va[0]; vp < &va[5]; vp++)//ָ��+-������ָ��Ĺ�ϵ����
//	{
//		*vp= 0;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p<=pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//ָ��-ָ�룺�õ���������ָ��֮���Ԫ�ظ���
//ǰ��������ָ��ָ��ͬһ��ռ�
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//�����9
//	return 0;
//}


#include<string.h>
//ʵ��strlen�����Ĺ���
//1.�������ķ���
// int mysrlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//2.ָ��-ָ��ķ���
//int mystrlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	//strlen();//���ַ�������
//	int len = strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//ָ��+ָ�룿�������壬����������