

#include <iostream>
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
// max int 4294967296
//   	   410065408
int main(int argc, char *argv[]) {
	int ans = reverse(1563847);
	cout<<"ans:"<<ans<<endl;
	//cout<<reverse(-321)<<endl;
	return 0;
}
