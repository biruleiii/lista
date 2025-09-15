#include<stdio.h>
double umSobreImpar(int n){
int i;

    for (i = 3 ;i <= (n-1) *2 + 3; i+= 2) {
            printf("%d", i);
    }
    printf("----%lf----", 1/(double)i);
 return 1 / (double)i ;

}




void mostrarParesEmOrdemDecrescente(int n)
{
if ( n % 2 == 0) {

        for (; n >= 0;)
        {
            printf ("%d", n);
            n = n - 2;
        }
}
    else
    {
        for (; n-1>=0;)
        {
            printf ("%d", n);
            n = n - 2;
        }


    }


}
int par (int n)
{
    return  n * 2;


}
void questao03 ()
{
    int n;
        printf ("qual o valor?");
    scanf ("%d", &n);

    printf("%lf", umSobreImpar(n));

}
void questao02 ()
{
    int n;

    printf ("qual o valor?");
    scanf ("%d", &n);

mostrarParesEmOrdemDecrescente (n);

}

void questao01 ()
{
    int n;
    printf ("qual e o enesimo termo?");
    scanf ("%d", &n);



    printf ("%d", par (n)) ;

}


void menu(int questao)
{

    if (questao == 1)
    {
        questao01 ();

    }
    else if ( questao == 2)
    {
        questao02 ();
    }
    else if ( questao == 3)
    {
        questao03 ();
    }
}

int main ()
{
    int questao;
    printf ("qual o valor  da questao?");
    scanf ("%d", &questao);
    menu(questao);

    return 0;
}
