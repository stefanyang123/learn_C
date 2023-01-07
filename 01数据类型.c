//快捷方式

//修改注释快捷键？
//工具-选项-键盘-注释-编辑 注释选定内容-选定名令的快捷键-移除-新快捷键-分配-确定 

//光标变成方块？
//按insert键

//快速复制一行
//Ctrl+D   或直接ctrl+c ctrl+v

//快速执行
//ctrl+f5

//调试
//F10

//写一个代码，在屏幕上打印：杨博文
//printf - 库函数 - 在屏幕上打印信息
//printf - 的使用，也得打招呼（引用头文件 stdio.h）
//   \n换行


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>

//int main()
//{
//printf("杨博文\n");
//	return 0;
//}

//编译+链接+运行代码
// 快捷键：
//		ctrl+f5
//		fn+ctrl+f5
//		菜单栏-调试-开始执行不调试
// 
//如果有一个窗口一闪而过，太快没有看清
//设置项目属性：右键-属性-通用配置器-链接器-系统-子系统-改成控制台


//数据类型
//计算机语言 - 写程序 - 解决生活中的问题
//必须有能力来描述生活中的问题
//C语言 - 浮点数  价格
//      - 整型   年龄
//数据类型
//char  字符数据类型
//short 短整型
// int  整形
// long 长整形
// float 单精度浮点数
// double 双精度浮点数

//a
//'a'  将字符a放入ch变量空间里面去

//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整形
//	int age = 20;
//	//短整型
//	short num = 10;
//	//long
//	//long long
//
//	//单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型
//	double d = 0.0;
//
//	return 0;
//
//}

//int main()
//{
//	printf("hehe\n");
//	printf("比特\n");
//	printf("%d\n",100); //打印一个整数 - %d
//
//	//sizeof 关键字 操作符 计算类型或变量所占空间的大小 单位字节 byte
//	
//	//计算机中的单位 
//		//bit 比特位  一个比特位 用来存放一个二进制位
//		//byte 字节  8bit 一个字节 等于八个比特位
//		//kb   1024byte
//		//mb   1024kb
//		//gb   1024mb
//		//tb   1024gb
//		//pb   1024tb
//		
//
//	printf("%d\n",sizeof(char)); //打印一个整数 - %d
//	printf("%d\n",sizeof(short)); //打印一个整数 - %d
//	printf("%d\n",sizeof(int)); //打印一个整数 - %d
//	printf("%d\n",sizeof(long)); //打印一个整数 - %d
//	printf("%d\n",sizeof(long long)); //打印一个整数 - %d
//	printf("%d\n",sizeof(float)); //打印一个整数 - %d
//	printf("%d\n",sizeof(double)); //打印一个整数 - %d
//	
//	//C语言标准
//	//sizeof(long) >= sizeof(int) 就行
//	//那么多类型是为了 提高空间利用率 有时候不需要那么大的空间去储存变量
//	return 0;
//
//}

//生活中的可变和不可变的数据，在C语言中 变量或常量进行描述

//int main()
//{
//	//创建一个变量  
//	/*
//	类型 变量名 = 数据    
//	类型 变量名 语法允许但不推荐
//	*/
//	int age = 20;
//	double weight = 75.3;
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d岁了\n", age);
//	printf("我的体重是%lf\n", weight);
//
//
//	return 0;
//}
//%d - 整型
//%f - float
//%lf - double

//在大括号外定义的变量 全局变量
//int a = 100;
//int main()
//{
//	//在大括号内部定义的变量 被称为局部变量
//	//当局部变量和全局变量名字冲突的情况下，局部优先
//	//不建议把全局变量和局部变量的名字写成一样的
//	int a = 10;
//	printf("%d\n", a);//这里显示的是局部变量
//
//
//	return 0;
//}

//写一个代码 求两个整数的和
//scanf 是输入函数
//int main()\
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//
//	scanf("%d %d", &a, &b);
//	
//	//%d %d 中间有空格 输入的时候中间也要有空格
//	//占位符%d  &a 取地址a  将第一个占位符接收的结果给变量a
//	//scanf("占位符",变量的地址)
//	//用scanf会因为安全性 报错 去左下角 输出界面复制 _CRT_SECURE_NO_WARNINGS  
//	//写成   #define _CRT_SECURE_NO_WARNINGS 1 放代码在第一行
//	
//	//系统会建议用 scanf_s函数 
//	//这是VS提供的，不是C语言标准规定的 如果用这个函数 只能在VS环境下运行 其他环境不能用
//	//当决定你要用某个函数，并加入代码中，请仔细研究这个函数，避免写出bug
//
//	//如何避免每次新建项目都要加一句#define _CRT_SECURE_NO_WARNINGS 1呢？
//	//打开VS的储存位置 - VC - Vcprojectitems - 打开newc++file.cpp 把这句话保存进去
//	//这样每次新建文件 都会自动加进去这句话
//	sum = a + b;
//	printf("sum=%d\n", sum);
//	return 0;
//}


