/*
    Matrix Types
*/

#include<stdio.h>
#include<stdlib.h>

int findSymmetric(int **a,int n)
{
	int count=0 ;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			if(a[i][j]==a[j][i])
			    count++ ;
		}
	}
	if(count==(n*n))
	    return 1 ;
	else
	    return 0 ;
}
int findIdentity(int **a,int n)
{
	int count=0 ;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			if(i==j)
			{
				if(a[i][j]==1)
				    ++count ;
			}
			else
			{
				if(a[i][j]==0)
				    ++count ;
			}
		}
	}
	if(count==(n*n))
	    return 1 ;
	else    
	    return 0 ;
}
int findMagic(int **a,int n)
{
	int count=0,row[n],col[n],i=0,j=0 ;
	for(i=0 ; i<n ; i++)
	{
		row[i]=0 ;
		col[i]=0 ;
		for(j=0 ; j<n ; j++)
		{
			row[i]+=a[i][j] ;
			col[i]+=a[j][i] ;
		}
	}
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		    if(row[i]==col[j])
		        count++ ;
	}
	if(count==n*n)
	    return 1 ;
	else
	    return 0 ;
}
int findUpperTriangular(int **a,int n)
{
	int count=0,i=0,j=0 ;
	for(j=0 ; j<n-1 ; j++)
	{
		for(i=j+1 ; i<n ; i++)
		{
			if(a[i][j]==0)
			    ++count ;
		}
	}
	if(count==((n-1)*n)/2)
	    return 1 ;
	else 
	    return 0 ;
}
int findLowerTriangular(int **a,int n)
{
	int count=0,i=0,j=0 ;
    for(j=1 ; j<n ; j++)
	{
		for(i=0 ; i<j ; i++)
		{
			if(a[i][j]==0)
			    ++count ;
		}
	}
	if(count==((n-1)*n/2))
	    return 1 ;
	else 
	    return 0 ;
}
int findEvenTrace(int **a,int n)
{
	int i,j,sum=0 ;
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			if(i==j)
			{
				sum+=a[i][j] ;
			}
		}
	}
	if(sum%2==0)
	    return 1 ;
	else 
	    return 0 ;
}
int findNonZero(int **a,int n)
{
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			if(a[i][j]==0)
			    return 0 ;
		}
	}
	return 1 ;
}
int findSpecial(int **a,int n)
{
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			if(a[i][j]==n)
			    return 1 ;
		}
	}
	return 0 ;
}
int findSpecialTrace(int **a,int n)
{
	int lr=0,rl=0,j=n-1,k=0 ;
	for(int i=0 ; i<n ; i++)
	{
		rl+=a[i][j] ;
		j-- ;
		lr+=a[i][k] ;
		k++ ;
	}
	if(rl==lr)
	    return 1 ;
	else 
	    return 0 ;
}
int findLucky(int **a,int n)
{
	int count=0 ;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			if(a[i][j]%n==0)
			    ++count ;
		}
	}
	if(count==n*n)
	    return 1 ;
	else   
	    return 0 ;
}
int **readMatrix(int rows,int cols)
{
	int **array ;
	array=(int**)malloc(rows*sizeof(int*)) ;
	for(int row=0 ; row<rows ; row++)
		array[row]=(int*)malloc(cols*sizeof(int)) ;
	for(int i=0 ; i<rows ; i++)
	{
		for(int j=0 ; j<cols ; j++)
		{
			scanf("%d",&array[i][j]) ;
		}
	}
	return array ;
}
void displayMatrix(int **a,int rows,int cols)
{
	for(int i=0 ; i<rows ; i++)
	{
		for(int j=0 ; j<cols ; j++)
		{
			printf("%d ",a[i][j]) ;
		}
		printf("\n") ;
	}
}
void result(int n,char *s)
{
	if(n==1)
	    printf("Matrix is %s\n",s) ;
	else 
	    printf("Matrix is not %s\n",s) ;
}
int main()
{
	int n=0,**a ;
	scanf("%d",&n) ;
	a=readMatrix(n,n) ;
	displayMatrix(a,n,n) ;
	result(findSymmetric(a,n),"Symmetric") ;
	result(findIdentity(a,n),"Identity") ;
	result(findMagic(a,n),"Magic") ;
	result(findUpperTriangular(a,n),"UpperTriangular") ;
	result(findLowerTriangular(a,n),"LowerTriangular") ;
	result(findEvenTrace(a,n),"EvenTrace") ;
	result(findNonZero(a,n),"NonZero") ;
	result(findSpecial(a,n),"Special") ;
	result(findSpecialTrace(a,n),"SpecialTrace") ;
	result(findLucky(a,n),"Lucky") ;
	return 0;
}