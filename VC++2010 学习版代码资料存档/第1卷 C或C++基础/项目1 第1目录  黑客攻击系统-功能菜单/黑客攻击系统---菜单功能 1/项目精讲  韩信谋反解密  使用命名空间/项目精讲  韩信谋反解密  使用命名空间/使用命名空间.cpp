#include<iostream>
#include<string>

//China-�й�
namespace China{
	//�˿�����,pupolation
	float population = 14.1;//��λ:��
	//�׶� capital
	std::string capital ="����";
}

//Japan-�ձ�
namespace Japan{
	float population = 1.27;//��λ:��
	std::string capital ="����";
}

using namespace Japan;

int main(void){
	std::cout<<"�׶�:"<<capital<<std::endl;
	std::cout<<"�˿�:"<<population<<std::endl;

	std::cout<<"�׶�:"<<China::capital<<std::endl;
	std::cout<<"�˿�:"<<China::population<<std::endl;

	system("pause");
	return 0;
}