
#include<iostream>
using namespace std;


int main()
{
	{//2.5.1节
		int i = 0; //正确：用右值常量0 初始化左值对象i
				   //10 = i; //错误，赋值运算符左侧必须为左值
		int j = i; // 左值对象i 可以当成右值，只对其内容进行读操作
		const int N = 100; // N为右值对象
						   //N = 40; // 错误：不能改变右值对象N的值
	}

	{//2.5.2节
		21 / 6; //结果是3，余数被舍弃
		21 % -4; //结果为1
		-21 % 4; //结果为-1
	}

	{//2.5.2节
	 //32 / 0; // 除数为0
		short val = 32767; //short类型占2个字节，其表示的最大值为32767
		val += 1; //val本身加1，结果超出其表示范围，出现数据溢出
		std::cout << val << endl;
	}

	{//2.5.3节
		int i = 0, j = i; //初始化而非赋值
		i = 0; //赋值而非初始化
			   //i + j = 10; //错误：算术表达式为右值
	}

	{//2.5.3节
		int i = 0, j = 0;
		double d = 3.14159;
		i = d; //表达式的结果的类型是int，值是3
			   //i = { 3.14159 }; //错误：窄化转换
		i = 0, j = 0;
		i = j = 5; //i 和j 的值都是5 另外，赋值运算符的优先级是比较低的，所以我们
				   //i = 2 + j = 4; //错误：2 + j 为右值，不能作为第二个赋值符号的左侧对象
		i = 2 + (j = 4); //正确：把j = 4的值加上2赋给i ，i和j 的值分别为6和4
	}

	{//2.5.3节
		int counter = 0, i = 1, j = 1;
		counter += 1; //等效于counter = counter + 1;
		i *= j + 3; //等效于i =i * (j + 3);
	}

	{//2.5.4节
		int i = 0, j;
		j = i++;//后置，i的值自增变为1，表达式i++ 的值为i自增之前的值，即j 的值为0
		j = ++i;//前置，i的值自增变为2，表达式++i 的值为i 自增之后的值，即j 的值为2
	}

	{//2.5.5节
		int i = 1, j = 2;
		bool b = !i && ++j; // b的值是0，j的值是2
	}

	{//2.5.6节
		int i, j;
		i = (j = 3, j += 6, 5 + 6); // i的值为11, j的值为9
	}

	{//2.5.7节
		int a = 4, b = 5, c = 6, max;
		max = a > b ? (a > c ? a : c) : (b > c ? b : c);
	}

	{//2.5.8节
		cout << sizeof(int) << endl; //输出4
		int i = 0;
		cout << sizeof(++i) << endl;//输出4，i的值为0
	}

	{//2.5.9节
		short a = 3, b = 5;
		cout << "~b "<<~b << endl;
		cout << "b<< " << (b<<1) << endl;
		cout << "b>> " << (b >> 1) << endl;
		cout << "a&b " << (a&b) << endl;
		cout << "a|b " << (a|b) << endl;
		cout << "a^b " << (a^b) << endl;
	}

    return 0;
}

