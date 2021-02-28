#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int REGISTER(char on[100][20],char ep[100][20] ,int v[100][5] , int i);
int EPILOGES(char answer[10],char on[100][20],char ep[100][20],int v[100][5],int i);
int LOGIN(char on[100][20],char ep[100][20] ,int i);
int pass(char username[20]);

int main() 
{
char epilogi[10],on[100][20],ep[100][20],answer[10];
int v[100][5];
int i=0;

do{

  do
   {	
        printf("Patiste olografws 'REGISTER' gia na kanete eggrafi sto systima ,patiste olografws 'LOGIN' gia na synde8eite,alliws patiste Q gia na aposyndetheite \n\n");
        scanf("%s",&epilogi);
            if(strcmp(epilogi,"REGISTER") ==0)
               {
	             REGISTER(on,ep,v,i);
	             system("cls");
	             LOGIN(on,ep,i);
	           } 	
            if(strcmp(epilogi,"LOGIN") ==0)
            {
	           LOGIN(on,ep,i);
	        } 		
    }while((strcmp(epilogi,"REGISTER") != 0) && (strcmp(epilogi,"LOGIN") != 0) && (strcmp(epilogi,"Q") != 0));

system("cls");

   if(strcmp(epilogi,"Q") != 0)
   {
   
          do 
         {
	           printf("Dwste mia apo tis parakatw entoles grafwntas to onoma toys pws akrivws einai: \n\n");
	           printf("Modify\n");
	            printf("View\n");
	           printf("Search\n");
	           printf("Sort\n");
	           printf("EXIT\n");
	
	          scanf("%s",answer);
	
	        EPILOGES(answer,on,ep,v,i);
	        
	
         }while((strcmp(answer,"EXIT") != 0));
        system("cls"); 
   }
   
   i=i+1;
   
 
  }while(strcmp(epilogi,"Q") != 0);


	return 0;
}



int REGISTER(char on[100][20],char ep[100][20] ,int v[100][5],int i)
{
	char epwnumo[20],onoma[20];
	
	printf("Dwse epwnumo\t");
	scanf("%s",&epwnumo);
	strcpy(ep[i],epwnumo);
	
	
	printf("Dwse onoma\t");
	scanf("%s",&onoma);
	strcpy(on[i],onoma);
	
	printf("Dwse ilikia\t");
	scanf("%d",&v[i][0]);
	
	printf("Dwse vathmo sthn glwssa programmatismou C \t");
	scanf("%d",&v[i][1]);
	
	printf("Dwse vathmo sthn glwssa programmatismou JAVA \t");
	scanf("%d",&v[i][2]);
	
	printf("Dwse vathmo sthn glwssa programmatismou C++ \t");
	scanf("%d",&v[i][3]);
	
	
	v[i][4]=(v[i][1]+v[i][2]+v[i][3])/3;
	
	
	return 0;
}




int LOGIN(char on[100][20],char ep[100][20] ,int i)
{
char username[20],password[20];

    do{
	printf("eisagete username\t");
	scanf("%s",&username);
    }while (strcmp(username,ep[i]) != 0);
    
	pass(username);	
	 
    do{
	printf("eisagete password\t");
	scanf("%s",&password);
    }while (strcmp(password,username) != 0);
    
    
	return 0;
}

int pass(char username[20])
{
	 int k=0;
	
	
	 for(k=0;k<20;k++)
	 {
    	if((k%2) != 0 && username[k]!='\0')
    	{
        username[k] = username[k] - 32;
	  }
    }
    
    printf("\n");
	   
	return 0;
}


