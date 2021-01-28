#include<stdio.h>
int main()
{
    int N,ptsA=0,ptsB=0,i,j,flag=0;
    scanf("%d",&N);
    int ar[N];
    for(i=0;i<N;i++)
    scanf("%d",&ar[i]);
    
    for(i=0;i<N;i++)
    {
    	flag=0;
        if(i%2==0)      // for player A
        {
            if(ar[i]==1&&(N-i-1)>=4)
            {
                for(j=1;j<=4;j++)
                if(ar[i+j]>10||ar[i+j]==1)
                flag=1;
                
                if(flag==0)
                {
                    printf("Player A scores 4 point(s)\n");
                    ptsA+=4;
                }
            }
            else if(ar[i]==13&&(N-i-1)>=3)
            {
                for(j=1;j<=3;j++)
                if(ar[i+j]>10||ar[i+j]==1)
                flag=1;
                
                if(flag==0)
                {
                    printf("Player A scores 3 point(s)\n");
                    ptsA+=3;
                }
            }
            else if(ar[i]==12&&(N-i-1)>=2)
            {
                for(j=1;j<=2;j++)
                if(ar[i+j]>10||ar[i+j]==1)
                flag=1;
                
                if(flag==0)
                {
                    printf("Player A scores 2 point(s)\n");
                    ptsA+=2;
                }
            }
            else if(ar[i]==11&&(N-i-1)>=1)
            {
                
                if(ar[i+1]>10||ar[i+1]==1)
                flag=1;
                
                if(flag==0)
                {
                    printf("Player A scores 1 point(s)\n");
                    ptsA+=1;
                }
            }
        }
        else
        {
            if(ar[i]==1&&(N-i-1)>=4)
            {
                for(j=1;j<=4;j++)
                if(ar[i+j]>10||ar[i+j]==1)
                flag=1;
                
                if(flag==0)
                {
                    printf("Player B scores 4 point(s)\n");
                    ptsB+=4;
                }
            }
            else if(ar[i]==13&&(N-i-1)>=3)
            {
                for(j=1;j<=3;j++)
                if(ar[i+j]>10||ar[i+j]==1)
                flag=1;
                
                if(flag==0)
                {
                    printf("Player B scores 3 point(s)\n");
                    ptsB+=3;
                }
            }
            else if(ar[i]==12&&(N-i-1)>=2)
            {
                for(j=1;j<=2;j++)
                if(ar[i+j]>10||ar[i+j]==1)
                flag=1;
                
                if(flag==0)
                {
                    printf("Player B scores 2 point(s)\n");
                    ptsB+=2;
                }
            }
            else if(ar[i]==11&&(N-i-1)>=1)
            {
                
                if(ar[i+1]>10||ar[i+1]==1)
                flag=1;
                
                if(flag==0)
                {
                    printf("Player B scores 1 point(s)\n");
                    ptsB+=1;
                }
            }
        }
    }
    
    printf("Player A: %d point(s)\n",ptsA);
    printf("Player B: %d point(s)",ptsB);
    return 0;
}
