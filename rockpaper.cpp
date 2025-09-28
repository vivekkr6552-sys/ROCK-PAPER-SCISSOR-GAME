#include<iostream>
#include<cstdlib>  //random number
#include<ctime> //current time
using namespace std;
int main(){
    srand(time(NULL));
    int user_choice=0;
    int computer_choice=0;
    cout<<"Rock paper scissor game"<<endl;
    cout<<"1.Rock"<<endl;
    cout<<"2.paper"<<endl;
    cout<<"3.scissor"<<endl;
    cin>>user_choice;
    if(user_choice==1){
        cout<<"you choose Rock"<<endl;
    }
    else if(user_choice==2){
        cout<<"you choose Paper"<<endl;
    }
    else{
        cout<<"you choose Scissor"<<endl;
    }
    computer_choice = rand() % 3+1;  //FOR RANDOM NUMBERS
    if(computer_choice==1){
        cout<<"computer choice is rock"<<endl;
    }
    else if(computer_choice==2){
        cout<<"computer_choice is Paper"<<endl;
    }
    else{
        cout<<"computer_choice is Scissor"<<endl;
    }

    //display output     21 32 
    if(user_choice==computer_choice){
        cout<<"tie"<<endl;
    }
    else if((user_choice ==1 && computer_choice==3)||(user_choice ==2 && computer_choice==1 )||(user_choice==3 && computer_choice==2) ){
        cout<<"you win"<<endl;
    }
    else{
        cout<<"you lose"<<endl;
    }
    return 0;

}
