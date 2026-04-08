#include <stdio.h>

void age(int dias) {
    int anos = dias /  360;
    int resto = dias % 360;
    int meses = resto / 30;
    int dias_restantes = resto % 30; 

    printf("%d anos(s), %d mes(es) e %d dia(s)\n",
           anos, meses, dias_restantes);
}

int main() {
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);

age(a);
age(b);
age(c);

return 0;

}

