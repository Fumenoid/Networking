#include<stdio.h>
#include<math.h>

int main()
{
	int m, r=1, i, j, one;
  printf("Enter size of data: ");
  scanf("%d", &m);

  while(1)
  {
  	if((pow(2,r))>=(m+r+1))
    	break;
    r++;
  }
	int bt[m+r],dt[m+r],t=0;

	printf("Enter data: ");
  for(i=0;i<m;i++)
  	scanf("%d", &bt[i]);

	for(i=0;t<m+r;i++)
	{
  	t = pow(2,i);
    dt[m+r-t] = 8;
	}
	for(i=0,j=0;i<m+r;i++)
	{
  	if(dt[i]!=8)
    {
    	dt[i]=bt[j];
      j++;
    }
	}
	for(i=0,one=0;i<m+r;i+=2)
	{
  	if(dt[i]==1)
    	one++;
	}

	if(one%2==1)
    	dt[m+r-1]=1;
	else
 		dt[m+r-1]=0;

 	for(i=1,one=0;i<m+r;i+=3)
	{
		if(dt[i]==1)
	    	one++;
		i++;
		if(dt[i]==1)
	    	one++;
	}

	if(one%2==1)
    	dt[m+r-2]=1;
	else
 		dt[m+r-2]=0;

 	for(i=3,one=0;i<m+r;i+=5)
	{
		for(int j=0;j<4;j++)
		{
  	if(i<m+r)
  	{
			if(dt[i]==1)
	    		one++;
			i++;
  	}
		}
	}

	if(one%2==1)
    	dt[m+r-4]=1;
	else
 		dt[m+r-4]=0;

 	for(i=7,one=0;i<m+r;i+=9)
	{
  	for(int j=0;j<8;j++)
  	{
    	if(i<m+r)
    	{
    		if(dt[i]==1)
        		one++;
    		i++;
    	}
  	}
	}
	if(one%2==1)
    	dt[m+r-8]=1;
	else
    	dt[m+r-8]=0;

	printf("Hamming code: ");
	for(i=0;i<m+r;i++)
    	printf("%d ", dt[i]);
	printf("\n");
  return 0;
}

