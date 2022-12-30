#include <iostream>
using namespace std;

int main()
{
	
	// fill a table
	int   i,j , temp , n , var ;
	int T[n] ;
	
	for( i=0 ; i<n; i++)
	{
		cout<<" give a value  :"<<endl;
		cin>>var; 
		T[i] = var ;
		
	}

// sort by bubble

 for(i=1 ; i<n-1;i++)
 {
 	for(j=1; j<n-1; j++)
 	{
 		temp = T[j];
 		T[j]=T[j+1] ;
 		T[j+1]=temp ;
	 }
 }


	
	for (i=0; i<n;i++)
	{
		cout<<T[i];
	}


}