int EPILOGES(char answer[10],char on[100][20],char ep[100][20],int v[100][5],int i )
{
	int x,k=0,ag,j=0,va1,va2,va3,hold;
	char y,z,holdc[20]="hold",hold2[20]="cloud",newep[20],newn[20],q;
	
	if(strcmp(answer,"Modify") == 0)
	{
		do
	     {
		    printf("1.Epwnumo : %s \n",ep[i]);
		     printf("2.Onoma : %s \n",on[i]);
		     printf("3.ilikia : %d \n",v[i][0]);
		      printf("4.vathmos sthn glwssa C : %d \n",v[i][1]);
		      printf("5.vathmos sthn glwssa JAVA : %d \n",v[i][2]);
	         	printf("6.vathmos sthn glwssa C++ : %d \n",v[i][3]);
		 
	          printf("Epilekse enan apo tous ari8mous (1-6) gia na tropopoiisete to antistoixo pedio alliws patiste 0 \n\n");
	           scanf("%d",&x);
	    
	     
		      if(x==1)
	          {
	           printf("Dwste neo epwnumo : \t\n");
		      scanf("%s",&newep);
		      strcpy(ep[i],newep);
		      
			  
		      }
		       if(x==2)
	          {
	          printf("Dwste neo onoma : \t\n");
		      scanf("%s",&newn);
		      strcpy(on[i],newn);
			  	
		     }
		     
		     if(x==3)
	          {
	          printf("Dwste nea ilikia : \t\n");
		      scanf("%d",&ag);
			  	v[i][0]=ag;
		     }
		     
		     
		      if(x==4)
	         {
	          printf("Dwste neo vathmo sthn glwssa C : \t\n");
		     scanf("%d",&va1);
		     v[i][1]=va1;
		     v[i][4]=(va1+v[i][2]+v[i][3])/3;
			 	
		    }
		     if(x==5)
	        {
	         printf("Dwste neo vathmo sthn glwssa JAVA : \t\n");
		     scanf("%d",&va2);
			 	v[i][2]=va2;
			 	v[i][4]=(va2+v[i][1]+v[i][3])/3;
		    }
		    if(x==6)
	       {
	        printf("Dwste neo vathmo sthn glwssa C++ : \t\n");
		    scanf("%d",&va3);
				v[i][3]=va3;
				v[i][4]=(va3+v[i][1]+v[i][2])/3;
		   }
		   
	    }while(x!=0);
	    
	    system("cls");
	}
	
	if(strcmp(answer,"View") == 0)
	{
	  for(k=0;k<=i;k++)
	  {
	  	printf("Epwnumo : %s \n",ep[k]);
	  	printf("Onoma : %s \n",on[k]);
	  	printf("ilikia : %d \n",v[k][0]);
	  	printf("vathmos sthn glwssa C : %d \n",v[k][1]);
	  	printf("vathmos sthn glwssa JAVA : %d \n",v[k][2]);
	  	printf("vathmos sthn glwssa C++ : %d \n",v[k][3]);
	  	printf("\n");
	  	
	  }	
	  printf("sunoliko plithos foititwn poy exoyn egrafei : %d \n",i+1);
	  
	}
	
	if(strcmp(answer,"Search") == 0)
	{
	printf("Dwste to arxiko gramma tou epwnumou tou atomou gia to opoio kanete anazitisi:");
	printf("\n");
	scanf(" %c",&y);	
	
	   for(k=0;k<(i+1);k++)
	   {
	   	    q=ep[k][0];
	   	    
	   	   if(y == q)
	   	   {
	   	   	printf("epwnumo : %s \n",ep[k]);
	       	printf("onoma : %s \n",on[k]);
	        printf("mesos oros vathmwn : %d \n",v[k][4]);
		     printf("\n");	
		   }
	   }
	}
	
	if(strcmp(answer,"Sort") == 0)
	{
	
	for(k=1;k<(i+1);k++)
	   {
	   	  for (j=0;j<i;j++)
	   	  {
	   	    if(v[j][4]<v[j+1][4])
			   {
			   	hold=v[j+1][4];
			   	v[j+1][4]=v[j][4];
			   	v[j][4]=hold;
			   	
			   	strcpy(holdc,on[j+1]);
			   	strcpy(on[j+1],on[j]);
			   	strcpy(on[j],holdc);
			   	
			    strcpy(hold2,ep[j+1]);
			   	strcpy(ep[j+1],ep[j]);
			   	strcpy(ep[j],hold2);
			   	
				}	
		  }
	   }
	for(k=0;k<(i+1);k++)
	{
		printf("epwnumo : %s \n",ep[k]);
		printf("onoma : %s \n",on[k]);
		printf("mesos oros vathmwn : %d \n",v[k][4]);
		printf("\n");			
	}   
	
	}
	
	
	return 0;
}

