#include <stdio.h>

int main()
{
    double a,s,i,p;
    scanf("%lf",&a);

    if(a>=0 && a<=400)
    {
        p = 15;
        s = a + a*(p/100);
        i = s - a;

        printf("Novo salario: %.2lf\n",s);
        printf("Reajuste ganho: %.2lf\n",i);
        printf("Em percentual: %.0lf %%\n",p);
    }
    else if(a>400 && a<=800)
    {
        p = 12;
        s = a + a*(p/100);
        i = s - a;

        printf("Novo salario: %.2lf\n",s);
        printf("Reajuste ganho: %.2lf\n",i);
        printf("Em percentual: %.0lf %%\n",p);
    }
    else if(a>800 && a<=1200)
    {
        p = 10;
        s = a + a*(p/100);
        i = s - a;

        printf("Novo salario: %.2lf\n",s);
        printf("Reajuste ganho: %.2lf\n",i);
        printf("Em percentual: %.0lf %%\n",p);
    }
    else if(a>1200 && a<=2000)
    {
        p = 7;
        s = a + a*(p/100);
        i = s - a;

        printf("Novo salario: %.2lf\n",s);
        printf("Reajuste ganho: %.2lf\n",i);
        printf("Em percentual: %.0lf %%\n",p);
    }
    else if(a>2000)
    {
        p = 4;
        s = a + a*(p/100);
        i = s - a;

        printf("Novo salario: %.2lf\n",s);
        printf("Reajuste ganho: %.2lf\n",i);
        printf("Em percentual: %.0lf %%\n",p);
    }


}
