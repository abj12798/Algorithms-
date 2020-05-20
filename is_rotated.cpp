#include<iostream>
#include<string>
using namespace std;
bool isrotated(string a,string b){
	string s="";
	s=s+a;
	s=s+a;
	int l=a.length();
        int m=b.length();
      if(l==m){
       if(s.substr(2,m)==b||s.substr(l-2,m)==b)
			return true;
	   else
	   		return false;
	   	}
	  return false;
	 }
int main(){
	int T;
	cin>>T;
	while(T--){
		string s,r;
		cin>>s>>r;
		cout<<isrotated(s,r);
		}
	return 0;
	}
	 
		
        

