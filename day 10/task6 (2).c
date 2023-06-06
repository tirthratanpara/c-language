#include <stdio.h>
void main()
{
	int a,b,c,d,e;
	printf("HI I AM SPEAKING FROM  FLIGHT SERVICES \n");
	printf("To book flight press 1 on keypad: \n");
	scanf("%d",&a);
	
	switch(a){
		 case 1:
		 	printf("choose your flight company \n");
		 	printf("press 1 for spicejet \n");
		 	printf("press 2 for emirates \n");
		 	printf("press 3 for air asia \n");
		 	printf("enter your choice :\n");
		 	scanf("%d",&a);
		 	switch(a){
		 		
		 			 		
		 			
		 		case 1:
				  
                    printf("\nyou selected spicejet flight for travelling\n");
		 			printf("\nenter your date of travelling\n");
		 			scanf("%d",&a);
		 			printf("\nAvalible fligts are\n");
		 			printf("1) \nFrom india to london in $ 500 /- \n");
		 			printf("2) \nFrom india to usa in % 900 /-\n");
		 			printf("3) \nFrom india to sweden in $ 600 /-\n");	
                    printf("\nEnter your choice :\n");
					scanf("%d",&c);	
					
					switch(c){
							case 1:
							printf("\nyour flight has been confrimed from india to london\n");
							printf("\nthanks for travelling with us\n");
							break;
						case 2:
							printf("\nyour flight has been confrimed from india to usa\n");
							printf("\nthanks for travelling with us\n");
							break;
					    case 3:
					    	printf("\nyour flight has been confrimed from india to sweden\n");
							printf("\nthanks for travelling with us\n");
							break;
							
					default:
		 		printf("invalid input !!!");
		
						
					}
					break;	 			
		 	    case 2:
				 
				   printf("\nyou selected emirates flight for travelling\n");
		 			printf("\nenter your date of travelling\n");
		 			scanf("%d",&a);
		 			printf("\nAvalible fligts are\n");
		 			printf("\n1) From india to nepal in $ 600/- \n");
		 			printf("\n2) From india to bhutan in $ 200/-\n");
		 			printf("\n3) From india to china in $ 500 /-\n");
					 printf("\nEnter your choice :\n");
					scanf("%d",&d);	
					switch(d)
					{
                           	case 1:
							printf("\nyour flight has been confrimed from india to nepal\n");
							printf("\nthanks for travelling with us\n");
							break;
						case 2:
							printf("\nyour flight has been confrimed from india to bhutan\n");
							printf("\nthanks for travelling with us\n");
							break;
					    case 3:
					    	printf("\nyour flight has been confrimed from india to china\n");
							printf("\nthanks for travelling with us\n");
							break;
				default:
		 		printf("invalid input !!!");
							
						
					}	 			
				break;
				case 3:
				
				printf("\nyou selected air aisa flight for travelling\n");
		 			printf("\nenter your date of travelling\n");
		 			scanf("%d",&a);
		 			printf("\nAvalible fligts are\n");
		 			printf("\n1) From india to indonaisa in $ 100/-\n");
		 			printf("\n2) From india to pakistan in $ 300/-\n");
		 			printf("\n3) From india to paris in $ 603/-\n");
					printf("\nEnter your choice :\n");
					scanf("%d",&e);	
					switch(e)
					{
							case 1:
							printf("\nyour flight has been confrimed from india to indonasia\n");
							printf("\nthanks for travelling with us\n");
							break;
						case 2:
							printf("\nyour flight has been confrimed from india to pakistan\n");
							printf("\nthanks for travelling with us\n");
							break;
					    case 3:
					    	printf("\nyour flight has been confrimed from india to paris\n");
							printf("\nthanks for travelling with us\n");
							break;
				default:
		 		printf("invalid input !!");
		
				   }	 				 		
		 	
		 	break;
	}
	        break;
		 	default:
		 		printf("invalid input !");
		 		
	
		
		
	
}
}
	
	
