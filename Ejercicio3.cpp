#include <stdio.h>
 
struct Alumno
{
    float N1, N2, N3, N4, N5;
    float promedio;
};
 
int main()
{
    int n, i;
 
    printf("\nCantidad de estudiantes: ");
    scanf("%d", &n);
 
    Alumno a[n];
 
    for(i=0; i<n; i++) 
    {
        printf("\nEstudiante %d:\n", i+1);
        
        printf("Nota 1: ");
        scanf("%f", &a[i].N1);
        printf("Nota 2: ");
        scanf("%f", &a[i].N2);
        printf("Nota 3: ");
        scanf("%f", &a[i].N3);
        printf("Nota 4: ");
        scanf("%f", &a[i].N4);
        printf("Nota 5: ");
        scanf("%f", &a[i].N5);
        a[i].promedio = (a[i].N1 + a[i].N2 + a[i].N3 + a[i].N4 + a[i].N5) / 5.0f;
    }
 
    printf("\n\nDatos de los estudiantes:");
    printf("\n=========================");
    for(i = 0; i < n; i++) 
    {
 
        printf("\nEstudiante %d:", i + 1);
        printf("\nPromedio: %.2f", a[i].promedio);
        if
            (a[i].promedio >= 6.00)
            printf("\nAprobado");
        else
            printf("\nReprobado");
 
        printf("\n-----------------");
    }
 
    printf("\n\n");
 
    return 0;
}