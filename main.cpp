#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap vao so nguyen n:";
	cin>>n;
	int tong=0;
	int i=0;
	for(i=1;i<=n;i++)
	{
		tong=tong+i;
	}
	cout<<"Tong tu 1 den"<<n <<" la: " << tong;
	return 0;
}