#include<iostream>
using namesoace std;

using namespace std;
int main(){
    int finalResult=0;
    char playAgain;
    int playQuiz(void);
    finalResult = playQuiz();
    play:
    cout<<"Your Score is "<<finalResult<<endl;
    
    if(finalResult>=7){
        cout<<"You are Pass"<<endl;
        cout<<"Do you want to play the Quiz again?"<<endl;
        cout<<"Yes or No"<<endl;
        cin>>playAgain;
        if(playAgain=='y' || playAgain=='Y'){
        goto play; 
        } 
        else{
            cout<<"Thankyou for participating !"<<endl;
        }
    }
    else{
        cout<<"You are Fail"<<endl;
    }
    
}

int playQuiz(){
    char c;
    char option;
    int score=0;
    playInsideFunction:
    cout<<"------Welcome To Quiz Solving Game-----"<<endl;
    cout<<"------Please follow the givrn instructions------"<<endl;
    cout<<"Step-1 : This Quiz contains total 10 Questions"<<endl;
    cout<<"Step-2 : You will given 1 marks for each right answer"<<endl;
    cout<<"Step-3 : There will be no negative marking"<<endl;
    cout<<"Step-4 : Please press s to start the Quiz"<<endl;
    cout<<"Step-5 : Please Select any option from the given choice"<<endl;
    cout<<"Step-6 : If Your score >=7, you will pass the Quiz"<<endl;
    
    cin>>c;
    if(c=='s' || c=='S'){
        cout<<"Q1. Which of the following is the correct abbreviation of 'Computer'? "<<endl;
        cout<<"a) Commonly Operated Machines used in Technical and Environmental Research"<<endl;
        cout<<"b) Commonly Occupied Machines used in Technical and Educational Research"<<endl;
        cout<<"c) Commonly Oriented Machines used in Technical and Educational Research"<<endl;
        cout<<"d) Commony Operated Machine used in Technical and Educational Research"<<endl;
        cin>>option;
        if(option=='d' || option=='D'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        
        
        cout<<"Q2. Which of the following is not the charactersitics of 'Computer'? "<<endl;
        cout<<"a) Versatility"<<endl;
        cout<<"b) Diligence"<<endl;
        cout<<"c) Accuracy"<<endl;
        cout<<"d) I.Q."<<endl;
        cin>>option;
        if(option=='d' || option=='D'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        
        cout<<"Q3.A process is ______. "<<endl;
        cout<<"a) program in execution"<<endl;
        cout<<"b) single thread in execution"<<endl;
        cout<<"c) program in the memory"<<endl;
        cout<<"d) task"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        
        cout<<"Q4.What is the decimal equivalent of the binary number 10111?"<<endl;
        cout<<"a) 21"<<endl;
        cout<<"b) 39"<<endl;
        cout<<"c) 23"<<endl;
        cout<<"d) 42"<<endl;
        cin>>option;
        if(option=='c' || option=='C'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        
        cout<<"Q5.Which is the smallest visual element in video monitor?"<<endl;
        cout<<"a) Character"<<endl;
        cout<<"b) Pixel"<<endl;
        cout<<"c) Byte"<<endl;
        cout<<"d) Bit"<<endl;
        cin>>option;
        if(option=='b' || option=='B'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        
        cout<<"Q6.Which is the extension for the Notepad?"<<endl;
        cout<<"a) .txt"<<endl;
        cout<<"b) .xls"<<endl;
        cout<<"c) .ppt"<<endl;
        cout<<"d) .bmp"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        
        cout<<"Q7.Which of the following group contains graphical file extension?"<<endl;
        cout<<"a) JPG,CPX,GCM"<<endl;
        cout<<"b) GIF,TCE,WMF"<<endl;
        cout<<"c) TCP,JPG,BMP"<<endl;
        cout<<"d) JPG,GIF,BMP"<<endl;
        cin>>option;
        if(option=='D' || option=='d'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        
        cout<<"Q8.Which of the following is not one of the internal components of a CPU?"<<endl;
        cout<<"a) Control Sequencer"<<endl;
        cout<<"b) M-D-R"<<endl;
        cout<<"c) M-A-R"<<endl;
        cout<<"d) Floppy Disk"<<endl;
        cin>>option;
        if(option=='D' || option=='d'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        
        cout<<"Q9.What is the full form of SRAM?"<<endl;
        cout<<"a) Static Random Acess Memory"<<endl;
        cout<<"b) Static Remote Access Memory"<<endl;
        cout<<"c) Setup Random Acsess Memory "<<endl;
        cout<<"d) Setup Remote Access Memory"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        
        cout<<"Q10.Which is the best fire extinguisher equipment?"<<endl;
        cout<<"a) Dry Powder"<<endl;
        cout<<"b) Bromo Chloride"<<endl;
        cout<<"c) CO2"<<endl;
        cout<<"d) Water"<<endl;
        cin>>option;
        if(option=='c' || option=='C'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        
    }
    else{
        cout<<"You have entered wrong value...Enter s to continue"<<endl;
        goto playInsideFunction;
    }
    return score;
}
