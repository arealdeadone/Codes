#include <bits/stdc++.h>

void sum(int a[301][301], int b[301][301], int c[301][301], int tm)
{
    for(int i=1; i<=tm; i++)
        for(int j=1; j<=tm; j++)
            c[i][j] = (a[i][j]%md + b[i][j]%md)%md;
}

void subtract(int a[301][301], int b[301][301], int c[301][301], int tm)
{
    for(int i=1; i<=tm; i++)
        for(int j=1; j<=tm; j++)
            c[i][j] = ((a[i][j]%md - b[i][j]%md)+md)%md;
}

void strassenR(int A[301][301], int B[301][301], int C[301][301], int tam) {
    if (tam <= 64) {
        mult(A, B);
        return;
    }
    else
    {
        int newTam = tam/2;
        int
            a11[301][301], a12[301][301], a21[301][301], a22[301][301],
            b11[301][301], b12[301][301], b21[301][301], b22[301][301],
              c11[301][301], c12[301][301], c21[301][301], c22[301][301],
            p1[301][301], p2[301][301], p3[301][301], p4[301][301],
            p5[301][301], p6[301][301], p7[301][301],
            aResult[301][301], bResult[301][301];

        int i, j;

        for (i = 1; i <= newTam; i++) {
            for (j = 1; j <= newTam; j++) {
                a11[i][j] = A[i][j];
                a12[i][j] = A[i][j + newTam];
                a21[i][j] = A[i + newTam][j];
                a22[i][j] = A[i + newTam][j + newTam];

                b11[i][j] = B[i][j];
                b12[i][j] = B[i][j + newTam];
                b21[i][j] = B[i + newTam][j];
                b22[i][j] = B[i + newTam][j + newTam];
            }
        }

        sum(a11, a22, aResult, newTam);
        sum(b11, b22, bResult, newTam);
        strassenR(aResult, bResult, p1, newTam);

        sum(a21, a22, aResult, newTam);
        strassenR(aResult, b11, p2, newTam);

        subtract(b12, b22, bResult, newTam);
        strassenR(a11, bResult, p3, newTam);

        subtract(b21, b11, bResult, newTam);
        strassenR(a22, bResult, p4, newTam);

        sum(a11, a12, aResult, newTam);
        strassenR(aResult, b22, p5, newTam);

        subtract(a21, a11, aResult, newTam);
        sum(b11, b12, bResult, newTam);
        strassenR(aResult, bResult, p6, newTam);

        subtract(a12, a22, aResult, newTam);
        sum(b21, b22, bResult, newTam);
        strassenR(aResult, bResult, p7, newTam);

        sum(p3, p5, c12, newTam);
        sum(p2, p4, c21, newTam);

        sum(p1, p4, aResult, newTam);
        sum(aResult, p7, bResult, newTam);
        subtract(bResult, p5, c11, newTam);

        sum(p1, p3, aResult, newTam);
        sum(aResult, p6, bResult, newTam);
        subtract(bResult, p2, c22, newTam);

        for (i = 1; i <= newTam ; i++) {
            for (j = 0 ; j < newTam ; j++) {
                C[i][j] = c11[i][j];
                C[i][j + newTam] = c12[i][j];
                C[i + newTam][j] = c21[i][j];
                C[i + newTam][j + newTam] = c22[i][j];
            }
        }
    }
}
