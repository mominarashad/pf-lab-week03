#include<iostream>
using namespace std;
main()
{
string name;
float matricmarks;
float fscmarks;
float ecatmarks;
float matricaggregate;
float fscaggregate;
float ecataggregate;
float totalaggregate;
cout<< "Enter your name :";
cin>>name;
cout<< "Enter your matricmarks out of 1100:";
cin>> matricmarks;
cout<< "Enter your fscmarks out of 550 :";
cin>>fscmarks;
cout<< "Enter your ecatmarks out of 400:";
cin>>ecatmarks ;
matricaggregate=((matricmarks/1100)*100);
fscaggregate=((fscmarks/550)*100);
ecataggregate=((ecatmarks/400)*100);

totalaggregate=0.40*fscaggregate+0.10*matricaggregate+0.50*ecataggregate;
cout<<"total aggregate is :"<<totalaggregate;
}