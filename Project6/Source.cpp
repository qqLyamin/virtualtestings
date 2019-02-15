#include <cstdlib>
#include <iostream>

class A {

public:

	A()
	{
		std::cout << "����������� � (��������)" << std::endl;
	}

	virtual ~A()
	{
		std::cout << "DESTRUCTOR � (��������)" << std::endl;
	}
};


class B : public A {

public:

	B()
	{
		std::cout << "����������� B (����������)" << std::endl;
	}

	/*virtual*/ ~B()
	{
		std::cout << "DESTRUCTOR B (����������)" << std::endl;
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

	std::cout << "������ �� �����" << std::endl;
	f();

	std::cout << "������ � �����" << std::endl;
	g2();
	
	return EXIT_SUCCESS;
}