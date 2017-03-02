/*
 * File:   main.cpp
 * Author: David Castellanos
 * Created on February 20, 2017, 10:09 AM
 * Description:A Text adventure that includes choice that lead to failure 
 * or success
 * (may contain slight issues in tense or grammar)
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include "BOSSMAN.h"
#include "Decisions.h"
#include "Namegrabber.h"
#include "Totaltax.h"


using namespace std;

/*
 *
 */
float salestax(float,float,float);
void gameover();   
float sumArray(float[], float);
int main(int argc, char** argv) {
    const int COLS=9; 
    //the constant for columns in the array in the code
    float final;
    //the final total price with tax and all
    float prices_2[COLS];
    //the array for the sumo's order
    float tax=0.10f;//tax
    //a constant for the tax of all the price inputs 
    float p,t,total_a;
    //price,total
    char name[256];
    //for the name of the user
    int choice;
    //the data that allow the user to make progress through the story
     
    //the function that shows a toilet and end the game with failure
    
    //calculates for the sales tax of all the prices
    
    cout<<"FIRST NAME..."<<endl;
    //the user is asked for his first name 
    cin.get (name, 256);
   //in name
  cout<<name<<".....\n\n ....Soldier of Fortune, American Hero,";
  cout<<"employee at a 7/11?\n Yes folks, what many of you may not know is that"<<endl;
  cout<<name<<" is also the sales clerk of a 7/11 (true story....maybe),but you will"<<endl;
  cout<<"be given the opportunity to step into your shoes for a while and make decisions"<<endl;
  cout<<"the will alter the very fabric of your minimum pay ruled 7/11 duties."<<endl;
  cout<<"Make CAREFUL Decisions, and be KIND, and you will make it out unscathed."<<endl;
  cout<<"Stray from the path of virtue and you will meet a toilet scrubbing nightmare!!!!"<<endl;
  cout<<"\n\n\nSTART!!!!!"<<endl;
  //the user is presented with an intro to the story and program
  cout<<name<<"...."<<name<<"....."<<name<<"! This is no time to be asleep, you"<<endl;
  cout<<"have work to do."<<endl;
  cout<<"1) Wake up and get off the counter to get back to work..."<<endl;
  cout<<"2) Meh, sleep is better, tell Mr. Bossman to shove it..."<<endl;
  cout<<"choose # please...."<<endl;
  cin>>choice;
  //in choice for the first decision
      if     (choice==1){
              //successful answer
              cout<<"Your eyes heavy, your mind is off in lala land, but you get"<<endl;
              cout<<"a bad feeling in back of you head. In a sudden burst of"<<endl;
              cout<<"realization, you remember your at work and that your "<<endl;
              cout<<"boss is an evil tyrant. He often holds toilet duty over "<<endl;
              cout<<"your head.....DUTY not dooo.... anyways, you just dont "<<endl;
              cout<<"wanna scrub the toilets. You grab the nearest water "<<endl;
              cout<<"bottle and splash a great amount of liquid into your"<<endl;
              cout<<"face. You look around and notice your boss giving you a "<<endl;
              cout<<"pocessed stare. His black souless eyes spell out a "<<endl;
              cout<<"million evil things in the next few minutes if you don't "<<endl;
              cout<<"get back to work."<<endl;
              cout<<"You get off the counter and right to your register. You normally don't"<<endl;
              cout<<"care for doing your job right but today seems different"<<endl;
              cout<<"DIIIING DOOONG! Some one walks in."<<endl;
              cout<<"He has a pale complexion, almost like he rolled around"<<endl;
              cout<<"in the powered donut section..."<<endl;
              cout<<"The customer browses around the aisles a bit, grabs some chips and approaches"<<endl;
              cout<<"you. He asks you how much it costs...."<<endl;
              cout<<"Though you normally ignore customers when approach you, you somehow"<<endl;
              cout<<"feel obliged to help him with his snack need..... you can"<<endl;
              cout<<"1)Lie about the price and keep the extra mula for yourself"<<endl;
              cout<<"2)Stall with a really long anectdote about your adventures in Poland"<<endl;
              cout<<"3)Just do your job and check on the register"<<endl;
              cout<<"4)Just.....laugh....and laugh....and laugh some more"<<endl;
              //there are four choices presented to the user          
              cin.ignore();
              cin>>choice;
              //in choice for the four
              if(choice==2){
                                        cout<<name<<": WELL, THAT ITEM REMINDS ME OF...."<<endl;
                                        cout<<".......AS WIDE AS THIS HERE FIST, REALLY..."<<endl;
                                        cout<<"THATS WHEN THE GERMANS HAD BE IN A CORNER......."<<endl;
                                        cout<<"FORTUNATELY I....The customer just backs up slowly and"<<endl;
                                        cout<<"runs off, but your still safe non the less...."<<endl;
                                        //the best choice to pick, success and less work
                           }
              else if(choice==4){
                                        cout<<"The customer just backs up slowly and"<<endl;
                                        cout<<"runs off, but your still safe non the less...."<<endl;
                                        //the best choice to pick, success and less work
                                }
              else if(choice==1) {
                                  cout<<"You try to lie and get away with thievery but your manager catches your lie from across the store... "<<endl;
                                  gameover();        
                                 //failure
                                 }
              else if(choice==3) {
                                  cout<<"You decide to do your job for once and ask him for the item. It says 4.89"<<endl;
                                  cout<<"Type in 4.89...."<<endl;
                                 //success but more work
                                 //minigame time 
                                  cin>>p;
                                 if (p==4.89f){cout<<"Your total is $"<<setprecision(2)<<fixed<<salestax(p, tax, t)<<t<<". He gladly pays and begins his fried potato consumption"<<endl;}
                                 //the user has to type the right price or game over
                                 else if(p!=4.89f){cout<<"You feel a warm and angry breath going down your neck. Your manager was standing behind you...."<<endl;
                                 gameover();}
                                 //game over
                                 }
                                 }  
      else if(choice==2){
                        gameover();
                        }                
cout<<"You spend your day with the your hourly 7/11 rituals...\n\n\n"<<endl;
cout<<"There's an hour left on the clock when out of literally no where a Sumo Wrestler happens"<<endl;
cout<<"to walk in. WHAT ARE THE DANG ODDS HUH? Well, there's nothing really you can do. You watch"<<endl;
cout<<"the beast start grabbing all he can from the shelves and throwing it into his cart. Oh jeez"<<endl;
cout<<"He begins to pile it all on the counter"<<endl;
cout<<"You just smile and ask him if that will be all while inside you are in extreme loathe."<<endl;
cout<<"He smiles back and affirms your question of disappointment."<<endl;
cout<<"You look down at all the food and the prices read..."<<endl;
cout<<"$4.00, $3.96, $.99, $10.98, $20.00, $10.99, $5.99, $.99, $2.99, $1.50"<<endl;
cout<<"1) I'll take the toilet...."<<endl;
cout<<"2) I'll take on the sumo...."<<endl;
cout<<"3) I'll take a nap...."<<endl;
cout<<"4) I'll take the my job seriously...."<<endl;
cin.ignore();
cin>>choice;

if (choice==1){gameover();}
else if(choice==2){cout<<"You shout ENOUGH IS ENOUGH. The grab a bottle, break the top half and...\n\n\n\n"<<endl;
                  cout<<"(IN JAIL)"<<endl;
                  gameover();
                  //failure
                 }
else if(choice==3){cout<<"You look at Sumo dead in the eye, shout nap time, and fall asleep on a corner of the store...."<<endl;
                   cout<<"\n\n\n\n You wake up in the bathroom.... and hear"<<endl;}

else if(choice==4){cout<<"Well, guess it's what they pay me for....."<<endl;
                   cout<<"though a nap, or a sumo wrestler destruction, or even "<<endl;
                   cout<<"toilet duty sound more appealing, you decide to take"<<endl;
                   cout<<"the path of righteous and show the large wrestler"<<endl;
                   cout<<"compassion. Out of shear grace, you approach the "<<endl;
                   cout<<"counter....."<<endl;
                   cout<<"TYPE IN THE PRICES IN ORDER AND HIT ENTER AFTER EACH...."<<endl;
                   cout<<"$4.00, $3.96, $.99, $10.98, $20.00, $10.99, $5.99, $.99, $2.99, $1.50"<<endl;
                   cin.ignore();
                   cin>>prices_2[0];
               
                   cin.ignore();
                   cin>>prices_2[1];
             
                   cin.ignore();
                   cin>>prices_2[2];
                
                   cin.ignore();
                   cin>>prices_2[3];
               
                   cin.ignore();
                   cin>>prices_2[4];
                  
                   cin.ignore();
                   cin>>prices_2[5];
              
                   cin.ignore();
                   cin>>prices_2[6];
                  
                   cin.ignore();                   
                   cin>>prices_2[7];
                  
                   cin.ignore();
                   cin>>prices_2[8];
                 
                   cin.ignore();
                   cin>>prices_2[9];
                 
              
                   
                   
//this is where the array is all added up
//the array is then carried into a cout statement 
				   
cout<<"You tell him his total is pre-total $"<<sumArray(prices_2,total_a)<<". Just as you are about to add the tax, he books it"<<endl;
cout<<"like a speed demon. You really don't feel like dealing with anymore so you cut your losses"<<endl;
cout<<"\n\n\n\n"<<endl;
cout<<"You sigh deeply with satisfaction of a days end and return home to recharge for another day of work\n\n\n\n"<<endl;
//the user is congratulated
cout<<".-----------------."<<endl;
cout<<"*-----------------*"<<endl;
cout<<"       |   |      "<<endl;
cout<<"       |   |HE       END  "<<endl;
//successful ending
}
return 0;
}
void gameover(){
              cout<<"         ----------/ |       SCCCRRRRUUUUUB!!!!        \n";                                    
              cout<<"       /           | |        *door closes*            \n";
              cout<<"      /           /| |          =========              \n";
              cout<<"     /           / | |         | .-----. |   GAME      \n";         
              cout<<"    /___________/ /| |         |=|     |-|   OVER      \n";
              cout<<"   [____________]/ | |         |~|_____|~|             \n";
              cout<<"   |       ___  |  | |         '-|     |-'             \n";
              cout<<"   |      /  _) |  | |           |.....|               \n";    
              cout<<"   |      |.'   |  | |           |     |               \n";
              cout<<"   |            |  | |           |.....|               \n";
              cout<<"   |            |  | |            `--._|               \n";
              cout<<"   |            |  | |                                 \n";
              cout<<"   |            |  | ;________________________         \n";
              cout<<"   |            |  |.' ______________________ .       \n";
              cout<<"   |            | /|  (______________________) )      \n";
              cout<<"   |============|/ |_________________________.'        \n";
              cout<<"   '--||----: `'''' `------------------------`/        \n";
              cout<<"      || jgs `""";"""-.                       |        \n";
              cout<<"      ||         |     `.                    /         \n";
              cout<<"      ||         |                          /          \n";
              cout<<"      ().-.      |          '.             /           \n";
              cout<<"        ==(_((X))     ;       .           |           \n";
              cout<<" '-'       |                 `  |_________|             \n";
              cout<<"           |                   |   /_|  /|             \n";
              cout<<"           / `-.___             |       / /            \n";
              cout<<"          / _     /_____________| _    / /_            \n";
              cout<<"         /_/_|___________________/_|__/ /~ )__         \n";
              cout<<"        |____________________________|/  ~   )         \n";
              cout<<"                              (....~  ~     ~(~~`      \n";
              cout<<"                                ( ~  ~  ~  `)          \n";
              cout<<"                                  . `      '`          \n";
              cout<<"                                    `--~-' '`          \n";
//the screen of failure
              exit(1);
//exits the program
               }
float salestax(float price, float tax,float total)
{
total=price*tax;
//used to find the tax
total=price+total;
//adds on the price
price=total;
//swaps for price
return price;
//sends the total back
}
float sumArray(float array[], float total)

{
int tnum;
float sum = 0;
for(tnum = 0; tnum < 10; tnum++)
sum += array[tnum];
total=sum;
return total;
}