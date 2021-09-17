/*
Nama        : Muhammad Galang Satria
NPM         : 140810190003
Kelas       : Kriptografi (A)
Program mencari Ciphertext dan plaintext dengan metode Shift Chiper
*/

#include<iostream>
#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;

string enkripsiText(string plainText, int key){
	string chiperText = "";

	for(int i=0;i<plainText.length();i++){
		if(isupper(plainText[i]))
			chiperText += char((int(plainText[i] + key - 65) % 26) + 65);

		else
			chiperText += char((int(plainText[i] + key - 97) % 26) + 97);

	}

	return chiperText;
}

string dekripsiText(string chiperText, int key) {
	string plainText = "";

	for(int i=0;i<chiperText.length();i++){
		if(isupper(chiperText[i]))
			plainText += char((int(chiperText[i] - key - 65) % 26) + 65);

		else
			plainText += char((int(chiperText[i] - key - 97) % 26) + 97);

	}

	return plainText;
}

main(){
    mulai:
	string plainText;
    string pilih;
    int key;

	cout<<"PROGRAM SHIFT CHIPER "<<endl;
	cout<<"Silahkan Masukkan text: ";
	cin>>plainText;
	cout<<"Silahkan Masukkan kunci: ";
	cin>>key;

	string chiperText= enkripsiText(plainText, key);
	cout<<"Hasil Enkripsi: "<<chiperText<<endl;
	
	cout<<"Hasil Deskripsi: "<<dekripsiText(chiperText, key)<<endl;

    cout<<"Apakah anda ingin mengulang program ? (Y/N) ";
    cin>>pilih;

    if(pilih == "Y" || pilih == "y"){ // perintah untuk balik ke awal program apabila diinginkan
        goto mulai;
    }
    else{
        return 0;
    }
}

