#include <iostream>
#include <cmath>

using namespace std;

float av(float,float);


int main(){
    cout << av(-2.5,1.1) << "\n";
    cout << av(1,10000) << "\n";
    cout << av(8.5,2.4) << "\n";
    cout << av(0.1,0.0001) << "\n";
    cout << av(10,0.007) << "\n";
    cout << av(1,-2) << "\n";
    cout << av(15,100) << "\n";
    cout << av(123,5432) << "\n";
}

float av(float a,float b){
	float max,min;
	if(a > b){
		max = a;
		min = b;
	}else{
		max = b;
		min = a;
	}
	float c = max/min;
	if(a <= 0 || b <= 0){
		return 0;
	}else if(c <= 100){
		return sqrt(a*b);
	}else{
		float d = (a+b)/2;
		return av(a,d)+av(b,d);
	}
}