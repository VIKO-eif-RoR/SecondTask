#include<iostream>
#include<cmath>
using namespace std;

float f(float x)
{
	return x*sin(x);
}

float simpson(float a, float b, int n)
{
	float h, x[n+1], sum = 0;
	int j;
	h = (b-a)/n;
	x[0] = a;
	for(j=1; j<=n; j++)
	{
		x[j] = a + h*j;
	}
	for(j=1; j<=n/2; j++)
	{
		sum += f(x[2*j - 2]) + 4*f(x[2*j - 1]) + f(x[2*j]);
	}
	return sum*h/3;
}
int main()
{
	float a,b;
	cout<<"Iveskite pradini taska: ";cin>>a;
	cout<<"Iveskite pabaigos taska: ";cin>>b;
	int n;
	cout<<"Iveskite intervalu skaiciu: ";cin>>n;
	if (n % 2 == 0)
		cout<<"intergralo reiksme: "<<simpson(a,b,n)<<endl;
	else
		cout<<"Intervalu skaicius turi buti lyginis skaicius";
	return 0;
}
