// Online C compiler to run C program online
#include <stdio.h>
#define max 10
int main() 
	{
	    int a[max][max], b[max][max], product[max][max];
	    int arow, acolumn, brow,bcolumn;
	    int i,j,k;
	    int sum=0;
	    
	    //size and elements of first array (A)
	    printf("Enter the row and column number of matrix A:\n");
	    scanf("%d%d", &arow, &acolumn);
	    printf("Enter the elemnets of matrix A\n");
	    for (i=0; i<arow; i++)
	    {
	        for (j=0; j<acolumn; j++)
	        {
	            scanf("%d", &a[i][j] );
	        }
	    }
	    //size and elements of second array (B)
	    printf("Enter the row and column number of matrix B:\n");
	    scanf("%d%d", &brow, &bcolumn);
	    //column of first array (array A) must be equal to row of second array (array B), in order to product.
	    if (brow != acolumn) 
		    {
		        printf("Row of matrix B must be equal to column of matrix A: ");
		    }
		    else 
		    {
		    printf("Enter the elemnets of matrix B \n");
		    for (i=0; i<brow; i++)
		        {
		            for (j=0; j<bcolumn; j++)
		            {
		                scanf("%d", &b[i][j] );
		            }
		        }
		    }
	    // product operation 
	    printf("\n");
	    for (i=0; i<arow; i++)
	    {
	        for (j=0; j<bcolumn; j++)
	        {
	            for (k=0; k<brow; k++)
	            {
	                sum += a[i][k] * b[k][j];
	            }
	            product[i][j] = sum;
	            sum=0;
	        }
	    }
	    
	    // printing the resultant array
	    printf("Resultant matrix is:\n");
	    for (i=0; i<arow; i++)
	    {
	        for (j=0; j<bcolumn; j++)
	        {
	            printf("%d\t",product[i][j]);
	        }
	        printf("\n");
	    }
	    
	    
	    return 0;
	}
