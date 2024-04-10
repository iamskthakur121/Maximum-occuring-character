#include<iostream>
using namespace std;

char GetMaxOccChar(string s){
    int arr[26]={0};

    for (int i = 0; i < s.length(); i++)
    {
        //lower case
        int number=0;
        char ch=s[i];
        if (ch>= 'a' && ch<='z')
        {
            number = ch - 'a';
            
        }
        else{
            number = ch - 'A';
        }
        arr[number]++;
        
    }
    int maxi = -1, ans=0;
    for (int i = 0; i <26; i++)
    {
        if (maxi<arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
        
        
    }
    char finalAns = 'a'+ans;
    return finalAns;
    
    
}

int  main(){

    string s;
    cin>>s;

    cout<<GetMaxOccChar(s)<<endl;


}