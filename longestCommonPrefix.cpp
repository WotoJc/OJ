/*
Write a function to find the longest common prefix string amongst an array of strings.
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
	if(strs.size() == 0)
		return "";
	// record the common chars
	string common = strs[0];
	for(int i = 1 ; i < strs.size() ; i++){
		for(int j = common.length()-1 ; j > -1 ; j--)
		{	
			if(common[j] != strs[i][j])
			{
				common = common.erase(j,common.length()-j);
			} 
		}
	}
	
	return common;
}

int main(int argc, char *argv[]) {
	vector<string> strs;
	strs.push_back("aca");
	strs.push_back("cba");
	//strs.push_back("abc");
	//strs.push_back("abdf");
	string res = longestCommonPrefix(strs);
	cout << "res :" <<res<<endl; 

}