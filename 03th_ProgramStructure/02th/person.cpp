#include "person.h"
void person::setName(char *name)
{
	this->name = name;
}

int person::setAge(int age)
{
	if(age <= 0 || age > 150)
	{
		return -1;
	}
	this->age = age;
	return 0;
}
void person::printInfo(void)
{
	printf("name = %s,age = %d,work = %s\n",name,age,work);
}


