#include <stdio.h>
#include "base_structure.h"//"./include/base_structure.h"

int main(int argc, char **argv)
{
	
	
	//Stack s(10);
	Stack s;
	float output;
	//測試資料
	s.push(111);
	s.push(112) ;
	s.push(113) ;
	s.push(114) ;
	s.push(115) ;
	s.push(116) ;
	s.push(117) ;
	s.push(118) ;
	s.push(119) ;
	s.push(120) ;//初始宣告若不指定stack格數 只讓它有10格空間
	s.push(121) ;//因此 121 
	s.push(122) ;//    122無法再進入stack
	s.pop(output);//取得堆疊中最上層的數值
	std::cout <<output<< std::endl;
	std::cout <<"top:"<<s.top<< std::endl<< std::endl;
	
	for(int i=s.length-1; i>=0;i--){
		
		std::cout <<s.container[i]<< std::endl;
		}

	return 0;
}
