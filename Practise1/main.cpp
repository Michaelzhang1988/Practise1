#include <iostream>
#include "MacroTest.h"
#include "TemplateFun.h"
#include "TemplateClass.h"
#include <string>
#include <vector>
#include <map>

using namespace std;
using  std::string;

void testMacroDefine();
void testTemplateFun();
void testTemplateClass();
void testString();
void testVector();
void testMap();

int main()
{
	
	cout<<"hello world!\n";

	
	//testMacroDefine();
	//testTemplateFun();
	//testTemplateClass();
	//testString();
	//testVector();
	testMap();

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

void testTemplateFun(){
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
	//cout<<::max3('a', 23.4)<<endl;       //调用int重载的非模板函数
}

void testTemplateClass(){
	//const int testa = 2;
	Stack<int> testInt;
	int a = testInt.getsum(1, 2);
	cout<<a<<endl; 


}

void testString()
{

	std::string s1("Michael");
	std::cout << s1 <<'\n'; 

	string s2(s1);
	cout<<s2<<endl; 

	string s3 = s2;
	cout<<s3<<endl; 

	string s4(10,'c');
	cout<<s4<<endl; 

	string s5 = "Michael";
	cout<<s5<<endl; 

	string s6 = s5.substr(1,4);
	cout<<s6<<endl; 

	s5.erase(5);
	cout<<s5<<endl; 

	s5.append(s5);
	cout<<s5<<endl; 

	s5.append(s1);
	cout<<s5<<endl; 

	string test1 = "michaelMichael";
	int i = test1.find("Mi");
	cout<<i<<endl; 

}

void testVector()
{
	//vector <int>a;
	//a.push_back(1);
	//cout<<a[0]<<endl; 


	vector <int *>b;
	int num1[2] = {20,0};
	int num2[2] = {21,1};
	int num3[2] = {22,2};
	b.push_back(num1);
	b.push_back(num2);
	b.push_back(num3);
	//b.pop_back() ;
	
	cout<<b.begin()[0][1]<<endl; 
	cout<<*b.begin()[0]<<endl; //20
	cout<<*b.begin()[1]<<endl; //21
	cout<<b.begin()[1][1]<<endl; //1
	cout<<b.max_size()<<endl; //
	cout<<b.size()<<endl; //
	cout<<b.capacity()<<endl; //
	cout<<b.empty()<<endl; //
	b.pop_back() ;
	b.erase(b.begin());
	cout<<b.begin()[0][0]<<endl; 
	cout<<b.size()<<endl; //


	//cout<<b[0][0]<<endl; 
	//cout<<b.at(1)[0]<<endl; 
	//cout<<*b.begin()[1]<<endl; 

	

}

void testMap()
{
	map<int, int> mymap;
	//map<int, string> idname = {
	//	{201,"Michael"},
	//	{202,"echo"},
	//	{203,"sky"}
	//	
	//};
	mymap.insert(std::pair<int,int>(1,100));
	mymap.insert(std::pair<int,int>(2,200));
	std::pair<std::map<int,int>::iterator,bool> ret;
	ret = mymap.insert(std::pair<int,int>(3,300));
	if (ret.second == false)
	{
		std::cout << "element 'b' already existed";
		std::cout << " with a value of " << ret.first->second << '\n';
	}

	std::map<int, int>::iterator it = mymap.begin();
	mymap.insert(it, std::pair<char, int>(4, 400));  
	mymap.insert(it, std::pair<char, int>(3, 500)); 

	cout<<mymap[3]<<endl;
	cout<<mymap.empty()<<endl;
	cout<<mymap.max_size()<<endl;
	cout<<mymap.count(3)<<endl;
	cout<<mymap.size()<<endl;
	mymap.erase(mymap.begin());
	cout<<mymap.size()<<endl;

	std:map <int, int>::iterator it1;
	it1 = mymap.find(2);
	if (it1!= mymap.end()){
		mymap.erase(it1);
		cout<<"已删除"<<endl;

	}
	else{
		cout<<"不存在"<<endl;

	}
	it1 = mymap.find(2);
	if (it1!= mymap.end()){
		cout<<"已删除"<<endl;

	}
	else{
		cout<<"不存在"<<endl;

	}




}
