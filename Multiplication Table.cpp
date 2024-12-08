#include<iostream>
 #include<iomanip> 
 using namespace std; 
 int main()
{  
cout<<"Multiplication Table \n";
  int i=1;
  while(i<=12)
{
   int j=1;
   while(j<=12) 
{     
    cout<<setw(6)<<i*j;
    j++;
    }
    cout<<endl; 
	i++; 
	}
	
return 0;
}