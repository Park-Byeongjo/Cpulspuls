#include "Person.h"

void Person::toking()
{
	std::cout << "���� ���� �� ����" << std::endl;
	std::cout << "���� �� �� ����" << std::endl;
}

void Person::inform()
{
	std::cout << "��ȭ��ȣ : " << tell << std::endl;
}

void Student::toking()
{
	Person::toking();
	std::cout << "���� ������ �� �� ����" << std::endl;
}

void Student::inform()
{
	std::cout << "���� �̸�(����) : " << name << " (" << age << ")" << std::endl;
	std::cout << "���� ���� : " << job << std::endl;
	Person::inform();

}

void Doctor::toking()
{
	Person::toking();
	std::cout << "�پ��� ������ �� �� ����" << std::endl;
}

void Doctor::inform()
{
	std::cout << "���� �̸�(����) : " << name << " (" << age << ")" << std::endl;
	std::cout << "���� ���� : " << job << std::endl;
	Person::inform();
}

void Worker::toking()
{
	Person::toking();
	std::cout << "�������� ����� �� ����" << std::endl;
}

void Worker::inform()
{
	std::cout << "���� �̸�(����) : " << name << " (" << age << ")" << std::endl;
	std::cout << "���� ���� : " << job << std::endl;
	Person::inform();
}
