int t,i,x,y,s;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
	scanf("%d %d",&x,&y);
	if (x>y)
	s=x-y;
	else if (x<=y)
	s=0;
	printf("%d",s);
}
int t,n,s,i,j,p=0,q=0,c=0;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
	scanf("%d",&n);
	scanf("%d",&s);
	p=s%10;
	s=s/10;
	for (j=1;j<n;j++)
	{
	    q=s%10;
	    s=s/10;
	    if (p==q)
	    c++;
	    p=q;
	    q=0;
	}
	printf("%d \n",c);
	c=0;
}
int a,b,c=0;
	char ch;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%c",&ch);
	if (ch='+')
	c=a+b;
	if (ch='-')
	c=a-b;
	if (ch='*')
	c=a*b;
	if (ch='/')
	c=a/b;
	printf("%d \n",c);
