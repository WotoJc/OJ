#include <iostream>
#include "string"
using namespace std;

string convert(string s, int numRows) 
{
	if(numRows <= 1)
		return s;
	
	int len = s.size();
	string res = "";
	int group = numRows*2 - 2;
	for(int i = 0 ; i < numRows ; i++)
	{
		int cur_len = i;
		if(i==0 || i==numRows-1)
		{
			while(cur_len < len)
			{
				res += s[cur_len];
				cur_len += group;
			}
		} 
		else 
		{
			int t = i*2;
			int f = group - 2*i;
			bool r = true;
			while(cur_len < len)
			{
				res += s[cur_len];
				if(r)
				{
					cur_len += f;
					r = false;
				} else 
				{
					cur_len += t;
					r = true;
				}
			}
		}
	}
	

	return res;
}
/*
1       1       1       1
 2     8 2     8 2     8 2
  3   7   3   7   3   7
   4 6     4 6     4 6 
    5       5       5        
*/


int main(int argc, char *argv[]) {
	string a = "PAYPALISHIRING";
	string c = "PAHNAPLSIIGYIR";
	cout<<convert(a, 4)<<endl<<c<<endl;
	
}