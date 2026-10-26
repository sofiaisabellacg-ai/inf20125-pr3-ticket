#include <stdio.h>

int main(void)
{
    int insumos_iniciales = 0;
    int insumos_recibidos = 0;
    int insumos_utilizados = 0;
    int insumos_disponibles = 0;

    if (scanf("%d %d %d",
              &insumos_iniciales,
              &insumos_recibidos,
              &insumos_utilizados) != 3)
    {
        return 1;
    }

    insumos_disponibles = insumos_iniciales + insumos_recibidos + insumos_utilizados;

    printf("Insumos disponibles: %d\n", insumos_disponibles);
    return 0;
}
