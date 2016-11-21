#include<stdio.h>
#include<math.h>
int main()
{
    long int a[1010],i,j,n,c,k,b[1010],p,l,s,m,z;
    while(scanf("%ld %ld",&n,&c)!=EOF)
    {
        for(i=0;i<=n;i++)
        a[i]=0;
        z=(long)(sqrt(n));
        for(i=2;i<=z;i++)
        {
            if(a[i]==0)
            for(j=2;i*j<=n;j++)
            a[i*j]=1;
        }
        k=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]==0)
            {
            b[k]=i;
            k++;
            }
        }
       printf("%ld %ld:",n,c);
       if(c>=k)
       {
       for(i=0;i<k;i++)
       printf(" %ld",b[i]);
       }
       else
       {
           if((k%2)==0)
           {
               c=c*2;
               p=((k/2)+1)-(c/2)-1;
               m=(k/2)+(c/2);
               if(p<=0)
               {
                   for(i=0;i<k;i++)
                   printf(" %ld",b[i]);
               }
               else
               {
               for(i=p;i<m;i++)
               printf(" %ld",b[i]);
               }
           }
           else
           {
               c=c*2-1;
               p=(long)((ceil)(k/2)-(floor)(c/2));
               m=(ceil)(k/2)+(floor)(c/2);
               if(p<=0)
               {
                   for(i=0;i<k;i++)
                   printf(" %ld",b[i]);
               }
               else
               {
               for(i=p;i<=m;i++)
               printf(" %ld",b[i]);
               }
           }
       }
       printf("\n\n");
    }
    return 0;
}
