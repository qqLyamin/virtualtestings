#include <cstdlib>
#include <iostream>

class A {

public:

	A()
	{
		std::cout << "конструктор ј (родител€)" << std::endl;
	}

	virtual ~A()
	{
		std::cout << "DESTRUCTOR ј (родител€)" << std::endl;
	}
};


class B : public A {

public:

	B()
	{
		std::cout << "конструктор B (наследника)" << std::endl;
	}

	/*virtual*/ ~B()
	{
		std::cout << "DESTRUCTOR B (наследника)" << std::endl;
	}
};

void f()
{
	B b;
}

void g2()
{
	A * asd = new B;
	delete asd;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	std::cout << "работа на стеке" << std::endl;
	f();

	std::cout << "работа с кучей" << std::endl;
	g2();
	
	return EXIT_SUCCESS;
}