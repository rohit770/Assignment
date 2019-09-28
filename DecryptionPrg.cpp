#include<iostream>
#include<string>
using namespace std;
int main()
{
	int key;
	string name;
	string encryptText="";
	string alph = "abcdefghijklmnopqrstuvwxyz";
	cout<<"Enter the string to be decrypted:";
	cin>>name;
	
	cout<<"\nEnter the Key:";
	cin>>key; 

// Looping through the given string...say hello
	for(int j=0;j<name.length();j++){
	
	//find the position number of letters from the aplhabets sequence
	int curPos = alph.find(name[j]); 
	int nextPos = curPos - key;
	if(nextPos <0){
		nextPos = nextPos+26;
	}
	encryptText += alph[nextPos];
	}
	
	cout << "\nENCRYPTED STRING : "<< name;
	cout << "\n DECRYPTED STRING IS: "<< encryptText;
}
