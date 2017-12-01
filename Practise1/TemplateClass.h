#ifndef STACKTP_H_
#define STACKTP_H_
using namespace std;

//template<typename T> class Stack;

template <class Type>
class Stack
{

//private:
//	enum {MAX = 10};
//	Type items[MAX];
//	int top;
public:
	/*Stack();
	bool isempty();
	bool isfull();
	bool push(const Type & item);
	bool pop(Type & item);*/
	Type getsum(Type a, Type b)
	{
		return a + b;
	}
};

//template <class Type> void Stact<Type>::funA(){
//}
//template <typename T> 
//Stack<T>::Stack()
//{
//	top = 0;
//}
//
//
//template<class Type>
//bool Stack<Type>::isempty()
//{
//	return top == 0; 
//}
//
//template<class Type>
//bool Stack<Type>::isfull()
//{
//	return top == MAX;
//}
//
//template<class Type>
//bool Stack<Type>::push(const Type & item)
//{
//	if (top < MAX)
//	{
//		item[top++] = item;
//		return true;
//	}
//	return false;
//}
//
//template<class Type>
//bool Stack<Type>:: pop(Type & item)
//{
//	if (top > 0)
//	{
//		item = items[--top];
//		return true;
//	}
//	else
//		return false;
//}

//template<class Type>
//Type getsum(Type a, Type b)
//{
//	return a + b;
//}




//template <class numtype> //声明一个模板，虚拟类型名为numtype
//class Compare //类模板名为Compare
//{
//public :
//	Compare(numtype a,numtype b)
//	{
//		x=a;y=b;
//	}
//	numtype max( )
//	{
//		return (x>y)?x:y;
//	}
//	numtype min( )
//	{
//		return (x<y)?x:y;
//	}
//private :
//	numtype x,y;
//};
//


#endif