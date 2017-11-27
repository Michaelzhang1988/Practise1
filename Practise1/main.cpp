#include <iostream>
#include "MacroTest.h"
#include "TemplateFun.h"
using namespace std;
using  std::string;
void testMacroDefine();
void testTemplate();

int main()
{
	
	cout<<"hello world!\n";

	
	//testMacroDefine();
	testTemplate();
	system("pause");
	return 0;

}

void testMacroDefine()
{

	MICHAEL_MACRO_1()

		string name = "Michael";

	MICHAEL_MACRO_2(name.c_str())

		int age = 99;
	MICHAEL_MACRO_3(age)

		char sex = 'b';
	MICHAEL_MACRO_4(sex)

		string test1 =  MICHAEL_MACRO_5(name);

	MICHAEL_MACRO_2(test1.c_str())


		char * pch = MICHAEL_MACRO_6(matuan);
	printf("宏定义测试， # = %s\n", pch); 

	char * pch_file = STRING(__FILE__);
	printf("宏定义测试， # = %s\n", pch_file); 

	int testnum1 = 9999;
	printf("宏定义测试， ## = %d\n", MICHAEL_MACRO_7(1)); 


#if 1
	printf("宏定义测试    #if \n"); 

#else
	printf("宏定义测试    #else \n"); 
#error
#endif

#ifdef MICHAEL_MACRO_7
	printf("宏定义测试    #ifdef \n"); 
#endif

#ifndef MICHAEL_MACRO_10000
	printf("宏定义测试    #ifndef \n"); 
#endif


#undef MICHAEL_MACRO_7

#ifndef MICHAEL_MACRO_7
	printf("宏定义测试    MICHAEL_MACRO_7已经被移除 \n"); 
#endif

	 

}

void testTemplate(){
	double a =1.1;
	double b = 2.2;
	int aa = 1;
	int bb = 2;
	int aaa = 1;
	double bbb = 2.6;
	cout<<"max(a, b): "<<::max(a, b)<<endl;
	cout<<"max(aa, bb): "<<::max(aa, bb)<<endl;
	cout<<"max(aa, bb): "<<::max<double>(aaa, bbb)<<endl;
	
	cout<<"max(aa, bb): "<<::max1<int, double, double>(aaa, bbb)<<endl;
	cout<<"max(aa, bb): "<<::max2<double>(aaa, bbb)<<endl;

	cout<<::max3(7, 12, 67)<<endl;       //调用具有3个函数的模板
	cout<<::max3(7.9, 34.5)<<endl;       //调用max<double>（通过实参演绎）
	cout<<::max3('a', 'y')<<endl;        //调用max<char>（通过实参演绎）
	cout<<::max3(7, 42)<<endl;           //调用int重载的非模板函数
	cout<<::max3<>(7, 23)<<endl;         //调用max<int>（通过实参演绎）
	cout<<::max3<double>(4, 45)<<endl;   //调用max<double>（没有实参演绎）
	cout<<::max3('a', 23.4)<<endl;       //调用int重载的非模板函数
}