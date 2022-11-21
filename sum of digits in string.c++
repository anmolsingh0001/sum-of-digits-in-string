// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string num;
    getline(cin,num);
    int sum=0;
    
    
    for(int i=0; i<num.length(); i++){
        if( num[i]>='0' && num[i]<='9'){
            sum+=num[i]-'0';
           
        }
        }

    cout<<sum;
    
	return 0;

}