#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
//罗马数字表示
// I(1)，V(5)，X(10)，L(50)，C(100)，D(500)，M(1000)
//规则：右加左减，加线乘千，单位限制3次

int romanToInt(string s) {
	
	unordered_map<char,int> RomanMap;
	RomanMap['I'] = 1;
	RomanMap['V'] = 5;
	RomanMap['X'] = 10;
	RomanMap['L'] = 50;
	RomanMap['C'] = 100;
	RomanMap['D'] = 500;
	RomanMap['M'] = 1000;	

	
	int res = 0;
	int cur = 0;
	
	do{
		char c = s[cur];
		res += RomanMap[c];
		if(cur >= 1){
			char pre_c = s[cur-1];
			//如果前一个符号 小于 后面的
			if(RomanMap[c] > RomanMap[pre_c])
				res -= 2*RomanMap[pre_c];
		}
		cur++;
	}while(cur < s.length());
	
	return res; 
}

int main(int argc, char *argv[]) {
	// I(1)，V(5)，X(10)，L(50)，C(100)，D(500)，M(1000)

	//string test = "DCXXI";  //500+100+10+10+1 = 621
	string test ="CMLII";  //-100+1000+50+1+1 = 952
	
	int res = romanToInt(test);
	cout << "res : "<< res <<endl;

}