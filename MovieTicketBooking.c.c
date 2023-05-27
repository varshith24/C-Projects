#include<stdio.h>
void theatre()
{
	printf("\n");
	int n;
	printf("Select your favourite theatre:\n");
	printf("1.Cinepolis-PVPSquare mall\n");
	printf("2.INOX Urvasi,complex\n");
	printf("3.INOX LEPL,patamata\n");
	printf("4.PVR:Ripples,vijayawada\n");
	printf("5.Cinepolis-Power one mall,vijayawada\n");
	printf("Enter your choice=");
	scanf("%d",&n);
		if(n==1)
			{
				printf("Cinepolis-PVPSquare mall is selected\n");
			}
		else if(n==2)
			{
				printf("INOX Urvasi,complex is selected\n");
			}
		else if(n==3)
			{
				printf("INOX LEPL,patamata is selected\n");
			}
		else if(n==4)
			{
				printf("PVR:Ripples,vijayawada is selected\n");
			}
		else if(n==5)
			{
				printf("Cinepolis-Power one mall,vijayawada is selected\n");
			}
		else
		{
			printf("Invalid statement");
			theatre();
		}
}//thetre
void movie()
{
	int n;
	printf("Select movie:\n");
	printf("1.AKHANDA\n");
	printf("2.Most Eligible Bachelor\n");
	printf("3.Spiderman-No way home\n");
	printf("4.Vakeel Saab\n");
	printf("5.RRR\n");
	printf("Enter Movie you want to watch=");
	scanf("%d",&n);
        if(n==1)
			{
				printf("AKHANDA movie is selected\n");
			}
		else if(n==2)
			{
				printf("Most Eligible Bachelor is selected\n");
			}
		else if(n==3)
			{
				printf("Spiderman-No way home is selected\n");
			}
		else if(n==4)
			{
				printf("Vakeel Saab is selected\n");
			}
		else if(n==5)
			{
				printf("RRR is selected\n");
			}
		else
			{
				printf("Invalid choice try again\n");
				movie();
			}
}
void time()
{
	int n;
	printf("Select the Time\n");
	printf("1.Noon Show-11:00\n");
	printf("2.MATINEE-2:30\n");
	printf("3.FIRST SHOW-6:45\n");
	printf("4.SECOND SHOW-10:00\n");
	printf("Enter your time=");
	scanf("%d",&n);
		if(n==1)
			{
				printf("Noon Show-11:00 show is selected\n");
			}
		else if(n==2)
			{
				printf("MATINEE-2:30 show is selected\n");
			}
		else if(n==3)
			{
				printf("FIRST SHOW-6:45 show is selected\n");
			}
        else if(n==4)
			{
				printf("SECOND SHOW-10:00 show is selected\n");
	        }
		else
			{
				printf("Invalid choice try again\n");
				time();
			}
}
int people()
{
	int n,i,j,x;
	printf("Enter noof tickets=");
	scanf("%d",&n);
	printf("Select the seats from below:\n");
	int arr[101];
	/*printf("1 2      3 4\n");
	printf("5 6      7 8\n");
	printf("9 10     11 12\n");
	printf("13 14    15 16\n");
	printf("17 18    19 20\n");
	printf("21 22    23 24\n");*/
	for(i=1;i<=100;i=i+5)
	{
		printf("%d  %d   %d  %d  %d\n",i,i+1,i+2,i+3,i+4);
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("****");
		}
		printf("\n\tSCREEN\n");
		
	}
	for(i=0;i<=101;i++)
	{
		arr[i]=0;
	}
	printf("Enter your favaorite seats=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if( x<=0 && x>101)
		{
			printf("Invalid Chioce\nEnter again\n");
			people();
		}
		else
		{
			arr[x]=x;
		} 
	}
	for(j=0;j<=100;j++)
		{
			if(arr[j]>0)
		    printf("%d ",arr[j]);	
		}
	printf(" These seats are reserved\n");
	return n;
}
int cost(int n)
{
	int ans;
	printf("Cost of each ticket is 110\n");
//	printf("Total noof people:");
	//scanf("%d",&n);
	ans=n*110;
	printf("Ticket BILL=%d\n",ans);
	return ans;
}
int sidemenu()
{
	int n,x,ans;
	printf("\nEnter any sidemenu:\n");
	printf("1.Burgur-$100\n");
	printf("2.Pizza-$150\n");
	printf("3.Samosa-$50\n");
	printf("4.Popcorn-$80\n");
	printf("5.Sandwiches-$60\n");
	printf("6.Nothing Needed\n");
	printf("Enter your choice:");
	scanf("%d",&n);
	printf("Enter Quantity:");
	scanf("%d",&x);
		if(n==1)
			{
				ans=x*100;
				printf("Burgur is selected and total cost is=%d\n",x*100);
			}
		else if(n==2)
			{
				ans=x*150;
				printf("Pizza is selected and total cost is=%d\n",x*150);
			}
		else if(n==3)
			{
				ans=x*50;
				printf("Samosa is selected and total cost is=%d\n",x*50);
			}
		else if(n==4)
			{
				ans=x*80;
				printf("popcorn is selected total cost is=%d\n",x*80);
	        }
	    else if(n==5)
	    	{
	    		ans=x*60;
	    		printf("Sandwiches are selected total cost is =%d\n",x*60);
			}
		else if(n==6)
		{
			return;
		}
		else 
			{
				printf("Invalid choice try again\n");
				sidemenu();
			}
	return ans;
}
void refund(int n)
{
	int x,ans,a,res;
	printf("If money should be Refunded there Will be decrease of 10 percent\n");
	printf("Enter 1 to proceed or 0 to leave=");
	scanf("%d",&x);
	if(x==1)
	{
		ans=(n*10)/100;
		res=n-ans;
		printf("Decreased Amount is=%d\n",ans);
		printf("Returning amount is=%d\n",res);
		printf("Will be credited by Evening\n");
	}
	else
	{
	      return;
	}
}
int main()
{
	int a,c,ans,res,n,m;
	printf("****VARSHITH PIRACY****\n");
	theatre();
	movie();
	time();
	n=people();
	ans=cost(n);
	res=0;
	printf("If you want any sidesnacks Enter 1 else any number=");
	scanf("%d",&m);
	if(m==1)
	{
	   res=sidemenu();	
	}
	a=ans+res;
	printf("Total Bill=%d\n",ans+res);
	printf("If you want any refund Enter 1 else any number=");
	scanf("%d",&c);
	if(c==1)
	{
		refund(a);
	}
	printf("*****THANKYOU*****\n");
	printf("You can give review in The website\n");
	return 0;
}
