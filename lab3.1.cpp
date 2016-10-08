#include <iostream>
using namespace std;
int main ()
{
	int X,Y,Z;
	cin>>X>>Y>>Z;
	int mini=X;
	int maxi=X;
	  if (Y<X){
	  mini=Y;}
	  if (Z<X){
	  mini=Z;}
	    if(Y>X){
	    maxi=Y;}
	    if(Z>X){
	    maxi=Z;}
	cout<<"Max:"<<maxi<<endl;
	cout<<"Min:"<<mini<<endl;
	   
	return 0;
}

