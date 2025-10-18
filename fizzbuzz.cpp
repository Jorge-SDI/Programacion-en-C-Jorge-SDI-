#include <iostream>
using namespace std;

int main() {
	//fizz buzz
	int n = 100;
	for(int i = 0; i <= n; i++){
		
		if(i % 3 == 0 && i % 5 == 0){
			cout << "Fizz Buzz" << endl;
			}
		
		else if(i % 3 == 0){
			cout << "Fizz" << endl;
		}
		
		else if(i % 5 == 0){
			cout << "Buzz" << endl;
		}
		
		else{
			cout << i << endl;
		}

	}
	return 0;
}

