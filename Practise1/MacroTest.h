//#define 无参数
#define MICHAEL_MACRO_1() printf("宏定义测试\n"); 

//#define 带string类型参数
#define MICHAEL_MACRO_2(name) printf("宏定义测试， name = %s\n", name); 

//#define 带int类型参数
#define MICHAEL_MACRO_3(age) printf("宏定义测试， age = %d\n", age); 

//#define 带char类型参数
#define MICHAEL_MACRO_4(sex) printf("宏定义测试， sex = %c\n", sex); 

//#define 带多个参数
#define MICHAEL_MACRO_5(...) __VA_ARGS__

//#define #
#define MICHAEL_MACRO_6(a) #a
#define STRING(x) MICHAEL_MACRO_6(x)

//#define ##
#define MICHAEL_MACRO_7(a) testnum##a

