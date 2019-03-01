#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
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
	float A[20] = {};
	int i = 0;
	ifstream source("score2.txt");
	string line;
	while(getline(source,line)){
		A[i] = atof(line.c_str());
		i++;
	}
	ofstream dest("rank.txt");
	for(int i = 0; i < 20;i++){
		dest << A[i] << " = ";
		sort(A,20);
		dest << A[i] << "\n";
	}
	dest.close();
	return 0;
}
