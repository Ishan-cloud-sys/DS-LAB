#include <iostream>
using namespace std;

int main() {
    
    string str;
	cout<<"Enter the string whose vowels need to be removed"<<endl;
	getline(cin,str);
	int size=str.length();
	
	for(int i=0;i<size;i++){
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
			for(int j=i;j<size-1;j++){
				str[j]=str[j+1];
			}
			size--;
		}
	}
	
	cout<<"The string after removing the vowels is: "<<endl;
	for(int i=0;i<size;i++){
		cout<<str[i];
	}

    return 0;
}
