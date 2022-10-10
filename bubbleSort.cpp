#include<iostream>
using namespace std;
void bubbleSort(int a[],int n){
	for(int i = 0; i<n-1; i++){
		for(int j = 0; j<n-i-1; j++){
			if (a[j] > a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
int main(){
	int a[] = {9,1,6,7,3,5,2,4};
	int n = sizeof(a)/sizeof(int);
	cout<<"before bubble sort :";
	for(int i = 0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	bubbleSort(a,n);
	cout<<"after bubble sort :";
		for(int i = 0;i < n; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
