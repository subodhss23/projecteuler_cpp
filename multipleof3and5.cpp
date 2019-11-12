/* find the sum of all the multiples of 3 an 5 below 1000. */

#include<iostream>
#include <vector>

using namespace std;

int main(void){
	
	vector<int> container;
	int num;
	

	cout << "Enter number of you choice from between 0 to 1000:-" << endl;
	cin >> num;
	 int newnum = 0;

	for(int i = 1; i < num; --num){
		//cout << num << endl;
		if(num % 3 == 0 || num % 5 == 0){
		//	cout << num << endl;
			
			newnum = newnum + num;
		}
	}
	cout << newnum <<endl;
	return 0;
}
