#include<iostream>
using namespace std;
int main() 
{ 

    string str;
    cin>>str;
    int l = 0; 
    int h = str.length() - 1; 
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
        { 
            cout<<"This is Not Palindrome"; 
            
        } 
    } 
    cout<<"This is palindrome"; 
    return 0; 
}
