
#include<stdio.h>
#include<conio.h>
#include <string.h>


void information(char *name,char *age,char *phone)
{
    printf("YOUR NAME IS : %s \n",name);
  printf("YOUR AGE IS : %d\n",age);
  printf("YOUR number IS : %s\n",phone);



}


void select (char *name,char *age,char *phone)
{


int num;
printf("\t\t\t\tWELLCOME TO FOOD BD\n\n");
printf("\t\tMAILING LIST MANU :-- \n\n\t\t1.CHEACK YOUR INFORMATION\n\t\t2.DELETE YOUR ACCOUNT\n\t\t3.OUR FOOD\n\t\t4.COMPLAINT\n\t\t5.QUIT\n\n");
printf("CHOSE YOUR OPTION : ");
fgetc(stdin);
scanf("%d",&num);


if(num==1)
{
  information(name,age,phone);
  printf("\n\n");

}

 if(num==2)
{
  int del;


  printf("YOUR NAME IS : %s \n",name);
  printf("YOUR AGE IS : %d\n",age);
  printf("YOUR number IS : %s\n\n\n",phone);

  printf("Do YOU WANT TO DELETE YOUR INFORMATION:\n\t\t1.YES\n\t\t2.NO \n");
  scanf("%d",&del);
  (del==1)?printf("WE ARE DELETED YOUR INFORMATION\n"): printf("THANKF FOR STAY WITH US\N");
  printf("\n\n");

}

if(num==3)
{
    printf("\tSERCH YOUR  FOOD :--\n\n\t1.FISH\n\t2.RICE\n\t3.MEAT\n\n");
    int food;
    printf("PLZ CHOSE YOUR FOOD: ");
    scanf("%d",&food);

    printf("\n\n");

    if(food==1)
    {
        printf("THERE ARE MANY KIND OF FISH TO US,PLZ SELECT YOUR FISH\n\n");
        printf("FISH NAME :-- \n\t1.ELISSHA\n\t2.TALAPOYA\n\t3.SIGREE\n\n");
        int fish;
        printf("ENTER YOUR SELECTED FISH NUMBER : ");
        scanf("%d",&fish);
        if(fish==1)
        {
            printf("ELISSHA PER KG 5000 TK\n\t\t1.BUY\n\t\t2.NOT INTERESTED\n");
            int buy;
            printf("IF YOU WANT TO BUY PRESS 1,IF DONT WANT PRESS 2 : ");
            scanf("%d",&buy);
            if(buy==1)
            {
                printf("THANK YOU FOR YOUR ORDER ,WE ARE COMMITED TO SUPPLY QUICKLY");
            }else if(buy==2)
            {
                printf("WE HOPE,YOU ARE SATISFIED ON OUR SERVICE,COME AGAIN MPLZ\n");

            }else
            {
                printf("PLZ,CHOSE A RIGHT NUMBER\n\n");
            }
        }else if(fish==2)
        {
           printf("TALAPOYA PER KG 200 TK\n\t\t1.BUY\n\t\t2.NOT INTERESTED\n");

            printf("IF YOU WANT TO BUY PRESS 1,IF DONT WANT PRESS 2 : ");
            int buy;
            scanf("%d",&buy);
            if(buy==1)
            {
                printf("THANK YOU FOR YOUR ORDER ,WE ARE COMMITED TO SUPPLY QUICKLY");
            }else if(buy==2)
            {
                printf("WE HOPE,YOU ARE SATISFIED ON OUR SERVICE,COME AGAIN MPLZ\n");

            }else
            {
                printf("PLZ,CHOSE A RIGHT NUMBER\n\n");
            }


        }else if(fish==3)
        {
            printf(" SIGREE PER KG 1000 TK\n\n\t\t1.BUY\n\t\t2.NOT INTERESTED\n");
            int buy;
           printf("IF YOU WANT TO BUY PRESS 1,IF DONT WANT PRESS 2 : ");
            scanf("%d",&buy);
            if(buy==1)
            {
                printf("THANK YOU FOR YOUR ORDER ,WE ARE COMMITED TO SUPPLY QUICKLY");
            }else if(buy==2)
            {
                printf("WE HOPE,YOU ARE SATISFIED ON OUR SERVICE,COME AGAIN MPLZ\n");

            }else
            {
                printf("PLZ,CHOSE A RIGHT NUMBER\n\n");
            }
        }

    } else if(food==2)
        {
           printf("THERE ARE MANY KIND OF RICE TO US to us,plz select what you need\n\n");
        printf("RICE NAME :-- \n\t1.BANGLADESHI\n\t2.INDIAN\n\t3.PAKISTANI\n\n");
        int rice;
        printf("ENTER A SELECTED NUMBER : ");
        scanf("%d",&rice);
        if(rice==1)
        {
            printf("BANGLADESHI PER FLATE 70 TK\n\n\t\t1.BUY\n\t\t2.NOT INTERESTED\n");
            printf("IF YOU WANT TO BUY PRESS 1,IF DONT WANT PRESS 2 : ");
            int buy;
            scanf("%d",&buy);
            if(buy==1)
            {
                printf("THANK YOU FOR YOUR ORDER ,WE ARE COMMITED TO SUPPLY QUICKLY");
            }else if(buy==2)
            {
                printf("WE HOPE,YOU ARE SATISFIED ON OUR SERVICE,COME AGAIN MPLZ\n");

            }else
            {
                printf("PLZ,CHOSE A RIGHT NUMBER\n\n");
            }
        }else if(rice==2)
        {
           printf("INDIAN RICE PER FLATE 60 TK\n\t\t1.BUY\n\t\t2.NOT INTERESTED\n");
            int buy;
            printf("IF YOU WANT TO BUY PRESS 1,IF DONT WANT PRESS 2 : ");
            scanf("%d",&buy);
            if(buy==1)
            {
                printf("THANK YOU FOR YOUR ORDER ,WE ARE COMMITED TO SUPPLY QUICKLY");
            }else if(buy==2)
            {
                printf("WE HOPE,YOU ARE SATISFIED ON OUR SERVICE,COME AGAIN PLZ\n");

            }else
            {
                printf("PLZ,CHOSE A RIGHT NUMBER\n\n");
            }

        }else if(rice==3)
        {
            printf("PAKISTANI RICE PER FLATE 80 TK\n\t\t1.BUY\n\t\t2.NOT INTERESTED\n");
            int buy;
            printf("IF YOU WANT TO BUY PRESS 1,IF DONT WANT PRESS 2 : ");
            scanf("%d",&buy);
            if(buy==1)
            {
                printf("THANK YOU FOR YOUR ORDER ,WE ARE COMMITED TO SUPPLY QUICKLY");
            }else if(buy==2)
            {
                printf("WE HOPE,YOU ARE SATISFIED ON OUR SERVICE,COME AGAIN PLZ\n");

            }else
            {
                printf("PLZ,CHOSE A RIGHT NUMBER\n\n");
            }
        }

        }else if(food==3)
        {

             printf("THERE ARE MANY KIND OF MEAT TO US ,PLZ SELECT YOUR CHOOSEN NUMBER\n\n");
        printf("MEAT NAME :-- \n\t1.BEAF\n\t2.CHICKEN\n\t3.GOAT\n\n");
        int mett;
        printf("ENTER YOUR CHOOSEN MEAT NUMBER:  ");
        scanf("%d",&mett);
        if(mett==1)
        {
            printf("BEAF PER FLATE 500 TK\n\t\t1.BUY\n\t\t2.NOT INTERESTED\n");
            printf("IF YOU WANT TO BUY PRESS 1,IF DONT PRESS PRESS 2 : ");
            int buy;
            scanf("%d",&buy);
            if(buy==1)
            {
                printf("THANK YOU FOR YOUR ORDER ,WE ARE COMMITED TO SUPPLY QUICKLY");
            }else if(buy==2)
            {
                printf("WE HOPE,YOU ARE SATISFIED ON OUR SERVICE,COME AGAIN PLZ\n");

            }else
            {
                printf("PLZ,CHOSE A RIGHT NUMBER\n\n");
            }
        }else if(mett==2)
        {
           printf("CHICKEN PER FLATE 200 TK\n\t\t1.BUY\n\t\t2.NOT INTERESTED\n");
            int buy;
            printf("IF YOU WANT TO BUY PRESS 1,IF DONT WANT PRESS 2 : ");
            scanf("%d",&buy);
            if(buy==1)
            {
                printf("THANK YOU FOR YOUR ORDER ,WE ARE COMMITED TO SUPPLY QUICKLY");
            }else if(buy==2)
            {
                printf("WE HOPE,YOU ARE SATISFIED ON OUR SERVICE,COME AGAIN PLZ\n");

            }else
            {
                printf("PLZ,CHOSE A RIGHT NUMBER\n\n");
            }

        }else if(mett==3)
        {
            printf("GOAT PER FLATE 700 TK\n\t\t1.BUY\n\t\t2.NOT INTERESTED\n");
            int buy;
           printf("IF YOU WANT TO BUY PRESS 1,IF DONT PRESS PRESS 2 : ");
            scanf("%d",&buy);
            if(buy==1)
            {
                printf("THANK YOU FOR YOUR ORDER ,WE ARE COMMITED TO SUPPLY QUICKLY");
            }else if(buy==2)
            {
                printf("WE HOPE,YOU ARE SATISFIED ON OUR SERVICE,COME AGAIN PLZ\n");

            }else
            {
                printf("PLZ,CHOSE A RIGHT NUMBER\n\n");
            }

        }

        }
}


 if(num==4)
{
    printf("IF YOU HAVE ARE COMPLAIN  ABOUT OUR SERVICEPLZ PUT HERE\n");
    printf(" FOR SUBMIT YOUR COMLAIN PRESS '/'\n");

    char cmp[100];
    scanf("%[^/]s",cmp);
    printf("\n\n");
    puts(cmp);
    printf("\n\n");

}

 if(num==5)
{
    printf("THANK ,VISIT AGAIN");
    printf("\n\n");

}




 if(num>5){
printf("PLZ SELECT A RIGHT NUMBER\n");
}




}




