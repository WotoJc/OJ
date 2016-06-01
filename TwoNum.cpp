#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int,int> myMap;
	vector<int> result;
	int length = nums.size();
	for(int i = 0 ; i < length ; i++){
		int num = target - nums[i];
		if(myMap.find(num) != myMap.end()){
			result.push_back(myMap[num]);
			result.push_back(i);
			return result;
		}
		myMap[nums[i]] = i;
	}
	return result;
}

int main(int argc, char *argv[]) {
	
}