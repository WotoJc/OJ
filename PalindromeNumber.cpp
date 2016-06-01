#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int reverse(int x) {
	int res = 0;
	int temp = 0;
	while(x){
		temp = res*10 + x%10;
		if(temp/10 != res)
			return 0;
		res = temp;
		x/=10;
	}
	return res;	
}

bool isPalindrome(int x){
	// 负数不是回文
	if(x < 0) return false;
	return reverse(x) == x;
}

int main(int argc, char *argv[]) {
	 bool a = isPalindrome(-2147447412);
	 cout  << "res =  "<< a <<endl;
}