int main()
{

   char phone[900];
   char password[200] ;
   char repassword[200] ;
   char name[200] ;

   int age,login;



printf("WELL COME TO OUR SERVICE\nIF YOU HAVE A ACCOUNT PLZ LOGIN,IF DONT HAVE A ACCOUNT PLZ SING UP : \n\n");
printf("\t\t1.LOG IN\n\t\t2.SING UP\n\n");
printf("SELECT YOUR STATUS : ");
scanf("%d",&login);



if(login==2)
{
   fgetc(stdin);
   printf("ENTER YOUR NAME :  ");
   gets(name);

   printf("ENTER YOUR AGE :  ");
   scanf("%d",&age);
   fgetc(stdin);

   if(age<=18)
   {
       printf("SORRY, OUR SERVICE NOT AVAILABLE FOR UNADULT");
       goto jump;
     }


   printf("ENTER YOUR PHONE NUMBER FOR CREAT A NEW ACCOUNT :  ");
   gets(phone);


   if(!(strlen(phone)==11))
   {
       printf("PLZ,ENTER A CORRECT NUMBER\N");
          goto jump;
   }



   int p;
   for(p=0;phone[p]!='\0';p++)
   {
      if(!(phone[p]>='0' && phone[p]<='9'))

      {
          printf("PLZ,ENTER A CORRECT NUMBER\N");
          goto jump;
      }
   }







   printf("ENTER  A PASSWORD:  ");
   scanf("%s",password);
   printf("ENTER PASSWORD AGAIN:  ");
   scanf("%s",&repassword);

   if(strcmp(password,repassword)==0)
   {
       printf("\n\n\t\tWEllCOME MR.%s \n\t YOU HAVE  CTRATED A NEW ACCOUND ON FOOD BD\n\tTHANK FOR JOIN WITH US!!\n\n\n\n\n",name);


  select(name,age,phone);
      int remenu;

 do
 {

select(name,age,phone);
  printf("\nTO GO MENU ENTER 1 : ");
  scanf("%d",&remenu);
 }while(remenu);




}else{

printf("PASSWORD OR NUMBER IS INCORRECT");

}

jump:
    {
        printf("\nTHANKS,PLZ GIVE FEED BACK ABOUT  OUR SERVICE\n");
    }
}



if(login==1)
{

  char phone[200];
  char pass[200];
  printf("GIVE YOUR PHONE : ");
   scanf("%s",phone);
   printf("GIVE YOUR PASSWORD : ");
         scanf("%s",pass);


        if ((strcmp(phone,"01891671904")==0) && (strcmp(pass,"CSE232")==0))

        {

            int remenu;

 do
 {

select(name,age,phone);
  printf("\nTO GO MENU ENTER 1 : ");
  scanf("%d",&remenu);
 }while(remenu);



printf("THANKS,PLZ GIVE FEED BACK ABOUT SERVICE\n");
} else
{
    printf("NUMBER OR PASSWORD IS INCORRECT \n\n");
}


}


getch();
return 0;

}


