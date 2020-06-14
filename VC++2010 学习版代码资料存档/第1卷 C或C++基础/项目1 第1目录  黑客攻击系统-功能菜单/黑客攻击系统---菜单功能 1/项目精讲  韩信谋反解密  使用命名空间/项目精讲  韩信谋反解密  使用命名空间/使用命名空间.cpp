#include<iostream>
#include<string>

//China-中国
namespace China{
	//人口总数,pupolation
	float population = 14.1;//单位:亿
	//首都 capital
	std::string capital ="北京";
}

//Japan-日本
namespace Japan{
	float population = 1.27;//单位:亿
	std::string capital ="东京";
}

using namespace Japan;

int main(void){
	std::cout<<"首都:"<<capital<<std::endl;
	std::cout<<"人口:"<<population<<std::endl;

	std::cout<<"首都:"<<China::capital<<std::endl;
	std::cout<<"人口:"<<China::population<<std::endl;

	system("pause");
	return 0;
}