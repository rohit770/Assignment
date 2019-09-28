#include<iostream>
#include<string>
using namespace std;
int main()
{
	int key;
	string name;
	string encryptText="";
	string alph = "abcdefghijklmnopqrstuvwxyz";
	cout<<"Enter the string to be encrypted:";
	cin>>name;
	
	cout<<"\nEnter the Key:";
	cin>>key; 
	
	// Looping through the given string...say hello
	for(int j=0;j<name.length();j++){
	
	//find the position number letters from the aplhabets sequence
	int curPos = alph.find(name[j]);
	
	int nextPos = curPos + key;
	if(nextPos >25){
		nextPos = nextPos-26;
	}
	encryptText += alph[nextPos];
	}
	
	cout << "\nGIVEN STRING : "<< name;
	cout << "\nENCRYPTED STRING IS: "<< encryptText;
}
