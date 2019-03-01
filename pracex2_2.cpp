#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	int i=0;
	float A[]= {};
	ifstream source("score1.txt");
	string line;
	while(getline(source,line)){
	A[i] = atof(line.c_str());
	i++;
	}
	int N = sizeof(A)/sizeof(A[0]);
	sort(A,N);
	return 0;
}

