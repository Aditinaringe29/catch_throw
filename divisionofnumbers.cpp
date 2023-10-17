#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"enter numerator:"<<endl;
	cin>>num1;
	cout<<"enter denominator:"<<endl;
	cin>>num2;
	try{
		if(num2==0){
			throw("not possible with zero");
		}
	}
	catch(const char *msg){
		cout<<msg<<endl;
	}
	num3=(num1/num2);
	cout<<"answer is "<<num3<<endl;
}
