#include "Person.h"

void Person::toking()
{
	std::cout << "밥을 먹을 수 있음" << std::endl;
	std::cout << "말을 할 수 있음" << std::endl;
}

void Person::inform()
{
	std::cout << "전화번호 : " << tell << std::endl;
}

void Student::toking()
{
	Person::toking();
	std::cout << "수업 조교를 할 수 있음" << std::endl;
}

void Student::inform()
{
	std::cout << "나의 이름(나이) : " << name << " (" << age << ")" << std::endl;
	std::cout << "나의 직업 : " << job << std::endl;
	Person::inform();

}

void Doctor::toking()
{
	Person::toking();
	std::cout << "다양한 연구를 할 수 있음" << std::endl;
}

void Doctor::inform()
{
	std::cout << "나의 이름(나이) : " << name << " (" << age << ")" << std::endl;
	std::cout << "나의 직업 : " << job << std::endl;
	Person::inform();
}

void Worker::toking()
{
	Person::toking();
	std::cout << "직장으로 출근할 수 있음" << std::endl;
}

void Worker::inform()
{
	std::cout << "나의 이름(나이) : " << name << " (" << age << ")" << std::endl;
	std::cout << "나의 직업 : " << job << std::endl;
	Person::inform();
}
