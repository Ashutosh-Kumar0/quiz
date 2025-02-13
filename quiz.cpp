#include<iostream>

using namespace std;
int main(){
    int finalResult=0;
    char playAgain;
    int playQuiz(void);
    play:
    finalResult = playQuiz();
    cout<<"Your score is "<<finalResult<<endl;
    
    if(finalResult>=3){
        cout<<"You are pass"<<endl;
        cout<<"Do you want to play Quiz again y or n ?"<<endl;
        cin>>playAgain;
        if(playAgain=='y' || playAgain== 'Y' ){
        goto play;
        }
        else{
        cout<<"Thank you to play Quiz !"<<endl;    
        }
            
    }
    else{
        cout<<"You are fail"<<endl;
         cout<<"Do you want to play Quiz again y or n ?"<<endl;
        cin>>playAgain;
        if(playAgain=='y' || playAgain== 'Y' ){
            playQuiz();
        }
        else{
        cout<<"Thank you to play Quiz !"<<endl;    
        }
    }
    
    
    
}

int playQuiz(){
    char c;
    char option;
    int score=0;
    cout<<"------------Welcome to Quiz Game------------"<<endl;
    cout<<"--------please follow the instructions-------"<<endl;
    cout<<"Step 1 :Quiz contains total 10 questions"<<endl;
    cout<<"Step 2 :You will given 1 marks for each right answer"<<endl;
    cout<<"Step 3 :There will be no negative markings"<<endl;
    cout<<"Step 4 :please pres s to star the quiz"<<endl;
    cout<<"Step 5 :please option a,b,c,d"<<endl;
     cout<<"Step 6 :If you score >=6 , you will pass the quiz"<<endl;
    cin>>c;
    if(c=='s' || c=='S'){
        cout<<"Q1.What is the capital of India"<<endl;
        cout<<"(a) Delhi (b) Mumbai (c) kolkata (d)Chennai"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        
        cout<<"Q2.Who is the prime minister  of India"<<endl;
        cout<<"(a) Narendra modi (b) Adityanath (c) Kejriwal (d) Nitin"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
            
        }
        
        cout<<"Q3.What is the national bird of India"<<endl;
        cout<<"(a) Peacock (b) Parrot (c) Sparrow (d) Pigeon "<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
    
        }
    }
}