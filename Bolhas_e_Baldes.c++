#include <stdio.h>
#include <stdlib.h>
 
void troca (int *v, int i, int j) {
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;
}
 
int main (int argc, char **argv) {
    int n, i, trocas;
    int *v;
     
    scanf ("%d", &n);
    while (n > 0) {
        v = (int *)malloc (n*sizeof (int));
        for (i = 0; i < n; i++) scanf ("%d", &v[i]);
        trocas = 0;
         
        i = 0;
        while (i < n) {
            while (v[i] != i+1) {
                troca (v, i, v[i]-1);
                trocas = 1-trocas;
            }
            i++;
        }
         
        if (trocas == 0) printf ("Carlos\n");
        else printf ("Marcelo\n");
         
        free (v);
        scanf ("%d", &n);
    }
 
 
    return 0;
}