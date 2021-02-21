#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void guess_game(){
  cout<<"starting game"<<endl<<"guess a number\n";
  int random = rand() %251; 

  while (true){
    int guess;
  cin>>guess;
  if(guess==random){
    cout<<"you win\n";
    break;
  }
  else if(guess>random){
    cout<<"too high\n";
  }
  else{cout<<"too low\n";}
}

}
void rpc(){}

int main(){
    srand(time(NULL));
    char choice;
      
   
  

    do{
       cout<<"press A to play"<<endl<<"press O to quit"<<endl;
         cin>>choice;
        
      switch (choice)
      {
      case 'a':
        cout<<"press g for guess game\n press r for rock paper siccor";
         char game_selection;
         
         cin>>game_selection;
         if ( game_selection = 'g')
         {guess_game();}
         else if (game_selection = 'r')
         {
           rpc();
         }
         
          break;
      case 'o':
      cout<<"thanks for playing";
      return 0;
      default:
          break;
      }   
    }
   while(choice !='o');
 
}