//Perform matrix multiplication C=A*B
void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q])
{
	int i=0,j=0,k=0;
	for(i=0;i<n;i++)
	   for(j=0;j<q;j++)
		   for(k=0;k<p;k++)
			   C[i][j]=C[i][j]+A[i][k]*B[k][j];

}			  