#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Menu()
{
	printf("Welcome to our simulator [n_participants: 0] [n_teams: 0]\n\n");
	printf("1) Add Team\n");
	printf("2) Vote for a Winner\n");
	printf("3) Execute simulation and report a winner\n");
}
void Add_Team()
{
	static int a=0;
	a++;
		printf("Welcome to our simulator [n_participants: 0] [n_teams: %d]\n\n",a);
		printf("1) Add Team\n");
		printf("2) Vote for a Winner\n");
		printf("3) Execute simulation and report a winner\n");
}
void Wrong_team(int q)
{
	printf("Invalid Choice\n");
	printf("Welcome to our simulator [n_participants: 0] [n_teams: %d]\n\n",q);
		printf("1) Add Team\n");
		printf("2) Vote for a Winner\n");
		printf("3) Execute simulation and report a winner\n");
}
int largest(int arr[],int n)
{
	int i,j;
	int max=arr[0];
	for(i=0;i<n;i++)
	{
	
		if(arr[i]>max)
		{
			max=arr[i];	
			return i;
		}
	}		
}
void wrong_menu(long int id,int b,int k)
{
	static int l=1;
	l++;
	printf("ID: 00%d\n",id);
	printf("Bet: %d\n",b);
	printf("Insertion failed\n");
	printf("Welcome to our simulator [n_participants: %d] [n_teams: %d]\n\n",l+1,k);
		printf("1) Add Team\n");
		printf("2) Vote for a Winner\n");
		printf("3) Execute simulation and report a winner\n");
}
void New_menu(int id,int b,int k)
{
	static int n=0;
	n++;
	printf("ID: 00%d\n",id);
	printf("Bet: %d\n",b);
	printf("Insertion success\n");
	printf("Welcome to our simulator [n_participants: %d] [n_teams: %d]\n\n",n,k);
		printf("1) Add Team\n");
		printf("2) Vote for a Winner\n");
		printf("3) Execute simulation and report a winner\n");
}
int main()
{
	Menu();
	int choice1,amo_team,i,j,k=0,x,y,counter=0;
	long int ID;
	scanf("%d",&amo_team);
	for(i=0;i<amo_team;i++)
	{
		scanf("%d",&choice1);
		counter++;
		if(choice1==1)
		{
			Add_Team();
		}
		if(counter==amo_team)
		{
			scanf("%d",&choice1);
			if(choice1==1)
				Wrong_team(counter);
		}
	}
	int choice2,count,bet,v,amount=0,r=0,w=0,temp;
	static int num=0;
	num++;
	int player[100];
	for(count=0;count<num;count++)
	{
		scanf("%d",&choice2);
		if(choice2==2)
		{
			player[num];
			for(v=0;v<num;v++)
			{
				scanf("%d",&ID);
				temp=ID;
				player[v]=temp;
				while(ID)
				{
					r=ID%10;
					w++;
					ID/=10;	
				}
				
			}
			if(w==8)
			{
				for(y=0;y<=2;y++)
				{
					scanf("%d",&bet);
					amount++;
					if(amount>2)
						{
							wrong_menu(temp,bet,amo_team);
						}
					else
						New_menu(temp,bet,amo_team);							
				}
			}
			
		}
	}
	int choice3;
	int choice4,c,b,u,amo=0,l=0,h=0,tmp;
	static int m=0;
	m++;
	for(c=0;c<m;c++)
	{
		scanf("%d",&choice3);
		if(choice3==2)
		{
			player[m];
			for(u=0;u<num;u++)
			{
				scanf("%d",&ID);
				tmp=ID;
				player[u]=tmp;
				while(ID)
				{
					l=ID%10;
					h++;
					ID/=10;	
				}
				
			}
			if(h==8)
			{
				for(y=0;y<=2;y++)
				{
					scanf("%d",&b);
					amo++;
					if(amo>2)
						{
							wrong_menu(tmp,b,amo_team);
						}
					else
						New_menu(tmp,b,amo_team);							
				}
			}
			
		}
	}
	scanf("%d",&choice4);
	int teams[amo_team];
	int n=sizeof(teams)/sizeof(teams[0]);
	if(choice4==3)
	{
		srand(time(NULL));
		for(j=0;j<amo_team;j++)
		{
			x=rand()%(amo_team);
			teams[j]=x;	
	 	}
	 	printf("team %d is the winner\n",largest(teams,n));
		for(k=0;k<amo_team;k++)
			printf("teams[%d]=%d\n",k,teams[k]);
			printf("%d",temp);	
	}
	
	

}
