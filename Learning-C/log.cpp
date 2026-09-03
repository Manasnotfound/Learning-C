#include <iostream>
#include<stdlib.h>
using namespace std;

bool isPalindrome(int x) 
{
        string d = to_string(x);
		int len = d.length();
		for(int i=0;i<len;i++)
		{
			if(i>=len/2) break;
			if(d[i]!=d[len-i-1])return false;
		}
		return true;
}

int main(){
	int x; cin>> x;
	cout<<isPalindrome(x);
	
}



//  void increment(int& value){
//         value++;
//     }
//     bool isPalindrome(int x) {
//         string d = to_string(x);
//         int i = -1;
//         increment(i);
//         return d(i)
        