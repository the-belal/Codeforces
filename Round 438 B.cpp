#include<stdio.h>
int main ()
{
	double h,m,s,t1,t2,p,mini,maxi;
	double hh,mm;
	while (scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2)==5)
	{
		h*=5;
		hh=(double )  (h+m/100.0+s/1000.0);
		mm= (double ) (m+s/1000.0);
		t1*=5;
		t2*=5;
		if (t1>t2)
		{
			maxi=t1;
			mini=t2;
		}
		else
		{
			maxi=t2;
			mini=t1;
		}
		p=1;
		if (hh>=mini && hh<=maxi)
		{
			p=0;
		}
		else if (mm>=mini && mm<=maxi)
		{
			p=0;
		}
		else if (s>=mini && s<=maxi)
		{
			p=0;
		}
		if (p==1)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
