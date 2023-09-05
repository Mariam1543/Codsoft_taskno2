#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	int num,guess;
	srand(time(0));
	num=1+rand()%100;
	cout<<"                        WELCOME TO NUMBER GUESSING GAME                                "<<endl;
	cout<<"I am thinking of a number between 1 to 100. Can you guess what it is?"<<endl;
    cout<<" Enter your guess"<<endl;
	cin>>guess;
	while(guess!=num)
	{
		if(guess>num)
		{
			cout<<guess<<" is too high"<<endl;
		}
		else 
		{
			cout<<guess<<" is too low"<<endl;
		}
		cin>>guess;
	}
	cout<<"Congraulations! You guessed it right!!!"<<endl;
	return 0;
	}