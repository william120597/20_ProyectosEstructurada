#include <stdio.h>

int find(char *cadena, char letra_a_contar)
{
    int acc = 0;
    for(int i = 0; 100 ; i++) {
        if (cadena[i+1] == letra_a_contar) {
            acc = acc+1;
        }
    }
    return acc;
}
int main()
{
    char *cad = NULL;
    char letra_a_buscar = 0;
    int res = 0;
    printf("Escribe la cadena:");
    scanf("%s", cad);
    printf("Escribe la letra que quieres contar:");
    scanf("%c", & letra_a_buscar);
    res = find(cad, letra_a_buscar);
    printf("%i", res);
    return 0;
}
