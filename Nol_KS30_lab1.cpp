// variant 3
//#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int  N;
	int sum_main, sum_doub;
	int** a;
	cout << "Размер массива N=";
	cin >> N ;
	cout << "N = "<< N<<"\n";

	a=new int* [N];
	for (int i=0; i<N; i++)
		a[i]=new int [N];

	cout<<"Стартовая матрица: "<<endl;
	srand (time(NULL));
	for (int i=0; i<N; i++){
		for (int j=0; j<N; j++){
			a[i][j]=rand()%11;
			cout<<a[i][j]<<" ";
			}
		cout<<endl;
	}
	
	sum_main=0;
	sum_doub=0;
	for (int i=0; i<N; i++){
		for (int j=0; j<N; j++){
			if (i==j) sum_main+=a[i][j];
			if (j+i==N-1) sum_doub+=a[i][j];
		}
	}
	cout <<"Сумма элементов главной диагонали = "<< sum_main <<endl;
	cout <<"Сумма элементов побочной диагонали =  "<< sum_doub <<endl;
	
	cout<<"Полученная матрица: "<<endl;
	if (sum_main>sum_doub)
		for (int i=0; i<N; i++){
			for (int j=0; j<N; j++){
				a[i][j]*=2;
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	else 
		for (int i=0; i<N; i++){
			for (int j=0; j<N; j++){
				a[i][j]%=6;
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	

	return 0; 
}
