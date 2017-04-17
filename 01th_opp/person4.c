#include <stdio.h>
struct person{
	char *name;
	int age;
	char *work;
	void (*printInfo)(struct person *per);
};
void printInfo(struct person *per)
{
	printf("name = %s,age = %d,work = %s\n",per->name,per->age,per->work);
}
int main(int argc,char **argv)
{

	struct person  persons[] = {
		{"zhangsan",10,"teacher",printInfo},
		{"lisi",19,"doctor",printInfo},
	};
	int i;
	for(i = 0; i < 2; i++)
		{
			persons[i].printInfo(&persons[i]);
		}
	return 0;
}
