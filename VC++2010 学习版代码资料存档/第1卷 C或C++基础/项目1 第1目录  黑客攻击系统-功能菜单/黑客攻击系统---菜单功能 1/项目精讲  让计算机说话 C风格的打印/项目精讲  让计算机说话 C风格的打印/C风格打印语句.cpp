#include<iostream>
#include<Windows.h>


int main(void){
	printf("门派: %s 姓名: %s 战斗力: %d\n",
		"丐帮","洪七公",100000);
	std::cout<<"门派: "<<"丐帮 "<<"姓名: "<<"洪七公 "
		<<"战斗力: "<<100000<<std::endl;
	std::cout<<"门派: 丐帮 姓名: 洪七公 战斗力: 100000\n";
	
	system("pause");
	return 0;
} 