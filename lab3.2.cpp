#include <iostream>
using namespace std;
int main ()
{
	int X,Y,Z;
	cin>>X>>Y>>Z;
	int maxi = max(X,(Y,Z));
	int mini = min(X,(Y,Z));
	cout<<"Max:"<<maxi<<endl;
	cout<<"Min:"<<mini<<endl;
return 0;
}
