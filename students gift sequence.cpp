#include<stdio.h>
int main()
{
    int temp,a[10][1],b[10],c[10][1],i,j;
    printf("\n enter the gits picked by each student");
    for(i=1;i<=10;i++)
    {
        printf("\n enter %d student gifts",i);
        scanf("%d",&a[i][1]);
        c[i][1]=a[i][1];
    }
    for(i=1;i<=10;i++)
    {
        for(j=i;j<=10;j++)
        {
            if(a[i][1]<=a[j][1])
            {
                temp=a[i][1];
                a[i][1]=a[j][1];
                a[j][1]=temp;
            }
        }   
    }
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(a[i][1]==c[j][1])
            {
                b[i]=j;
            } 
        }      
    }
    printf("\n the students ordered at the billing is \n:");
    for(i=1;i<=10;i++)
    {
        if(b[i+1]==b[i])
        {
            b[i+1]=b[i]-1;
        }
        printf(" s%d",b[i]);
    }
}
