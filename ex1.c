#include <stdio.h>

int AA[100];  		// linearized version of A[10][10]
int BB[100];  		// linearized version of B[10][10]
int CC[100];  		// linearized version of C[10][10]
int m;       		// actual size of the above matrices is mxm, where m is at most 10


/* ------- Function proto-types put here  ------------------
  You do not have to use functions, however, this maybe your opportunity
  to get some extra practice :)
------------------------------------------------------------ */

int main() {
  int m;
  printf("m=");
  scanf("%d", &m);
  int AA[m * m];
  int BB[m * m];
  for(int i=0; i<m; i++)
  {
    printf("AA[%d]=", i);
    scanf("%d", &AA[i]);
    printf("BB[%d]=", i);
    scanf("%d", &BB[i]);
  }
  int CC[m * m];
  for(int i=0; i<m; i++)
  {
    for(int j=0; j<m; j++)
    {
      int sum = 0;
      for(int k = 0; k<m; k++)
      {
          sum += AA[i*m + k] * BB[j * m + k];
      }
      CC[i * j + k] = sum;
    }
  }
  for(int i=0; i<m*m; i++)
  {
    printf("CC[%d] = %d\n", i, CC[i]);
  }

	/* ----------------------------------------
	  Algorithm for lab assignment.

	  1.  First, read m (the matrices will then be size mxm).
	  2.  Next, read matrix A followed by matrix B.
	  3.  Compute matrix product.  You will need triple-nested loops for this.
	  4.  Print the result, one row per line, with one (or more) space(s) between
	      values within a row.
	  5.  Exit.

	------------------------------------------ */

	// TODO: add code here


}

/* ------- Function definitions below ------------------ */
