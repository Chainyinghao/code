#include<cstdlib>
using namespace std;
char getRandomCharacter(char ch1,char ch2)
{
	return static_cast<char>(ch1+rand()%(ch2-ch1+1)); 
}
char getRandomLowerCaseletter()
{
	return getRandomCharacter('a','z');
}
char getRandomUpperCaseletter()
{
	return getRandomCharacter('A','Z');
}
char getRandomDigitCharacter()
{
	return getRandomCharacter('0','9');
}
char getRandomCharacter()
{
	return getRandomCharacter(0,127);
}
#include<iostream>
#include"RandomCharacter.h"
const int number_of_letters=100;
char *createArray();
void displayArray(char[]);
int *countletters(char[]);
void displaycounts(int[]);
int main()
{
	char *char=createArray();
	cout<<"The lowercase letters are:"<<endl;
	int *counts=countletters(char);
	cout<<endl;
	cout<<"The occurences of each letter are:"<<endl;
	return 0;
}
char *createArray()
{
	char *char=new char[number_of_letters];
	srand(time(0));
	for(int i=0;i<number_of_letters;i++)
	    chars[i]=getRandomLowerCaseletters();
    return chars; 
}
void displayArray(char chars[])
{
	for(int i=0;i<number_of_letters;i++)
	  {
	  	if((i+1)%20==0)
	  	   cout<<chars[i]<<"  "<<endl;
	  	else
	  	   cout<<chars[i]<<"  ";
		}  
}
int *countletters(char chars[]);
{
	int *count=new int[26];
	for(int i=0;i<number_of_letters;i++)
	   counts[i];
	for(int i=0;i<26;i++)
	   counts[chars[i]-'a']++;
	   return counts;		
}
void displaycounts(int counts[])
{
	for(int i=0;i<26;i++)
	{
		if((i+1)%10==0)
		   cout<<counts[i]<<"  "static_cast<char>(i+'a')<<endl;
		else
		   cout<<counts[i]<<"  "static_cast<char>(i+'a')"  ";
	}
}

