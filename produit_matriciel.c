float produit_matricel(int N)
{
double **A,**B,**C;
int i,j,k;
clock_t start, end;
 
start = clock();

A = (double **) malloc(N,sizeof(double *));
for(i=0;i<N;i++) A[i] = (double *) malloc(N,sizeof(double));

B = (double **) malloc(N,sizeof(double *));
for(i=0;i<N;i++) B[i] = (double *) malloc(N,sizeof(double));

C = (double **) malloc(N,sizeof(double *));
for(i=0;i<N;i++) C[i] = (double *) malloc(N,sizeof(double));

for(i=0;i<N;i++)
  for(j=0;j<N;j++)
    {
      A[i][j] = 1./((double)(i+j+1));
      B[i][j] = pow(i+1,N-j-1);
    }

for(i=0;i<N;i++)
  for(j=0;j<N;j++)
    {
      C[i][j] = 0;
      for(k=0;k<n;k++) C[i][j] += A[i][k]*B[k][j];
    }

for(i=0;i<N;i++) free(A[i]);
free(A); 

for(i=0;i<N;i++) free(B[i]);
free(B); 

for(i=0;i<N;i++) free(C[i]);
free(C); 

end = clock();

return end-start;
}
