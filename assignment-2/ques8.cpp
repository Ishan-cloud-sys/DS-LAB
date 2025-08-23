#include <iostream>
using namespace std;

int main() {
    int size;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	
	int arr[size];
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}

	int counter[255]={};
	
	for(int i=0;i<size;i++){
		int help=arr[i];
		counter[help]++;
	}
	
	int count =0;
	
	for(int i=0;i<255;i++){
		if(counter[i]>0){
			count++;
		}
	}
	
	cout<<endl<<"Number of unique elements are: "<<count;
	
	return 0;
}
