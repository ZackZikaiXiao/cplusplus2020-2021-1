#include<iostream>
using namespace std;

class Cylinder {
	double m_radius, m_height;
public:
	double volume() {//定义了一个与半径和高关联的操作，即求体积并返回体积値
		return 3.14*m_radius*m_radius*m_height;
	}
	Cylinder(double i = 0, double h = 0) :m_radius(i), m_height(h) {}

};


int main() {

	{//2.3.1节
		int counter, age; // 定义两个整型类型对象counter和age
		Cylinder object; // 定义一个Cylinder类（见例1.3，第6页）类型对象object
	}

	{//2.3.1节
		int age = 18;
	}
	{//2.3.1节
		int year = 2017, birthYear = year;//year先于birthYear创建和初始化，可用于初始化birthYear
	}

	{//2.3.1节
		int year = 0; //定义对象并初始化，在此之前， year在内存中不存在
		year = 2017; //赋值操作，在对year赋值之前，其在内存中已经存在
	}

	{//2.3.1节
		int year(2017); //直接初始化
	}

	{//2.3.1节
		int year{ 2017 }; //列表初始化，C++11

	}

	{//2.3.1节
		int year = { 2017 }; //列表初始化，C++11

	}

	{//2.3.1节
		int year{}; //可以不提供初始值，默认为0，C++11
	}

	{//2.3.2节
		extern int i; //在另外一个文件里面声明对象i，而非定义i，i已经定义过了
		int j; //可以理解为声明并定义j
	}

	//2.3.2节
	//extern int i = 0; //定义i
	//int i = 5; //错误：对象i已经定义过


	//例2.1
	{
		int sum = 0; //用于存放两个数的和
		{
			int val1 = 10, val2 = 10;
			sum = val1 + val2;
		}
		cout << sum << endl;
	}

	//例2.2
	{
		int sum = 10;
		{
			int sum = 0;
			cout << sum << endl;		//访问内层 sum，打印输出 0
		}
		cout << sum << endl;				//访问局部对象sum，输出0
	}

}