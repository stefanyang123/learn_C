#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//常量的分类

//int main()
//{
//	//1.字面常量
//	3.14; 
//	10;   
//	"abcdef";
//	'a';
//	return 0;
//}

//int main()
//{
//	//2.const修饰的常变量
//	const int num = 10; //就是常变量 - 具有常属性（不能被改变的属性）
//	//虽然不可改变 但本质上是个变量，不是常量，只是具有了常属性而已
//	//num = 20; 会报错
//	printf("num=%d\n", num);   //20
//
//	return 0;
//}

//#define MAX 10000; //#define 定义的标识符常量 现在 10000就是MAX MAX就是10000
//int main()
//{
//	//3.#define 定义的标识符常量
//	// 在大括号里面定义也行，外面也行
//	////MAX = 2000; 会报错 MAX是不能改的
//	int n = MAX;
//	printf("n=%d\n", n);
//	return 0;
//}

////性别
//enum Sex
//{
//	//这种枚举变量的未来可能取值
//	MALE = 3, //枚举常量  赋初值3 默认从0开始
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//4.枚举常量
//	//可以一一列举的常量
//	//性别 男女  血型 A B O AB  星期 一...天
//
//////	enum Sex s = MALE;//拿enum Sex 创建了一个变量s
//
//	//MALE = 3;  会报错 MALE的值是不能改的 但是可以 给它赋初值
//
//	printf("%d\n", MALE);   //0
//	printf("%d\n", FEMALE); //1
//	printf("%d\n", SECRET); //2
//	return 0;
//}