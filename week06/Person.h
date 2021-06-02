#pragma once
#include <string>
#include <iostream>
class Person
{
private:
	std::string tell;
protected:
	std::string name;
	int age;
public:
	Person(std::string _name, int _age, std::string _tell) : name(_name), age(_age), tell(_tell) {}
	void toking();
	void inform();
	~Person()
	{

	}
};

class Student : public Person {
private:
	std::string job = "학생";
public:
	Student(std::string _name, int _age, std::string _tell) : Person(_name, _age, _tell) {}
	void toking();
	void inform();
	~Student() 
	{
	
	}
};

class Doctor : public Person { 
private:
	std::string job = "박사";
public:
	Doctor(std::string _name, int _age, std::string _tell) : Person(_name, _age, _tell) {}
	void toking();
	void inform();
	~Doctor()
	{

	}
};

class Worker : public Person {
private:
	std::string job = "직장인";
public:
	Worker(std::string _name, int _age, std::string _tell) : Person(_name, _age, _tell) {}
	void toking();
	void inform();
	~Worker()
	{

	}
};

