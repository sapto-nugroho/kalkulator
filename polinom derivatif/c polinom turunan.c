#include<stdio.h>
    #include<conio.h>
    #include<stdlib.h>
    void main()
    {
        int a[10],i,n,d[10];
        float in[10];
        printf("Orde dari polinomial\n");
        scanf("%d",&n);
        for(i=n;i>=0;i--)
        {
            printf("Masukkan koefisien dari x^%d:",i);
            scanf("%d",&a[i]);

        }
        printf("Polinomial: \n");
        for(i=n;i>=0;i--)
        {
            if(a[i]>0)
            {
            if(i!=n)
            printf(" + ");
            }
            else if(a[i]<0)
                printf(" - ");
                else
                printf(" ");
            printf("%dx^%d",abs(a[i]),i);
        }
        //To find derivative
        for(i=n;i>=0;i--)
        d[i]=a[i]*i;
        printf("\n Turunan Polinomial: \n");
        for(i=n;i>=1;i--)
        {

            if(d[i]>0)
            printf(" + ");
            else if(d[i]<0)
                printf(" - ");
                else
                printf(" ");
            printf("%dx^%d",d[i],i-1);
        }
    getch();
    }
