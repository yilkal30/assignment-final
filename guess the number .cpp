#include<bits/stdc++.h> 
using namespace std; 
int main(){
    int Random ; 
    srand(time(0)); 
    Random = rand()%30; 
    int Try = 5; 
    int Lower = 0 , Upper = 30;
    printf("You can only guess the number five times if you can't, you'll lose.\n");
    for(int i = 1; i<=Try ; i++){ 
        int Guess ; 
        printf("........................................... \n");
        printf("GUIDELINES : THE NUMBER RANGES FROM %d TO %d \n",Lower , Upper);
        printf("Try number %d : " , i);  
        scanf("%d" , &Guess); 
        if(Guess == Random){ 
            printf("YOU WIN !!");
            return 0 ;
}
         else if(i == Try) { 
             printf("GAME OVER !!\n");
             printf("CORRECT ANSWER : %d", Random);
             return 0;
         } 
         else{
             if(Random > Guess) Lower = Guess;
             else Upper = Guess ;
             printf("TRY AGAIN \n"); 
         } 
         cout << ("...............................................\n");
         }
         }