#include <stdio.h>

#define M 20
#define N 20

int main()
{
    int filas, columnas, i, j, A[M][N], T[M][N];

    printf("Escribe el número de filas: ");
    scanf("%d", &filas);
    printf("Escribe el número de columnas: ");
    scanf("%d", &columnas);

    // Llenar la matriz A con valores aleatorios y mostrarla
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            A[i][j] = rand() % 101;  // Asignar un valor aleatorio entre 0 y 100
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("Matriz transpuesta:\n");

    // Calcular y mostrar la matriz transpuesta T
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            T[i][j] = A[j][i];  // Transponer los elementos de A en T
            printf("%d\t", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}
