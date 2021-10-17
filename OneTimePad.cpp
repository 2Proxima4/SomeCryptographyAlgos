#include <bits/stdc++.h>
using namespace std;
 
 // Key should be random and should not have been used earlier .
 // Key should be deleted from both the ends after its use.
 // OTP is widely regarded as perfectly secure cipher.
 // Key is to be shared over some secured network .
 // However , the above condition fails due to its recursive nature . 
 // Hence OTP is impractical .

 // Our OTP function will take input as a string(plaintext),the key(of the same size) and length of string and encrypt it with modular function .
 // The key should be of same size as that of the input string.

 string hmm_encrypt(string plaintext , string key , int length){
     string ciphertext = " ";
     for(int i=0;i<length;i++){
        string p = plaintext[i] ^ key[i];
        ciphertext = ciphertext + p;
     }
     cout<<ciphertext<<endl;
 }

 string hmm_decrypt(string ciphertext , string key , int length){
     string plaintext = " ";
     for(int i=0;i<length;i++){
         string p = ciphertext[i] ^ key[i];
         plaintext = plaintext + p;
     }
     cout<<plaintext<<endl;

 }
 