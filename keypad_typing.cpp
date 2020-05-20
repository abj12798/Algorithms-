#include<iostream>
using namespace std;
 void keypadtyping(string s){
	char arr[26]={'2','2','2','3','3','3','4','4','4','5','5','5','6','6','6','7','7','7','7','8','8','8','9','9','9','9'};
	int l=s.length(),i=0;
	for(i=0;i<l;i++)
         cout<<arr[s[i]-97];
        return;	
	}
 int main(){
   int T;
   cin>>T;
   while(T--){
   	string s;
   	cin>>s;
   	keypadtyping(s);
   }
   return 0;
    }
