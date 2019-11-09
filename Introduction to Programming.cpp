//Hui Zhen Han
//SUKD1901262
//Assignment 1

#include <iostream>
using namespace std;
int main()
{
	int numbers_of_integers;
	int array_element;
	int number_list[numbers_of_integers];
	int odd=0, even=0, zero=0;
	
	cout<<"This program is for classifying integer number"<<endl;
	cout<<endl;
	cout<<endl;
	
	//Setting the numbers of integers to be read
	cout<<"Enter the numbers of integers you want to read:";
	cin>>numbers_of_integers;
	cout<<endl;
	cout<<endl;
	
	//User enters number(s)
	cout<<"Please enter "<<numbers_of_integers<<" either positive, negative or zero number:"<<endl;

	for (array_element=0;array_element<numbers_of_integers;array_element++)
	{
			cin>>number_list[array_element];
	}
	
	cout<<endl;
	cout<<"***********************************************"<<endl;
	
	//Output number(s) entered by user
	cout<<"The number(s) entered by user"<<endl;
	for (array_element=0;array_element<numbers_of_integers;array_element++)
		{
			cout<<number_list[array_element]<<" ";
		}	
	cout<<endl;
	
	//Sort numbers to odd or even or zero
	for (array_element=0;array_element<numbers_of_integers; array_element++)
	{
		
		if(number_list[array_element]==0)
        {
            zero++;
        }
        else if (number_list[array_element]%2==0)
        {
        	even++;
     	}
		else{
            odd++;
        }
	}
	
	//Display the output
	cout<<endl;
	cout<<"There are "<<even<<" evens, which includes "<<zero<<" zeros."<<endl;
	cout<<"The number of odd number is : "<<odd<<endl;
	
	
return 0;
	
}
