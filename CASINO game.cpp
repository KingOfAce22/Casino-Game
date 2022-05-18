#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<conio.h>
using  namespace std;
void rules();

int main()
{
    string playername;
    int balance;
    int bettingamt,dice,guess;
    char choice;
    cout<<" \t \t************************************\t  "<<endl;
    cout<<" \t \t **********************************\t   "<<endl;
    cout<<" \t \t *     $$ WELCOME TO CASINO $$    *\t   "<<endl;
    cout<<" \t \t *       ( TRY YOUR LUCK )        *\t   "<<endl;
    cout<<" \t \t *                                *\t   "<<endl;
    cout<<" \t \t **********************************\t   "<<endl;
    cout<<" \t \t************************************\t  "<<endl;
    cout<<" Enter the playername -->";
    getline(cin,playername);
    cout<<" "<<endl;
    cout<<" how much money you  want to deposit--$";
    cin>>balance;
    do
    {
     system("CLS");
       rules();
             cout<<"\t  LETS START THE GAME "<<playername<<endl;
            cout<<"\t ENTER YOUR BETTING AMOUNT-->$ ";
            cin>>bettingamt;
            if(bettingamt>balance)
            {
                cout<<"\t betting amount should not more than your balance"<<endl;
                cout<<"  "<<endl;
                cout<<"  RE-ENTER YOUR BETTING AMOUNT-->$ ";
                cin>>bettingamt;
            }
            else if(bettingamt<1)
            {
                cout<<"\n\t minimum betting amount is--$2 "<<endl;
                cout<<"  "<<endl;
                cout<<"  RE-ENTER YOUR BETTING AMOUNT-->$ ";
                cin>>bettingamt;
            }
            else
            {
                cout<<" \n choose a number between 0 to 10-->";
                cin>>guess;
                if(guess>10 && guess<1)
                {
                    cout<<"\n\t number should be in between 0-10"<<endl;
                    cout<<""<<endl;
                    cout<<" re-enter your number--";
                    cin>>guess;
                }
            }

     srand(time(0));

         dice=(rand()%10)+1;
        if(dice==guess)
        {
            cout<<"\n\t\t\t\t  CONGRATS!!!!"<< "\n\t\t\t *** YOU WON THIS GAME***"<<endl;
                balance=balance+(bettingamt*10);
            cout<<"\n\t\t YOUR TOTAL BALANCE IS--"<<balance<<endl;
        }
        else
        {
            cout<<"\n\t\t  YOU LOSE!!!!!  "<<"\n\t *******BETTER LUCK NEXT TIME*******  "<<endl;
            balance=balance-bettingamt;
            cout<<"\n your current BALANCE is-- "<<balance<<endl;

            cout<<"\n THE WINNING NUMBER IS--"<<dice<<endl;
        }


     if(balance==0){
    cout<<" \t\t YOU HAVE NOT SUFFICIENT BALANCE "<<endl;
    cout<<"\t\t    YOU HAVE NO MONEY TO PLAY  "<<endl;
    cout<<" \t\t ***********COME AGAIN********** "<<endl;
    cout<<" "<<endl;
      break;
     }
     cout<<"\n\t do you want to play again(y/n)--";
        cin>>choice;
    }while(choice=='y'||choice=='Y');
    cout<<"\t\t your final balance is==$  "<<balance<<endl;
    return 0;
}
void rules()
{
    cout<<"\t\t\t\t***************************************** "<<endl;
    cout<<"\t\t\t\t-->           GAME RULES              <-- "<<endl;
    cout<<"\t\t\t\t***************************************** "<<endl;
    cout<<"" <<endl;
    cout<<"\t 1. Choose number between 1 to 10 "<<endl;
    cout<<"\t 2. Winning amount will be 10 times of betting amount "<<endl;
    cout<<"\t 3. Loose amount will be betting amount "<<endl;
    cout<<"\t 4. You can leave a game any time "<<endl;
    cout<<""<<endl;


}
