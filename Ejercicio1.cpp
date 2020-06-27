#include <stdio.h>
#include <conio.h>

int main ()

{
    char frase[30];

    int i=0;

    printf("Intruduce texto a cifrar: \n");

    gets(frase);

    while(frase[i]!='\0')
    {
        if (frase[i]=='m')
        frase[i]='0';

        if (frase[i]=='u')
        frase[i]='1';

        if (frase[i]=='r')
        frase[i]='2';

        if (frase[i]=='c')
        frase[i] = '3';

        if (frase[i]=='i')
        frase[i]='4';

        if (frase[i]=='e')
        frase[i]='5';

        if (frase[i]=='l')
        frase[i]='6';

        if (frase[i]=='a')
        frase[i]='7';

        if (frase[i]=='g')
        frase[i]='8';

        if (frase[i]=='o')
        frase[i]='9';

        i++;

    }
    printf("La clave es: %s",frase);

    getch();
}