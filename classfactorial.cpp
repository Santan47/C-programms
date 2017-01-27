#include<iostream>
using namespace std;
class factorial
{
public:
 int n,i,f;
	void output();
};
void factorial::output()
{
int f=1,i,n;
 cout<<"enter the no"<<endl;
 cin>>n;

for(i=1;i<=n;i++)
f=f*i;
cout<<"foctorial is:"<<f<<endl;
}
int main()
{
factorial fact;
fact.output();
return 0;
}
}
