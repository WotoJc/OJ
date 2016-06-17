#include <iostream>
#include <stack>
using namespace std;

class MinStack {
		private:
			// 主栈
			stack<int> s1;
			// 最小值栈
			stack<int> s2;
		public:
			void push(int x) {
				
				s1.push(x);
				if (s2.empty() || x <= getMin())  s2.push(x);       
			}
			void pop() {
				if (s1.top() == getMin())  s2.pop();
				s1.pop();
			}
			int top() {
				return s1.top();
			}
			int getMin() {
				return s2.top();
			}
		};

	/**
	 * Your MinStack object will be instantiated and called as such:
	 * obj.push(x);
	 * obj.pop();
	 * int param_3 = obj.top();
	 * int param_4 = obj.getMin();
	 */
	
int main(int argc, char *argv[]) {
	MinStack *obj = new MinStack();	
	obj->push(1);
}