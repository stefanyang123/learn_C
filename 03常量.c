#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//�����ķ���

//int main()
//{
//	//1.���泣��
//	3.14; 
//	10;   
//	"abcdef";
//	'a';
//	return 0;
//}

//int main()
//{
//	//2.const���εĳ�����
//	const int num = 10; //���ǳ����� - ���г����ԣ����ܱ��ı�����ԣ�
//	//��Ȼ���ɸı� ���������Ǹ����������ǳ�����ֻ�Ǿ����˳����Զ���
//	//num = 20; �ᱨ��
//	printf("num=%d\n", num);   //20
//
//	return 0;
//}

//#define MAX 10000; //#define ����ı�ʶ������ ���� 10000����MAX MAX����10000
//int main()
//{
//	//3.#define ����ı�ʶ������
//	// �ڴ��������涨��Ҳ�У�����Ҳ��
//	////MAX = 2000; �ᱨ�� MAX�ǲ��ܸĵ�
//	int n = MAX;
//	printf("n=%d\n", n);
//	return 0;
//}

////�Ա�
//enum Sex
//{
//	//����ö�ٱ�����δ������ȡֵ
//	MALE = 3, //ö�ٳ���  ����ֵ3 Ĭ�ϴ�0��ʼ
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//4.ö�ٳ���
//	//����һһ�оٵĳ���
//	//�Ա� ��Ů  Ѫ�� A B O AB  ���� һ...��
//
//////	enum Sex s = MALE;//��enum Sex ������һ������s
//
//	//MALE = 3;  �ᱨ�� MALE��ֵ�ǲ��ܸĵ� ���ǿ��� ��������ֵ
//
//	printf("%d\n", MALE);   //0
//	printf("%d\n", FEMALE); //1
//	printf("%d\n", SECRET); //2
//	return 0;
//}