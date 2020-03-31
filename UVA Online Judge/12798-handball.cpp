# include <stdio.h>
int a[100];
int main()
{

    int N,M,i,j,count=0;

    while(scanf("%d %d",&N,&M))!=EOF
    {
        for(i=0;i<N;i++)
        {
            for(j=0;j<M;j++)
            {
                scanf("%d",&a[i]);
            }
        }
        j=0;
        for(i=0;i<N;i++)
        {
           if(a[i]>0)
                j++;
           }
           if(j==M)
             count++;



}


        printf("%d\n",count);


    return 0;


}


