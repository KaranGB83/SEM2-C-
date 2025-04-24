#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
    int num, den, divide;
    cout<<"Enter the Numerater: ";
    cin>>num;

    cout<<"Enter the Denominater: ";
    cin>>den;

    try{
	if(den==0)
	{
	    cout<<"Cannot Divide by Zero";
	}
	divide = num / den;
	cout<<num<<"/"<<den<<"="<<divide<<endl;
    }
    catch(int num_exception)
    {
	cout<<"Error "<<num_exception;
    }
    return 0;
}