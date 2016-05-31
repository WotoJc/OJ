#include <iostream>
#include <string>
using namespace std;

int myAtoi(string str) {
	long res = 0;			// 结果
	int count_not = 0;		// 记录符号数量
	int sign = 1;			// 正负记录
	int cur = 0 ;			// 当前char的位置
	
	while(str[cur] == ' ') 
		cur++;	
	while(str[cur] == '+' || str[cur] == '-'){
		sign *= (str[cur] == '+') ?1:-1; 
		cur++;
		count_not++;
		if(count_not > 1)
			return 0;
	}	
	while(str[cur] >= '0' && str[cur] <= '9')
	{	
		res = res*10 + (str[cur] - '0');
		if(res*sign > INT_MAX) return INT_MAX;
		if(res*sign < INT_MIN)  return INT_MIN;
		cur++;
	}

	return res*sign;
}



int main(int argc, char *argv[]) {
	//cout<<myAtoi("+-2")<<endl;
	cout<<myAtoi("1");
	cout <<endl<<endl;
	cout<<myAtoi("9223372036854775809");
	
	//cout <<endl<< LONG_MAX <<endl;
	//cout <<"9223372036854775809"<<endl;
	return 0;
}