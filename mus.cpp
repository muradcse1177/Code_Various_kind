#include<stdio.h>
int main()
{
long long int a,b,c,d,e,i,m;
while(scanf("%lld",&a)!=EOF){
m=1;
for(i=1;i<=a;i++)
{scanf("%lld %lld %lld",&b,&c,&d);
if(b+c>d && c+d>b && b+d>c)
{if(((b==c)&&(b!=d))||((c==d)&&(c!=b))||((b==d)&&(b!=c)))
printf("Case %lld: Isosceles\n",m++);
else
{if(((b==c)&&(b==d))||((c==d)&&(c==b))||((b==d)&&(b==c)))
printf("Case %lld: Equilateral\n",m++);
else printf("Case %lld: Scalene\n",m++);
}}
else printf("Case %lld: Invalid\n",m++);

}}
return 0;
}

