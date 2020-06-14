#include<iostream>
#include<Windows.h>

int main(void){
	std::cout<<"你好!Guodo";
	std::cout<<std::endl;
	std::cout<<"你好!Guodo."<<std::endl;
	std::cout<<std::endl;
	//等效于:
	std::cout<<"你好!";
	std::cout<<"Guodo!";
	std::cout<<std::endl;
	std::cout<<"------华丽分割线------"<<std::endl;
	std::cout<<"工资:"<<30000;  
	std::cout<<std::endl;

	std::cout<<"工资:30000";
	std::cout<<std::endl;

	std::cout<<3.1415;
	std::cout<<std::endl;

	system("pause");
	return 0;
}