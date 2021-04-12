#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
//this program plays a simple game
const int totchan=7;
void main()
{
int number;//computers random number
int guess;//the users guess
int chances=0,score=0,chanscor;
char ans;
do
{
clrscr();
chances=score=0;
cout<<"welcome to high/low game!!";
cout<<"\ni will pick a random number from 0 to 100";
cout<<"\nyou must try to guess the number";
randomize();
number=(int)(rand()%100);
chanscor=100/totchan;//for each score
do
{
cout<<"\nwhat is your guess?(0 to 100)";
cin>>guess;
if((guess<0)||(guess>100))
{
cout<<"\nsorry your guess must be from 1 to 100";
}
else if(guess<number)
{
cout<<guess<<"is low.Try a higher number";
}
else if(guess>number)
{
cout<<guess<<"is high.Try a lowe number";
}
else//if correct number is guessed
{  //number is correct,and do loop will end below
cout<<guess<<"is correct.congratulations!";
score=chanscor*(totchan-chances);//score
cout<<"your score is"<<score<<endl;
break;
}
chances++;
if(guess!=number)
cout<<"now u have"<<totchan-chances<<" left"<<endl;
if(chances==totchan)
{
cout<<"only"<<totchan<<"chances are allowed.Better luck next time";
cout<<"the actual number was "<<number<<endl;
break;
}
}while(guess!=number);
cout<<"Thank you for playing high/low!";
cout<<"want to play again?(y/n)...";
cin>>ans;
}while(ans=='y'||ans=='Y');
}