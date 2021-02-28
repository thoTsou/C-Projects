#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
 {
	char x,z[20],answer[5];
	float upoloipo=0,kostos=0,sum=0,resta=0,temp=0,j,t,q=0;
	int y;
	
	do{
		printf("Parakalw eisagete to gramma A an eiste anhlikos,to F an eiste foititis,to E an eiste enhlikas kai to H an eiste hlikiwmenos : \n");
		scanf("%c",&x);	
	}while( x!='A' && x!='F' && x!='E' && x!='H' );
	
	system("cls");
	
	do
	{
	printf("Posa eisitiria xreiazeste (*mporeite na promi8eytite apo 1 mexri kai 4 eisitiria) ? \n");
	scanf("%d",&y);	
	}while(y<1 || y>4);
	
	system("cls");
	
	
	printf("Mporeite na promi8eutite eite eniaio eishthrio a3ias 1.40 euros eite meiwmeno eishthrio a3ias 0.60 euros.Parakalw eisagete thn le3h 'Eniaio' h 'Meiwmeno' analoga me to ti eishthrio 8elete : \n");
	scanf("%s",&z);
	
	if(x=='A' || x=='F' || x=='H')	
	{
		if(strcmp(z,"Eniaio")==0)
		{
			do{
			
		printf("Mporeite na promi8eutite eite eniaio eishthrio a3ias 1.40 euros eite meiwmeno eishthrio a3ias 0.60 euros.Parakalw eisagete Eniaio h Meiwmeno analoga me to ti eishthrio 8elete : \n");
	    scanf("%s",&z);
	      }while(strcmp(z,"Eniaio")==0);
	      
		}
		if(y>=3)
		{
		temp=y*0.6;
		kostos=temp-((temp*5)/100);
	     }
	     
	    if(y<3)
		{
	     kostos=y*0.6;
	    }
	}
	if(x=='E')
	{
		if(strcmp(z,"Meiwmeno")==0)
		{
			do{
			
		printf("Mporeite na promi8eutite eite eniaio eishthrio a3ias 1.40 euros eite meiwmeno eishthrio a3ias 0.60 euros.Parakalw eisagete Eniaio h Meiwmeno analoga me to ti eishthrio 8elete : \n");
	    scanf("%s",&z);
	      }while(strcmp(z,"Meiwmeno")==0);
	      
		}
		if(y==4)
		{
			temp=y*1.4;
			kostos=temp-((temp*10)/100);
		}
		if(y<4)
		{
		kostos=y*1.4;
	     }
		
	}
	
	system("cls");
	
	printf("to kostos twn eisithriwn einai : %.2f euros \n\n\n\n",kostos);
	kostos=(kostos*100);
	
	
	
	do{

	do{
		printf("Parakalw eisagete xrimata \n");
	    scanf("%f",&j);
	}while(j<0.009 || j>2.0);
	
	sum=sum+(j*100);
	printf("Parakalw patiste 'OK' an teleiwsate alliws eisagetai 'R' gia na dwsete ki alla xrimata \n");
	scanf("%s",&answer);
    }while(strcmp(answer,"R")==0);
    
    
    system("cls");
    
    
    if(sum==kostos)
    {
    	resta=0.00;
	}
    if(sum<kostos)
	{
    	upoloipo=(kostos-sum)/100;
    	do{
		
    	printf("Prepei na eisagete akomi %.2f euros \n",upoloipo);
    	printf("Parakalw eisagete xrimata \n");
    	scanf("%f",&t);
    	upoloipo=upoloipo-t;
    	sum=sum+(t*100);
    	if(upoloipo<0.001)
		{
		break;
		}
    	
        }while(sum<kostos);
        
        resta=(sum-kostos)/100;
        
	}
	if( sum>kostos ) 
    {	
	resta=(sum-kostos)/100;
    }

	system("cls");
	
	printf("THANKS FOR YOUR PURCHASE. \n");
	printf("HERE IS THE RECEIPT OF YOUR PURCHASE : \n\n");
	printf("************************************************************************** \n");
	printf("Payment method:Cash \n");
	printf("                         Total tickets bought : %d \n",y);
	if(x=='E')
	{
		q=y*1.4;
		printf("Fair per ticket : 1.40 euros \n");
		if(y==4)
		{
			printf("                               Discount: 10% \n");
		}
		else
		{
			printf("                               Discount: 0% \n");
		}
	}
	else{
	q=y*0.6;
	printf("                             Fair per ticket : 0.60 euros \n");
		if(y>=3)
		{
			printf("                              Discount: 5 %  \n");
		}
		else
		{
			printf("                              Discount: 0 %  \n");
		}
	
    }
    
    
	printf("                    Total price (before discount): %.2f euros  \n",q);
	printf("                 Final price (after discount): %.2f euros \n",kostos/100);
	printf("                    Total euros inserted : %.2f euros \n",sum/100);
	printf("                       Total change : %.2f euros \n",resta);
	printf("***************************************************************************");
	
		return 0;
}
