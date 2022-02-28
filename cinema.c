#include <stdio.h>
#include <stdlib.h>


void Movies(  ){
       int film;
       printf(" 1. Harry Potter\n 2. StarWars\n 3. World War Z \n");


            printf("\nChoose the filme you want to see\n");
              scanf("%d", &film);

         while(film) {
                system("cls");
                seat();
         }

}
void seat( ) {
        int mseat;
        int num = 0;


       printf("Enter the seat:  \n");

       printf("\n Seats: \n   1 - 2 - 3 - 4 - 5 \n   6 - 7 - 8 - 9 - 10\n \n\t SCREEN \t\t");
             scanf("%d", &mseat);

            if(mseat > 0 && mseat <= 10) {


                    printf("\nSeat %d was reserved\n", mseat); }

             int newchose;


   for (int c = 1; c <= 22767; c++)
       for (int d = 1; d <= 22767; d++)
       {}
                system("cls");
             printf("\t \n\n\n For continue to payment press 0\n To chose another seat press 1(max 2 seats): \n");
                scanf("%d",&newchose);

                   if(newchose == 0) {
                      system("cls");
                      Payment( );
                   }

                 else if(newchose == 1) {
                   system("cls");
                 int newseat;
                  printf("\n Seats: \n   1 - 2 - 3 - 4 - 5 \n   6 - 7 - 8 - 9 - 10\n \n\t SCREEN \t\t");
                      scanf("%d", &newseat);
                    if(newseat == mseat) {
                         printf("Unavailable seat \n ");
                           for (int c = 1; c <= 22767; c++)
                             for (int d = 1; d <= 22767; d++)
                               {}
                          system("cls");
                          seat();
                    }

                    else if(newseat != mseat) {
                         printf("Seat %d was reserved\n", newseat);
                          for (int c = 1; c <= 22767; c++)
                             for (int d = 1; d <= 22767; d++)
                             {}
                           system("cls");
                         Payment( );
                       }
            }


}
 void Payment(  ){

        int number;
        printf( " \n Insert the number of yours credit card:   " );
         scanf("%d", &number);

              if(number > 0) {
                     printf("Thank you, your payment was approved");
                      ;
                     exit(0);
              }
              else {
                    printf("Invalid credit card");
                    Payment( );

                    printf("\n");
              }

 }


void menu (  ) {
        system("color 6");
         int choice;
         printf("\n Welcome to Menu\n");

         printf("\t 1. Choose Movie: \n\t 2. Avaible sets. \n\t 3. Payment \n\t 4. Exit\n\t" );


           scanf("%d", &choice);
            switch (choice)
            {
            case 1 :
               system("cls");
               Movies( );
                break;
            case 2 :
                system("cls");
               seat( );
                break;
            case 3 :
               system("cls");
               Payment ( );
                  break;
            case 4 :
               exit (0);
                  break;
            }
}

int main(  ){
       int choose;

      printf(" \t\t Welcome to the movie theather \n\n");

         printf("Press 0 to enter the Menu, or 1 to exit  ");
               scanf("%d" , &choose);


              if(choose == 0) {
                   system ("cls");
                   menu( );
              }

              else if( choose == 1) {
                   exit(0);
              }

}
