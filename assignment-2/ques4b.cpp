#include <iostream>
using namespace std;

int main() {
    
    string str;
	cout<<"Enter the string to be reversed"<<endl;
	getline(cin,str);
	
	int i=0,j=str.length()-1;
	while(j>i){
		int temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		
		i++,j--;
	}
	cout<<"The reversed string is: "<<endl;
	cout<<str;

    return 0;
}
