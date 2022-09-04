#include<iostream>
#include<iomanip>
using namespace std;
 
int main()
{
  float marks[] ={78.4,90.6,45.9,72.2,54.4};
  char names[][20] = {"Ajith","Wimal","Kanthi","Suranjith","Kushmitha"};
 
  cout<<setw(5)<<"No"<<setw(15)<<"Names"<<setw(10)<<"Marks"<<endl;
 
  for(int r=0; r<5; r++)
    {
      cout<<setw(5)<<r+1;
      cout<<setw(15)<<names[r];
      cout<<setw(10)<<setprecision(5)<<marks[r]<<endl;
    }
 
  return 0;
}