#include<iostream>

using namespace std;

int main(){

	int i,num;

	cout<<"Enter the number : ";
	cin>>num;
	for(i=1;i<=200;i++)
    {
        cout<<"    "<<num*i;
        if (i%10==0)
        {
            cout<<"\n";
        }
    }
	return 0;
}
