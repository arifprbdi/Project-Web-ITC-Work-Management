#include <iostream>
using namespace std;
main()
{
	int b,k;
	cout<<"anjay : ";
	cout<<"BELAJAR YA";
	cout<<"SABAR YA ARIP";
	cout<<"coba terus";
	cin>>b;
	cout<<"INPUT Kolom Matriks : ";
	cin >>k;

	string matriks[b][k];
	for (int i = 0; i < b; i++)
		{
		for (int j = 0; j < k ; j++)
		{
		cout<<"Input isi Matriks ("<<i<<","<<j<<"): ";
		cin>>matriks[i][j];
		}	
		}	
cout<<"==============================\n";
	cout<<"MATRIKS A =\n";
	for (int i = 0; i < b; i++)
	{
	for (int j = 0; j < k ; j++)
	{
		cout<<"["<<matriks[i][j]<<"]";
	}
	cout<<endl;
	}
cout<<"==============================\n";
	cout<<"MATRIKS B =\n";
	string pindah[b][k];
	for (int i = 0; i < b; i++)
{
	for (int j = 0; j < k; j++)
		{
		if ( j<i)
		{
			pindah[i][j]='1';
		}
		else
		{
			pindah[i][j]=matriks[j][i];
		}
		}
}
	for (int i = 0; i < b; i++)
{
	for (int j = 0; j < k; j++)
	{
		cout<<"["<<pindah[i][j]<<"]";
	}
	cout<<endl;	
}
cout<<"==============================\n";
cout<<"Matriks C =\n";
for (int i = 0; i < b; i++)
{
	for (int j = 0; j < k; j++)
	{
		if (j<i)
		{
			if ( pindah[i][j]=="1")
			{
				pindah[i][j]=" ";
			}
		}
	}
	
}
for (int i = 0; i < b; i++)
{
	for (int j = 0; j < k; j++)
	{
		cout<<"["<<pindah[i][j]<<"]";
	}
	cout<<endl;
	
}cout<<"==============================\n";
}

