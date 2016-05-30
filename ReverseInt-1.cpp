

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int reverse(int x) {
	int abs_x = abs(x);
	vector<int> v;
	int i = 0;
	long res = 0;
	for(; abs_x > 0;i++)
	{
		v.push_back(abs_x%10);
		abs_x /=10;
	}
	for(int j = 0 ; j < i;j++){
		res += v[j]*(long)pow(10, i-j-1);
	}
	cout << res <<endl;
	
	if(x < 0){
		res *= -1;
	}
	if (res > INT_MAX || res < INT_MIN)
		return 0;
	return res;
}
// max int 4294967296
//   	   410065408
int main(int argc, char *argv[]) {
	int ans = reverse(1563847412);
	cout<<"ans:"<<ans<<endl;
	//cout<<reverse(-321)<<endl;
	return 0;
}
