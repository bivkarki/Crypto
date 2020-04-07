#include<bits/stdc++.h> 
using namespace std; 
string encodedString(string key) { 
	string encoded = ""; 
	bool arr[26] = {0}; 
	for (int i=0; i<key.size(); i++) { 
		if(key[i] >= 'A' && key[i] <= 'Z') { 
			if (arr[key[i]-65] == 0){ 
				encoded += key[i]; 
				arr[key[i]-65] = 1; 
			} 
		} 
		else if (key[i] >= 'a' && key[i] <= 'z') { 
			if (arr[key[i]-97] == 0) { 
				encoded += key[i] - 32; 
				arr[key[i]-97] = 1; 
			} 
		} 
	} 
	for (int i=0; i<26; i++) { 
		if(arr[i] == 0) { 
			arr[i]=1; 
			encoded += char(i + 65); 
		} 
	} 
	return encoded; 
} 

string monoAlphabetic(string msg, string encoded) 
{ 
	string cipher=""; 
	for (int i=0; i<msg.size(); i++) { 
		if (msg[i] >='a' && msg[i] <='z') { 
			int pos = msg[i] - 97; 
			cipher += encoded[pos]; 
		} 
		else if (msg[i] >='A' && msg[i] <='Z') { 
			int pos = msg[i] - 65; 
			cipher += encoded[pos]; 
		} 
		else { 
			cipher += msg[i]; 
		} 
	} 
	return cipher; 
} 

int main() { 
	string key; 
	cout<<"Enter Keyword: "; cin>>key; 
	string encoded = encodedString(key); 
	string message = "";
    cout<<"Enter Message: "; cin>>message; 
    cout<<"Keyword: "<<key<<" && Plain Text: "<<message<<endl;
	cout << "Message before applying MonoAlphabetic Ciphering Algo : " << message << endl; 
	cout << "Message after applying MonoAlphabetic Ciphering Algo : " << monoAlphabetic(message,encoded) << endl; 
	return 0; 
} 
