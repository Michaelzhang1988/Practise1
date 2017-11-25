#include <iostream>
#include "MacroTest.h"

using namespace std;
using  std::string;
void testMacroDefine();

int main()
{
	
	cout<<"hello world!\n";


	testMacroDefine();




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
