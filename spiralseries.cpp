#include <iostream>
#include<conio.h>
 
 using namespace std;
 
 main()
 {	
 int rep,res;
  do{
 cout<<"Input a Number to print Spiral Pattern \n -> For exit press 0\n";

 
 cin>>rep;
	int max[rep][rep],num=rep*rep;
 	int i,j,k,l,m,a,b;
 	/*
 	if(rep%2!=0)
 	{
 		res=(rep+1)/2;
	}
	else
	{
		res=rep/2;
	}*/
	res=rep%2?rep/2:(rep+1)/2;
 	for(m=0;m<=res;m++)
 	{
 	for(i=m;i<=rep-1-m;i++)//change
 	{
 		max[m][i]=num; num--;
	}
	--i;
	for(j=1+m;j<=i;j++)
	{
		max[j][i]=num;	--num;
	}
	for(k=i-1;k>=m;k--)
	{
		max[i][k]=num;	--num;
	}
	for(l=rep-2-m;l>=1+m;l--)
	{
		max[l][m]=num; --num; 
	}	
}
//display spiral
	for(a=0;a<rep;a++)
	{
		for(b=0;b<rep;b++)
		{
		if(max[a][b]<10)
		cout<<max[a][b]<<"  ";
		
		else
			cout<<max[a][b]<<" ";
		}
		
		cout<<endl;
	}
	cout<<endl;
	//cout<<res;
}while(rep!=0);
 }
