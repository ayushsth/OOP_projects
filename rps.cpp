//C++ PROJECT
//ROCK PAPER SCISSORS GAME
//BY -ADITYA PANDIT[ACE078BCT006] AND -AYUSH MAN SHRESTHA[ACE078BCT018]


#include<iostream>
#include<cstdlib> //rand() function is used
#include<ctime> //srand(time(NULL)) function is used

using namespace std;

class rps{
      
private:
        int user = 0;
        int ai = 0;
        
public:
       
       
       void display(){
            cout<<"\t\t\t\t\t----------------------------"<<endl;
            cout<<"\t\t\t\t\t[ROCK PAPER SCISSORS SHOOT!]"<<endl;
            cout<<"\t\t\t\t\t----------------------------"<<endl;
	        cout<<"\t\t\t\t\t\t[1] Rock "<<endl;	
	        cout<<"\t\t\t\t\t\t[2] Paper "<<endl;
	        cout<<"\t\t\t\t\t\t[3] Scissors "<<endl;
	        cout<<"Enter your option : "<<endl;
            cin>>user;	          
       }
       
       
       void choose(){
            if(user==1){
            cout<<"\nYou choose [ Rock ]"<<endl;
            }
            else if(user==2){
            cout<<"\nYou choose [ Paper ]"<<endl;
            }
            else{
	        cout<<"\nYou choose [ Scissors ]"<<endl;
            }
       }
       
       
       void ai_choose(){
            srand(time(NULL)); //generates random number everytime
            ai = rand()%3+1; //generates random number from 1 - 3
             
            if(ai==1){
            cout<<"\nAI choose [ Rock ]\n"<<endl;
            }
            else if(ai==2){
            cout<<"\nAI choose [ Paper ]\n"<<endl;
            }
            else{
	        cout<<"\nAI choose [ Scissors ]\n"<<endl;
            }
       }
       
       
//match starts
            void match(){
                 if(user==ai){
                 cout<<"-----------"<<endl;
	             cout<<"It's a TIE!"<<endl;
	             cout<<"-----------"<<endl;
                 }
                 
//User chooses Rock
               else if(user==1){
               if(ai==2){
               cout<<"---------"<<endl;
	           cout<<"You Lose!"<<endl;
	           cout<<"---------"<<endl;
	           cout<<"------------------"<<endl;
	           cout<<"Paper covers Rock!"<<endl;
	           cout<<"------------------"<<endl;
	           }
               if(ai==3){
               cout<<"--------"<<endl;
	           cout<<"You Win!"<<endl;
	           cout<<"--------"<<endl;
	           cout<<"----------------------"<<endl;
	           cout<<"Rock smashes Scissors!"<<endl;
	           cout<<"----------------------"<<endl;
               }
               }
               
//User chooses Paper
               else if(user==2){
               if(ai==1){
               cout<<"--------"<<endl;
	           cout<<"You Win!"<<endl;
	           cout<<"--------"<<endl;
	           cout<<"------------------"<<endl;
	           cout<<"Paper covers Rock!"<<endl;
	           cout<<"------------------"<<endl;
	           }
               if(ai==3){
               cout<<"---------"<<endl;
               cout<<"You Lose!"<<endl;
               cout<<"---------"<<endl;
               cout<<"--------------------"<<endl;
               cout<<"Scissors cuts Paper!"<<endl;
               cout<<"--------------------"<<endl;
               }
               }
               
//User chooses Scissors
               else if(user==3){
               if(ai==1){
               cout<<"---------"<<endl;
	           cout<<"You Lose!"<<endl;
	           cout<<"---------"<<endl;
	           cout<<"----------------------"<<endl;
	           cout<<"Rock smashes Scissors!"<<endl;
	           cout<<"----------------------"<<endl;
	           }
               if(ai==2){
               cout<<"--------"<<endl;
	           cout<<"You Win!"<<endl;
	           cout<<"--------"<<endl;
	           cout<<"--------------------"<<endl;
	           cout<<"Scissors cuts Paper!"<<endl;
	           cout<<"--------------------"<<endl;
               }
               }
               }
};


int main(){
    rps r;
    r.display();
    r.choose();
    r.ai_choose();
    r.match();
    return 0;
}
