#include <iostream>
#include<conio.h>

using namespace std;

#define ARRAY_SIZE 5
 
int main()
{
    int numbers[ARRAY_SIZE], i ,search_key;

	cout<<"Simple C++ Program for Searching In Array\n";

    for (i = 0; i < ARRAY_SIZE; i++)
    {
		cout<<"Enter the Number : "<< (i+1) <<"  : ";
        cin>>numbers[i];
    }
    
    cout<<"Enter the key\n";
    cin>>search_key;
	for (i = 0; i < ARRAY_SIZE; i++)
    {
		if(numbers[i] == search_key)
		{
			cout<<"Search Element Found . Position Is :"<< (i+1) <<" \n";
			break;
		}
		if(i == ARRAY_SIZE - 1)
		{
			cout<<"Search Element is not in Array.\n";
		}
    }
}
