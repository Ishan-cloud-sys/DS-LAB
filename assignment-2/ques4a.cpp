#include <iostream>
using namespace std;

int main() {
    
    string str1,str2;
    cout<<"Enter first and second strings to be concatenated: "<<endl;
    getline(cin,str1);
    getline(cin,str2);
    
	char res[100];
	int i=0,j=0;
	
	while(str1[i]!='\0'){
		res[i]=str1[i];
		i++;
	}
	
	while(str2[j]!='\0'){
		res[i]=str2[j];
		i++,j++;
	}
		
	res[i]='\0';
	
	cout<<"Concatenated result is: "<<res;

    return 0;
}
