//#define �޲���
#define MICHAEL_MACRO_1() printf("�궨�����\n"); 

//#define ��string���Ͳ���
#define MICHAEL_MACRO_2(name) printf("�궨����ԣ� name = %s\n", name); 

//#define ��int���Ͳ���
#define MICHAEL_MACRO_3(age) printf("�궨����ԣ� age = %d\n", age); 

//#define ��char���Ͳ���
#define MICHAEL_MACRO_4(sex) printf("�궨����ԣ� sex = %c\n", sex); 

//#define ���������
#define MICHAEL_MACRO_5(...) __VA_ARGS__

//#define #
#define MICHAEL_MACRO_6(a) #a
#define STRING(x) MICHAEL_MACRO_6(x)

//#define ##
#define MICHAEL_MACRO_7(a) testnum##a

