#include<iostream>
#include <fstream>
#include <string>
#include <vector>
#ifdef _WIN32
    #include <Windows.h>
#else
    #include <unistd.h>
#endif

using namespace std;

// A Function which will display the info of members and lecturer.
void ourdata()
{
    system("cls");
	cout<<"\t\t\t----------------------------------------------------------------------------\n";	
	cout<<"\t\t\t|                                                                          |\n";
	cout<<"\t\t\t|                                                                          |\n";		
	cout<<"\t\t\t|        ,,,,,,   ,,,,,,   ,,,,,,   ,,,,,,, ,,,,,,  ,,,,,,  ,,,,,,,,,,,    |\n";
	cout<<"\t\t\t|        |    |   |    |   |    |      |    |       |            |         |\n";
	cout<<"\t\t\t|        |    |   |    |   |    |      |    |       |            |         |\n";
	cout<<"\t\t\t|        |,,,,|   |,,,,|   |    |      |    |,,,,,  |            |         |\n";
	cout<<"\t\t\t|        |        |`.      |    |      |    |       |            |         |\n";
	cout<<"\t\t\t|        |        |  `.    |    |  |   |    |       |            |         |\n"; 
	cout<<"\t\t\t|        |        |    `.  |,,,,|  |,,,|    |,,,,,  |,,,,,       |         |\n";
	cout<<"\t\t\t|                                                                          |\n";		
	cout<<"\t\t\t|                                                                          |\n";	
	cout<<"\t\t\t|                                                                          |\n";	
	cout<<"\t\t\t|                    SUBJECT: PROGRAMMING FANDAMENTALS                     |\n";	
	cout<<"\t\t\t|                         LECTURER : MA`AM NAYYAB                          |\n";
	cout<<"\t\t\t|                                                                          |\n";	
	cout<<"\t\t\t|                                                                          |\n";		
	cout<<"\t\t\t|                                ******                                    |\n";	
	cout<<"\t\t\t|                             TEAM MEMBERS                                 |\n";
	cout<<"\t\t\t|                                                                          |\n";	
	cout<<"\t\t\t|                                                                          |\n";		
   	cout<<"\t\t\t|                       1.)  Simaab Malik ( 54910 )                        |\n";	
	cout<<"\t\t\t|                       2.)  Nimra Tariq  ( 54909 )                        |\n";
	cout<<"\t\t\t|                       3.)  Tasweeb Eman ( 53536 )                        |\n";
	cout<<"\t\t\t|                                                                          |\n";
	cout<<"\t\t\t|                                                                          |\n";	
	cout<<"\t\t\t----------------------------------------------------------------------------\n";		
	
}


// A simple structure for the type, statement & answer of the questions of the game.
struct Question
{
	char statement[200];
    bool isTrueFalse; 
    char options[4][50]; 
    char correctAnswer[50];
    int topic;
    int mode;
    int type;
    
} question ;


// A Function that will display the menu of the game.
void menu()
{
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                      __         ____   ____             __            *\n";
	cout<<"\t\t*            |     |  |    |     |      |    |  |'   '|  |              *\n";
	cout<<"\t\t*            |  .  |  |__  |     |      |    |  | ' ' |  |__            *\n";
	cout<<"\t\t*            | . . |  |    |     |      |    |  |  '  |  |              *\n";
	cout<<"\t\t*            |.   .|  |__  |___  |____  |____|  |     |  |__            *\n";
	cout<<"\t\t*         ___________________________________________________           *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                TO                                     *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                      'THE QUIZZ MASTER PRO GAME' 	                *\n";
	cout<<"\t\t*                    _______________________________                    *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                                                       *\n";	
    cout<<"\t\t*                -->  Enter 1 for Adding Questions.                     *\n";
	cout<<"\t\t*                                                                       *\n";
    cout<<"\t\t*                -->  Enter 2 for Displaying Questions.                 *\n";
    cout<<"\t\t*                                                                       *\n";
    cout<<"\t\t*                -->  Enter 3 for Updating Questions.                   *\n";
    cout<<"\t\t*                                                                       *\n";
    cout<<"\t\t*                -->  Enter 4 for Deleting Questions.                   *\n";
    cout<<"\t\t*                                                                       *\n";
    cout<<"\t\t*                -->  Enter 5 to Start the Game.                        *\n";
    cout<<"\t\t*                                                                       *\n";
    cout<<"\t\t*                -->  Enter 6 to exit the Game.                         *\n";
    cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                                                       *\n";		
	cout<<"\t\t*************************************************************************\n\n";	

}


// This is a function which will alow you to add a new question to the game.
void addQuestion(Question Q[], int& questionCount) 
{
	char addMore='y';
	system("cls");
	while( addMore=='y' || addMore=='Y' )
	{
    cout<<"Enter the statement for the question : ";
    cin.ignore();
    cin.getline(Q[questionCount].statement, 200);
    
    cout<<"Is it a True/False question or MCQ's type question ?";
	cout<<" \n Press 1 for T/F & 0 for MCQ's ";
    cin>>Q[questionCount].isTrueFalse;
    
    if (!Q[questionCount].isTrueFalse) 
	{
        cout<<"Enter the options (A, B, C, D) : \n";
        
        for( int x=0; x<4; x++) 
		{
            cout<<char('A'+x)<<" : ";
            cin>>Q[questionCount].options[x];
        }
    }

    cout<<"Now Enter the correct answer : ";
    cin>>Q[questionCount].correctAnswer;
    
    questionCount++;
    cout<<"Question added successfully! \n";
    cout<<"---------------------------------------------------\n";
    cout<<"                                                   \n";
    cout<<"Do you want to add another question ? y/n : ";
    cin>>addMore;
    
    }
    
    cout<<"\n  -- Done !! -- ";
    
}


// This is a function which will just display the questions you have created recently to the game.
void displayQuestion(const Question Q[], int& questionCount) 
{
	system("cls");
	cout<<"\n Question : "<<Q[questionCount].statement<<endl;
    if(!Q[questionCount].isTrueFalse) 
	{
		cout<<"Is was a True / False Question \n";
	}
    else
	{
        cout<<"It's an MCQ Question and its options are : \n";
        for(int x=0; x<4; x++)
        {
        	cout<<char('A'+x)<<" : "<<Q[questionCount].options[x]<<endl;
		}
    
    }

        cout<<" Correct Answer : "<<Q[questionCount].correctAnswer<<endl;
        cout<<",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n\n";
    
    
    Sleep(5000);
}


// This is a function which will allow you to update a question in the game.
void updateQuestion(Question Q[], int questionCount) 
{
	system("cls");
	cout<<"Enter the statement you want to update : ";
    cin.ignore();
    cin.getline(Q[questionCount].statement, 200);
    
	int Qtype; 
    do
    {
      cout<<"Press 1 if it a True/False question & Press 0 if it is an MCQ question ";
      cin>>Qtype;
    } 
	while( Qtype!=0 && Qtype!= 1 );

    Q[questionCount].isTrueFalse=Qtype;

    if (!Q[questionCount].isTrueFalse) 
	{
    for( int x=0; x<4; x++) 
	{
      cout<<char('A'+x)<<" : ";
      cin>>Q[questionCount].options[x];
    }
    
}

    cout<<"\n Enter the updated correct answer : ";
    cin>>Q[questionCount].correctAnswer;

    cout<<"Question updated successfully! \n";
    
    
    Sleep(10000);
}


// This is a function which will allow you to delete a question from the game.
void deleteQuestion(Question Q[], int questionCount) 
{
	system("cls");
    int QIndex;

    cout<<"Enter the index of the question you want to delete from 1 to "<<questionCount<<" : ";
    cin>>QIndex;

    for(int x=QIndex; x<questionCount-1; x++) 
		{
            Q[x]=Q[x+1];
        }

        questionCount--;

    cout<<"\n The Question you wanted to delete is deleted successfully !! \n";
    
    
    Sleep(10000);
}


// This is a function which will allow you to play the 'Quiz Master Pro' Game.
void playgame() 
{
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              This Is the Menu for the Topic of the Game 	        *\n";
	cout<<"\t\t*           ________________________________________________            *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                                                       *\n";	
    cout<<"\t\t*                         1.  -->  Riddles.                             *\n";
	cout<<"\t\t*                                                                       *\n";
    cout<<"\t\t*                         2.  -->  Historical Figures.                  *\n";
    cout<<"\t\t*                                                                       *\n";
    cout<<"\t\t*                         3.  -->  Animal World.                        *\n";
    cout<<"\t\t*                                                                       *\n";
    cout<<"\t\t*           ________________________________________________            *\n";
    cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                   I wanna play : ";                          
	cin>>question.topic;
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              This Is the Menu for the Mode of the Game             *\n";
	cout<<"\t\t*           ________________________________________________            *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                                                       *\n";	
    cout<<"\t\t*                        1.  -->  Easy Mode.                            *\n";
	cout<<"\t\t*                                                                       *\n";
    cout<<"\t\t*                        2.  -->  Medium Mode.                          *\n";
    cout<<"\t\t*                                                                       *\n";
    cout<<"\t\t*                        3.  -->  Difficult Mode.                       *\n";
    cout<<"\t\t*                                                                       *\n";
    cout<<"\t\t*           ________________________________________________            *\n";
    cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                         Let's play : ";                          
	cin>>question.mode;
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              This Is the Menu for the Type of the Game 	        *\n";
	cout<<"\t\t*           ________________________________________________            *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                                                       *\n";	
    cout<<"\t\t*                        1.  -->  True / False.                         *\n";
	cout<<"\t\t*                                                                       *\n";
    cout<<"\t\t*                        2.  -->  MCQ's.                                *\n";
    cout<<"\t\t*                                                                       *\n";
    cout<<"\t\t*           ________________________________________________            *\n";
    cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                       Let's go with : ";                          
	cin>>question.type;
	
	if( question.topic==1 && question.mode==1 && question.type==1 )
	{
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*             You have selectd ' Riddles ' as your topic                *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                 And                      	        *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                  You wanna play Easy Mode with T/F                    *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              ------------------------------------------               *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                           Here you goo !!!!                           *\n";
	cout<<"\t\t*                                                                       *\n";		
	cout<<"\t\t*_______________________________________________________________________*\n\n\n";
	
	int score=0;
	char ans;
	cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 01 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> The more you take, the more you leave behind. Am I Footsteps?          *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n\n";
    	
    }
    
    cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 02 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> I can be cracked, made, told, and played. Am I Joke ?                  *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n\n";
    	
    }
    
    cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 03 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> I'm not alive, but I can grow. I don't have lungs, but I need air.     *\n";
	cout<<"\t\t*                    I don't have a mouth, but water kills me. Am I flower?             *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='f' || ans=='F' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- It was Wrong --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n\n";
    	
    }
    
    cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 04 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> I follow you all the time and copy your every move, but you            *\n";
	cout<<"\t\t*                     can't touch me or catch me. Am I shadow?                          *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n\n";
    	
    }
    
    cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 05 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> I have keys but open no locks. I have space but no room.               *\n";
	cout<<"\t\t*                  You can enter, but you can't go inside. Am I chair?                  *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='f' || ans=='F' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- It was Wrong --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n\n";
    	
    }
    
    cout<<"\t\t You have Scored "<<score<<" Points. ";
    Sleep(5000);
	
	}
	
	if( question.topic==1 && question.mode==1 && question.type==2 )
	{
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*             You have selectd ' Riddles ' as your topic                *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                 And                      	        *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                  You wanna play Easy Mode with MCQ's                  *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              ------------------------------------------               *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                           Here you goo !!!!                           *\n";
	cout<<"\t\t*                                                                       *\n";		
	cout<<"\t\t*_______________________________________________________________________*\n\n\n";
	
	int score=0;
	char ans;
	cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 01 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> The more you take, the more you leave behind. What am I ?              *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Footsteps.                                       *\n";
	cout<<"\t\t*                              b) -->  Time.                                            *\n";
	cout<<"\t\t*                              c) -->  Memories.                                        *\n";
	cout<<"\t\t*                              d) -->  Shadows.                                         *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- A was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n\n";
    	
    }
    
    cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 02 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> I can be cracked, made, told, and played. What am I ?                  *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Joke.                                            *\n";
	cout<<"\t\t*                              b) -->  Ice.                                             *\n";
	cout<<"\t\t*                              c) -->  Water.                                           *\n";
	cout<<"\t\t*                              d) -->  Air.                                             *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- A was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n\n";
    	
    }
    
    cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 03 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> I'm not alive, but I can grow. I don't have lungs, but I need air.     *\n";
	cout<<"\t\t*                    I don't have a mouth, but water kills me. What am I ?              *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Moon.                                            *\n";
	cout<<"\t\t*                              b) -->  Sun.                                             *\n";
	cout<<"\t\t*                              c) -->  Star.                                            *\n";
	cout<<"\t\t*                              d) -->  Clouds.                                          *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- A was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n\n";
    	
    }
    
    cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 04 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> I follow you all the time and copy your every move, but you            *\n";
	cout<<"\t\t*                     can't touch me or catch me. What am I ?                           *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Footsteps.                                       *\n";
	cout<<"\t\t*                              b) -->  Time.                                            *\n";
	cout<<"\t\t*                              c) -->  Shadows.                                         *\n";
	cout<<"\t\t*                              d) -->  Memories.                                        *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='C' || ans=='c' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- C was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n\n";
    	
    }
    
    cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 05 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> I have keys but open no locks. I have space but no room.               *\n";
	cout<<"\t\t*                  You can enter, but you can't go inside. What am I ?                  *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  River.                                           *\n";
	cout<<"\t\t*                              b) -->  Ocean.                                           *\n";
	cout<<"\t\t*                              c) -->  Pond.                                            *\n";
	cout<<"\t\t*                              d) -->  Lake.                                            *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- A was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n\n";
    	
    }
    
    cout<<"\t\t You have Scored "<<score<<" Points. ";
    Sleep(5000);
	
	}
	
	if( question.topic==1 && question.mode==2 && question.type==1 )
	{
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*             You have selectd ' Riddles ' as your topic                *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                 And                      	        *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                 You wanna play Medium Mode with T/F                   *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              ------------------------------------------               *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                           Here you goo !!!!                           *\n";
	cout<<"\t\t*                                                                       *\n";		
	cout<<"\t\t*_______________________________________________________________________*\n\n\n";
	
	int score=0;
	char ans;
	cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 01 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> The more you have, the less you see. Am I darkness ?                   *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 02 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> The person who makes it, sells it. The person who buys it,             *\n";
	cout<<"\t\t                          never uses it. Is it balloon?                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='f' || ans=='F' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Wrong --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 03 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> What has lots of eyes, but can’t see. Is it a table ?                  *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='f' || ans=='F' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- It was Wrong --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 04 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> I speek without a mouth and hear without ears. I have no body,         *\n";
	cout<<"\t\t*                    but I come alive with the wind. Am I fire ?                        *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 05 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> I have hands but cannot clap. Am I clock ?                             *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\t\t You have Scored "<<score<<" Points. ";
    Sleep(5000);
	
	}
	
	if( question.topic==1 && question.mode==2 && question.type==2 )
	{
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*             You have selectd ' Riddles ' as your topic                *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                 And                      	        *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                You wanna play Medium Mode with MCQ's                  *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              ------------------------------------------               *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                           Here you goo !!!!                           *\n";
	cout<<"\t\t*                                                                       *\n";		
	cout<<"\t\t*_______________________________________________________________________*\n\n\n";
	
	int score=0;
	char ans;
	cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 01 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> The more you have, the less you see. What am I ?                       *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Time.                                            *\n";
	cout<<"\t\t*                              b) -->  Darkness.                                        *\n";
	cout<<"\t\t*                              c) -->  Love.                                            *\n";
	cout<<"\t\t*                              d) -->  Power.                                           *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='B' || ans=='b' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- A was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 02 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> The person who makes it, sells it. The person who buys it,             *\n";
	cout<<"\t\t*                         never uses it. What is it ?                                   *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Mirror.                                          *\n";
	cout<<"\t\t*                              b) -->  Door.                                            *\n";
	cout<<"\t\t*                              c) -->  Telescope.                                       *\n";
	cout<<"\t\t*                              d) -->  Window.                                          *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- A was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 03 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> What has lots of eyes, but can’t see ?                               *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Tomato.                                          *\n";
	cout<<"\t\t*                              b) -->  Potato.                                          *\n";
	cout<<"\t\t*                              c) -->  Cucumber.                                        *\n";
	cout<<"\t\t*                              d) -->  Garlic.                                          *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='B' || ans=='b' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- B was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 04 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> I speek without a mouth and hear without ears. I have no body,         *\n";
	cout<<"\t\t*                     but I come alive with the wind. What am I ?                       *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Earth.                                           *\n";
	cout<<"\t\t*                              b) -->  Wind.                                            *\n";
	cout<<"\t\t*                              c) -->  Fire.                                            *\n";
	cout<<"\t\t*                              d) -->  Water.                                           *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='C' || ans=='c' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- C was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 05 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> I have keys but open no locks. I have space but no room.               *\n";
	cout<<"\t\t*                  You can enter, but you can't go inside. What am I ?                  *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Map.                                             *\n";
	cout<<"\t\t*                              b) -->  Compass.                                         *\n";
	cout<<"\t\t*                              c) -->  Lock.                                            *\n";
	cout<<"\t\t*                              d) -->  Clock.                                           *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='D' || ans=='d' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- D was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\t\t You have Scored "<<score<<" Points. ";
    Sleep(5000);
	
	}
	
	if( question.topic==1 && question.mode==3 && question.type==1 )
	{
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*             You have selectd ' Riddles ' as your topic                *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                 And                      	        *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                You wanna play Difficult Mode with T/F                 *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              ------------------------------------------               *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                           Here you goo !!!!                           *\n";
	cout<<"\t\t*                                                                       *\n";		
	cout<<"\t\t*_______________________________________________________________________*\n\n\n";
	
	int score=0;
	char ans;
	cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 01 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> What has one head and four legs? Is it bed ?                           *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 02 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> What can you catch, but not throw? Is it ball ?                        *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='f' || ans=='F' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Wrong --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 03 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> What has a thumb and four fingers, but is not a hand? Is it glove ?    *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*      -- It was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 04 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> What has words, but never speaks? Is it book?                          *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 05 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*     --> It is an imaginary line drawn through the center of the Earth.Is it equator?  *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='f' || ans=='F' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Wrong --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\t\t You have Scored "<<score<<" Points. ";
    Sleep(5000);
	
	}
	
	if( question.topic==1 && question.mode==3 && question.type==2 )
	{
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*             You have selectd ' Riddles ' as your topic                *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                 And                      	        *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*               You wanna play Difficult Mode with MCQ's                *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              ------------------------------------------               *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                           Here you goo !!!!                           *\n";
	cout<<"\t\t*                                                                       *\n";		
	cout<<"\t\t*_______________________________________________________________________*\n\n\n";
	
	int score=0;
	char ans;
	cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 01 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> What has one head and four legs ?                                      *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Swing.                                           *\n";
	cout<<"\t\t*                              b) -->  Bed.                                             *\n";
	cout<<"\t\t*                              c) -->  Fan.                                             *\n";
	cout<<"\t\t*                              d) -->  Clock.                                           *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='B' || ans=='b' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- A was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 02 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> What can you catch, but can't throw ?                                  *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Pen.                                             *\n";
	cout<<"\t\t*                              b) -->  Map.                                             *\n";
	cout<<"\t\t*                              c) -->  ball.                                            *\n";
	cout<<"\t\t*                              d) -->  Cold.                                            *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='D' || ans=='d' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- D was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 03 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> What has a thumb and four fingers, but is not a hand?                  *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Hand.                                            *\n";
	cout<<"\t\t*                              b) -->  Glove.                                           *\n";
	cout<<"\t\t*                              c) -->  Clock.                                           *\n";
	cout<<"\t\t*                              d) -->  Fan.                                             *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='B' || ans=='b' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- B was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 04 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> What has words, but never speaks ?                                     *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Book.                                            *\n";
	cout<<"\t\t*                              b) -->  Wind.                                            *\n";
	cout<<"\t\t*                              c) -->  Fan.                                             *\n";
	cout<<"\t\t*                              d) -->  Human.                                           *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- A was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 05 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> It is an imaginary line drawn through the center of the Earth          *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Pole.                                            *\n";
	cout<<"\t\t*                              b) -->  Equator.                                         *\n";
	cout<<"\t\t*                              c) -->  Axis.                                            *\n";
	cout<<"\t\t*                              d) -->  Clock.                                           *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='C' || ans=='c' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- C was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\t\t You have Scored "<<score<<" Points. ";
    Sleep(5000);
	
	}
	
	if( question.topic==2 && question.mode==1 && question.type==1 )
	{
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*       You have selected ' Historical Figures ' as your topic          *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                 And                      	        *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                  You wanna play Easy Mode with T/F                    *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              ------------------------------------------               *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                           Here you goo !!!!                           *\n";
	cout<<"\t\t*                                                                       *\n";		
	cout<<"\t\t*_______________________________________________________________________*\n\n\n";
	
	int score=0;
	char ans;
	cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 01 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> In 1492, Christopher Columbus reached the Americas.                    *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 02 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*    --> Julius Caesar was the leader of the French army during the Battle of Waterloo. *\n";
	cout<<"\t\t*                                                                                       *\n";
    cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*      -- It was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 03 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> The Enlightenment period is known for a revival of art,                *\n";
	cout<<"\t\t*                        literature, and learning in Europe ?                           *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='F' || ans=='f' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Wrong --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 04 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            -->  The Taj Mahal is located in Rome and known for gladiator contests.    *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='f' || ans=='F' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- It was Wrong --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 05 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*     --> The Treaty of Versailles, signed in 1919, marked the end of World War I.      *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*      -- It was correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\t\t You have Scored "<<score<<" Points. ";
    Sleep(5000);
	
	}
	
	if( question.topic==2 && question.mode==1 && question.type==2 )
	{
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*       You have selected ' Historical Figures ' as your topic          *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                 And                      	        *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                  You wanna play Easy Mode with MCQ's                  *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              ------------------------------------------               *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                           Here you goo !!!!                           *\n";
	cout<<"\t\t*                                                                       *\n";		
	cout<<"\t\t*_______________________________________________________________________*\n\n\n";
	
	int score=0;
	char ans;
	cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 01 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> In which year did Christopher Columbus reach the Americas?             *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  1492.                                            *\n";
	cout<<"\t\t*                              b) -->  1776.                                            *\n";
	cout<<"\t\t*                              c) -->  1066.                                            *\n";
	cout<<"\t\t*                              d) -->  1215.                                            *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- A was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 02 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            -->  Who was the leader of the French army during the Battle of Waterloo?  *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Napoleon Bonapartez.                             *\n";
	cout<<"\t\t*                              b) -->  Julius Caesar.                                   *\n";
	cout<<"\t\t*                              c) -->  Alexander the Great.                             *\n";
	cout<<"\t\t*                              d) -->  Genghis Khan.                                    *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='B' || ans=='b' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- B was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 03 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            -->  Which historical period is known for a revival of art,                *\n";
	cout<<"\t\t*                        literature, and learning in Europe?                            *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  The Renaissance.                                 *\n";
	cout<<"\t\t*                              b) -->  The Industrial Revolution.                       *\n";
	cout<<"\t\t*                              c) -->  The Enlightenment.                               *\n";
	cout<<"\t\t*                              d) -->  The Middle Ages.                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- A was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 04 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*        -->  What ancient wonder is located in Rome and known for gladiator contests?  *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  The Great Wall of China.                         *\n";
	cout<<"\t\t*                              b) -->  The Colosseum.                                   *\n";
	cout<<"\t\t*                              c) -->  The Colosseum.                                   *\n";
	cout<<"\t\t*                              d) -->  The Taj Mahal.                                   *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='B' || ans=='b' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- B was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 05 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*               --> The Treaty of Versailles, signed in 1919, marked the                *\n";
	cout<<"\t\t*                           end of which major conflict?                                *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  World War I.                                     *\n";
	cout<<"\t\t*                              b) -->  World War II.                                    *\n";
	cout<<"\t\t*                              c) -->  World War III.                                   *\n";
	cout<<"\t\t*                              d) -->  The Vietnam War.                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- A was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\t\t You have Scored "<<score<<" Points. ";
    Sleep(5000);
	
	}
	
	if( question.topic==2 && question.mode==2 && question.type==1 )
	{
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*        You have selected ' Historical Figures ' as your topic         *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                 And                      	        *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                You wanna play Medium Mode with T/F                    *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              ------------------------------------------               *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                           Here you goo !!!!                           *\n";
	cout<<"\t\t*                                                                       *\n";		
	cout<<"\t\t*_______________________________________________________________________*\n\n\n";
	
	int score=0;
	char ans;
	cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 01 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> The storming of the Bastille is associated with French Revolution.     *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 02 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*    --> The Marshall Plan aimed to aid Western Europe after World War II.              *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*      -- It was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 03 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> Martin Luther King Jr. was a key leader in the cival                   *\n";
	cout<<"\t\t*                        rights movement in the United States.                          *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='T' || ans=='t' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*      -- It was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 04 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            -->  The Petition of Right limited the power of the English monarch and    *\n";
	cout<<"\t\t*                       influenced the development of constitutional government.        *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='f' || ans=='F' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- It was Wrong --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 05 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*     --> The dropping of the atomic bombs occurred during Nagasaki.                    *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*      -- It was correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\t\t You have Scored "<<score<<" Points. ";
    Sleep(5000);
	
	}
	
	if( question.topic==2 && question.mode==2 && question.type==2 )
	{
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*        You have selected ' Historical Figures ' as your topic         *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                 And                      	        *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                 You wanna play Medium Mode with MCQ's                 *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              ------------------------------------------               *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                           Here you goo !!!!                           *\n";
	cout<<"\t\t*                                                                       *\n";		
	cout<<"\t\t*_______________________________________________________________________*\n\n\n";
	
	int score=0;
	char ans;
	cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 01 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*         -->  The storming of the Bastille is associated with which historical event   *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  American Revolution                              *\n";
	cout<<"\t\t*                              b) -->  French Revolution                                *\n";
	cout<<"\t\t*                              c) -->  Russian Revolution                               *\n";
	cout<<"\t\t*                              d) -->  Russian Revolution                               *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='B' || ans=='b' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- B was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 02 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            -->  Which economic plan aimed to aid Western Europe after World War II?   *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  The Marshall Plan                                *\n";
	cout<<"\t\t*                              b) -->  The New Deal                                     *\n";
	cout<<"\t\t*                              c) -->  The Great Leap Forward                           *\n";
	cout<<"\t\t*                              d) -->  The Truman Doctrine                              *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='a' || ans=='A' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- A was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 03 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*         -->  Who was a key leader in the civil rights movement in the United States?  *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Martin Luther King Jr.                           *\n";
	cout<<"\t\t*                              b) -->  Malcolm X\n                                      *\n";
	cout<<"\t\t*                              c) -->  Nelson Mandela                                   *\n";
	cout<<"\t\t*                              d) -->  Mahatma Gandhi                                   *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- A was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 04 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*        -->  Which document limited the power of the English monarch and               *\n"; 
	cout<<"\t\t*                influenced the development of constitutional government?               *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  The Magna Carta.                                 *\n";
	cout<<"\t\t*                              b) -->  The Petition of Right.                           *\n";
	cout<<"\t\t*                              c) -->  The English Bill of Rights.                      *\n";
	cout<<"\t\t*                              d) -->  The Habeas Corpus Act                            *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='C' || ans=='c' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- C was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 05 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*               -->  The dropping of the atomic bombs occurred during which conflict?   *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->   Hiroshima.                                      *\n";
	cout<<"\t\t*                              b) -->   Nagasaki.                                       *\n";
	cout<<"\t\t*                              c) -->   Pearl Harbor.                                   *\n";
	cout<<"\t\t*                              d) -->   Stalingrad.                                     *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='B' || ans=='b' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- B was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\t\t You have Scored "<<score<<" Points. ";
    Sleep(5000);
	
	}
	
	if( question.topic==2 && question.mode==3 && question.type==1 )
	{
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*        You have selected ' Historical Figures ' as your topic         *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                 And                      	        *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*               You wanna play Difficult Mode with T/F                  *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              ------------------------------------------               *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                           Here you goo !!!!                           *\n";
	cout<<"\t\t*                                                                       *\n";		
	cout<<"\t\t*_______________________________________________________________________*\n\n\n";
	
	int score=0;
	char ans;
	cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 01 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*    --> In Battle of Gaugamela, Alexander the Great defeat the Persian King Darius 3.  *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 02 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*    --> The Bay of Pigs invasion is associated with the Cuban Missile Crisis.          *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*      -- It was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 03 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> Joan of Arc played a significant role in the War of the Roses.         *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='F' || ans=='f' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Wrong --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 04 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            -->  The Opium Wars involved European powers fighting in East              *\n";
	cout<<"\t\t*                              Asia during the late 19th century.                       *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='f' || ans=='F' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- It was Wrong --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 05 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*     --> Treaty of Westphalia ended the Thirty Years' War in 1648.                     *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*      -- It was correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\t\t You have Scored "<<score<<" Points. ";
    Sleep(5000);
	
	}
	
	if( question.topic==2 && question.mode==3 && question.type==2 )
	{
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*        You have selected ' Historical Figures ' as your topic         *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                 And                      	        *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*               You wanna play Difficult Mode with MCQ's                *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              ------------------------------------------               *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                           Here you goo !!!!                           *\n";
	cout<<"\t\t*                                                                       *\n";		
	cout<<"\t\t*_______________________________________________________________________*\n\n\n";
	
	int score=0;
	char ans;
	cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 01 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> In which ancient battle did Alexander the Great defeat                 *\n";
	cout<<"\t\t*                             the Persian King Darius III?                              *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Battle of Marathon.                              *\n";
	cout<<"\t\t*                              b) -->  Battle of Cannae.                                *\n";
	cout<<"\t\t*                              c) -->  Battle of Gaugamela.                             *\n";
	cout<<"\t\t*                              d) -->  Battle of Thermopylae.                           *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='C' || ans=='c' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- C was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 02 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*           -->  The Bay of Pigs invasion is associated with which Cold War event ?     *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  The Suez Crisis.                                 *\n";
	cout<<"\t\t*                              b) -->  The Cuban Missile Crisis.                        *\n";
	cout<<"\t\t*                              c) -->  The Berlin Airlift.                              *\n";
	cout<<"\t\t*                              d) -->  The Gulf War.                                    *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='B' || ans=='b' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- B was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 03 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*       -->  Joan of Arc played a significant role in which historical conflict?        *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  The Hundred Years' War.                          *\n";
	cout<<"\t\t*                              b) -->  The War of the Roses.                            *\n";
	cout<<"\t\t*                              c) -->  The Thirty Years' War.                           *\n";
	cout<<"\t\t*                              d) -->  The War of 1812                                  *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
       {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- A was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 04 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*        -->  Which conflict involved European powers fighting in East Asia             *\n";
	cout<<"\t\t*                          during the late 19th century?                                *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  The Boxer Rebellion.                             *\n";
	cout<<"\t\t*                              b) -->  The Opium Wars.                                  *\n";
	cout<<"\t\t*                              c) -->  The Taiping Rebellion.                           *\n";
	cout<<"\t\t*                              d) -->  The War of the Triple Alliance                   *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- A was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 05 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*               -->  Which treaty ended the Thirty Years' War in 1648?                  *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->   Treaty of Tordesillas.                          *\n";
	cout<<"\t\t*                              b) -->   Treaty of Westphalia.                           *\n";
	cout<<"\t\t*                              c) -->   Treaty of Utrecht.                              *\n";
	cout<<"\t\t*                              d) -->   Treaty of Versailles.                           *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='B' || ans=='b' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- B was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\t\t You have Scored "<<score<<" Points. ";
    Sleep(5000);
	
	}
	
	if( question.topic==3 && question.mode==1 && question.type==1 )
	{
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              You have selected ' Animal World ' as your topic         *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                 And                      	        *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                   You wanna play Easy Mode with T/F                   *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              ------------------------------------------               *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                           Here you goo !!!!                           *\n";
	cout<<"\t\t*                                                                       *\n";		
	cout<<"\t\t*_______________________________________________________________________*\n\n\n";
	
	int score=0;
	char ans;
	cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 01 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*              --> Cats belong to Feline catagory.                                      *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 02 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*               --> Great White Shark is a fish.                                        *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*      -- It was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 03 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*             --> Tail is the prominent feature of an elephant.                         *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='F' || ans=='f' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Wrong --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 04 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                  -->  Koala is native to Australia.                                   *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 05 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*               --> Komodo Dragon is not a marsupial.                                   *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*      -- It was correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\t\t You have Scored "<<score<<" Points. ";
    Sleep(5000);
	
	}
	
	if( question.topic==3 && question.mode==1 && question.type==2 )
	{
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*            You have selected ' Animal World ' as your topic           *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                 And                      	        *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                  You wanna play Easy Mode with MCQ's                  *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              ------------------------------------------               *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                           Here you goo !!!!                           *\n";
	cout<<"\t\t*                                                                       *\n";		
	cout<<"\t\t*_______________________________________________________________________*\n\n\n";
	
	int score=0;
	char ans;
	cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 01 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> What category do cats belong to?                                       *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Feline.                                          *\n";
	cout<<"\t\t*                              b) -->  Canine.                                          *\n";
	cout<<"\t\t*                              c) -->  Avian.                                           *\n";
	cout<<"\t\t*                              d) -->  Reptilian.                                       *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- A was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 02 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*           -->   Which of the following is a fish ?                                    *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Great White Shark.                               *\n";
	cout<<"\t\t*                              b) -->  Clownfish.                                       *\n";
	cout<<"\t\t*                              c) -->  Seahorse.                                        *\n";
	cout<<"\t\t*                              d) -->  Dolphin.                                         *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- A was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 03 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*       -->   What is the prominent feature of an elephant?                             *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Trunk.                                           *\n";
	cout<<"\t\t*                              b) -->  Trail.                                           *\n";
	cout<<"\t\t*                              c) -->  Tusk.                                            *\n";
	cout<<"\t\t*                              d) -->  Horn.                                            *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='C' || ans=='c' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- C was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 04 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*        -->  Which animal is native to Australia?                                      *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Koala.                                           *\n";
	cout<<"\t\t*                              b) -->  Kanagroo.                                        *\n";
	cout<<"\t\t*                              c) -->  Kiwi.                                            *\n";
	cout<<"\t\t*                              d) -->  Dragon.                                          *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- A was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 05 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*               -->  Which animal is not a marsupial?                                   *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->   Dog.                                            *\n";
	cout<<"\t\t*                              b) -->   Fish.                                           *\n";
	cout<<"\t\t*                              c) -->   Bear.                                           *\n";
	cout<<"\t\t*                              d) -->   Komodo Dragon.                                  *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='D' || ans=='d' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- D was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\t\t You have Scored "<<score<<" Points. ";
    Sleep(5000);
	
	}
	
	if( question.topic==3 && question.mode==2 && question.type==1 )
	{
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              You have selected ' Animal World ' as your topic         *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                 And                      	        *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                  You wanna play Medium Mode with T/F                  *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              ------------------------------------------               *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                           Here you goo !!!!                           *\n";
	cout<<"\t\t*                                                                       *\n";		
	cout<<"\t\t*_______________________________________________________________________*\n\n\n";
	
	int score=0;
	char ans;
	cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 01 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*              --> A grizzly bear primarily has type of diet which is Omnivore.         *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='f' || ans=='F' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- It was Wrong --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 02 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*             --> Cheetah is a big cat  which is known for its speed and                *\n";
	cout<<"\t\t*                       is often considered the fastest land animal.                    *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*      -- It was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 03 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*             --> Chameleon is known for its ability to change color.                   *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='T' || ans=='t' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*      -- It was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 04 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                  -->   Galapagos Tortoise is known for its long lifespan.             *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 05 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*           --> In Greek mythology, Dolphin is a combination of a lion and a serpent.   *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='F' || ans=='f' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Wrong --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\t\t You have Scored "<<score<<" Points. ";
    Sleep(5000);
	
	}
	
	if( question.topic==3 && question.mode==2 && question.type==2 )
	{
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*            You have selected ' Animal World ' as your topic           *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                 And                      	        *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                 You wanna play Medium Mode with MCQ's                 *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              ------------------------------------------               *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                           Here you goo !!!!                           *\n";
	cout<<"\t\t*                                                                       *\n";		
	cout<<"\t\t*_______________________________________________________________________*\n\n\n";
	
	int score=0;
	char ans;
	cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 01 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> A grizzly bear primarily has which type of diet ?                      *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Herbivore.                                       *\n";
	cout<<"\t\t*                              b) -->  Omnivore.                                        *\n";
	cout<<"\t\t*                              c) -->  Carnivore.                                       *\n";
	cout<<"\t\t*                              d) -->  Insectivore.                                     *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='C' || ans=='c' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- C was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 02 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*           -->   Which big cat is known for its speed and is often considered          *\n";
	cout<<"\t\t*                                    the fastest land animal?                           *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Cheetah.                                         *\n";
	cout<<"\t\t*                              b) -->  Leapord.                                         *\n";
	cout<<"\t\t*                              c) -->  Tiger.                                           *\n";
	cout<<"\t\t*                              d) -->  Jaguar.                                          *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- A was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 03 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*       -->   Which reptile is known for its ability to change color?                   *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Chameleon.                                       *\n";
	cout<<"\t\t*                              b) -->  Iguana.                                          *\n";
	cout<<"\t\t*                              c) -->  Gecko.                                           *\n";
	cout<<"\t\t*                              d) -->  Komodo Dragon.                                   *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- A was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 04 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*        -->  Which type of turtle is known for its long lifespan?                      *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Galapagos Tortoise.                              *\n";
	cout<<"\t\t*                              b) -->  Green Sea Turtle.                                *\n";
	cout<<"\t\t*                              c) -->  Snapping Turtle.                                 *\n";
	cout<<"\t\t*                              d) -->  Box Turtle.                                      *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- A was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 05 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*               -->  In Greek mythology, which creature is a combination of             *\n";
	cout<<"\t\t*                              a lion and a serpent?                                    *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->   Pegasus.                                        *\n";
	cout<<"\t\t*                              b) -->   Centaur.                                        *\n";
	cout<<"\t\t*                              c) -->   Griffin.                                        *\n";
	cout<<"\t\t*                              d) -->   Chimera.                                        *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='C' || ans=='c' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- C was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\t\t You have Scored "<<score<<" Points. ";
    Sleep(5000);
	
	}
	
	if( question.topic==3 && question.mode==3 && question.type==1 )
	{
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              You have selected ' Animal World ' as your topic         *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                 And                      	        *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                You wanna play Difficult Mode with T/F                 *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              ------------------------------------------               *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                           Here you goo !!!!                           *\n";
	cout<<"\t\t*                                                                       *\n";		
	cout<<"\t\t*_______________________________________________________________________*\n\n\n";
	
	int score=0;
	char ans;
	cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 01 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*              --> Axolotl is known for regenerating its body parts.                    *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 02 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*             --> Quetzal is native to Madagascar and is the largest lemur.             *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='F' || ans=='f' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
          cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Wrong --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 03 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*               --> Orca is the largest living marine animal.                           *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='F' || ans=='f' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Wrong --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 04 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                  -->   Platypus lays eggs and is known for its duck-bill.             *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='t' || ans=='T' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- It was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 05 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*           -->  Andean Condor is known for its impressive wingspan and                 *\n";
	cout<<"\t\t*                        is often considered a symbol of power.                         *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='T' || ans=='t' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*      -- It was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\t\t You have Scored "<<score<<" Points. ";
    Sleep(5000);
	
	}
	
	if( question.topic==3 && question.mode==3 && question.type==2 )
	{
	
	system("cls");
	cout<<"\t\t_________________________________________________________________________\n";
    cout<<"\t\t*************************************************************************\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*            You have selected ' Animal World ' as your topic           *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                                 And                      	        *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*               You wanna play Difficult Mode with MCQ's                *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*              ------------------------------------------               *\n";
	cout<<"\t\t*                                                                       *\n";
	cout<<"\t\t*                           Here you goo !!!!                           *\n";
	cout<<"\t\t*                                                                       *\n";		
	cout<<"\t\t*_______________________________________________________________________*\n\n\n";
	
	int score=0;
	char ans;
	cout<<"\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 01 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*            --> Which unique animal is known for regenerating its body parts?          *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Axolotl.                                         *\n";
	cout<<"\t\t*                              b) -->  Quokka.                                          *\n";
	cout<<"\t\t*                              c) -->  Kakapo.                                          *\n";
	cout<<"\t\t*                              d) -->  Numbat.                                          *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- A was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 02 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*           -->  Which animal is native to Madagascar and is the largest lemur?         *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Indri.                                           *\n";
	cout<<"\t\t*                              b) -->  Quetzal.                                         *\n";
	cout<<"\t\t*                              c) -->  Capybara.                                        *\n";
	cout<<"\t\t*                              d) -->  Aye-Aye.                                         *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='A' || ans=='a' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- A was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 03 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*       -->  Which of the following is the largest living marine animal ?               *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Mantaray.                                        *\n";
	cout<<"\t\t*                              b) -->  Hammerhead Shark.                                *\n";
	cout<<"\t\t*                              c) -->  Blue whale.                                      *\n";
	cout<<"\t\t*                              d) -->  Orca.                                            *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='C' || ans=='c' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- C was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 04 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*        -->  Which Australian animal lays eggs and is known for its duck-bill?         *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->  Tasmanian Devil.                                 *\n";
	cout<<"\t\t*                              b) -->  Wombat.                                          *\n";
	cout<<"\t\t*                              c) -->  Platypus.                                        *\n";
	cout<<"\t\t*                              d) -->  Echidna.                                         *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='C' || ans=='c' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- C was Correct --        *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\n\t\t_________________________________________________________________________________________\n";
    cout<<"\t\t*****************************************************************************************\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*   -- Question : 05 --                                                                 *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*               -->  Which bird is known for its impressive wingspan and                *\n";
	cout<<"\t\t*                           is often considered a symbol of power?                      *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*                              a) -->   Harpy Eagle.                                    *\n";
	cout<<"\t\t*                              b) -->   Andean Condor.                                  *\n";
	cout<<"\t\t*                              c) -->   Secretary Bird.                                 *\n";
	cout<<"\t\t*                              d) -->   Bearded Vulture.                                *\n";
	cout<<"\t\t*                                                                                       *\n";
	cout<<"\t\t*_______________________________________________________________________________________*\n";
	cout<<"\t\t                                                                                         \n";
	cout<<"\t\t                                    Answers : ";
    cin>>ans;
    if( ans=='B' || ans=='b' )
    {
    	score++;
        cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Correct !! --         *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*       -- Good Job Buddy --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    }
    else
    {
    	cout<<"\n\t\t************************************\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*         -- Oppss !! --           *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t*        -- B was Correct --       *\n";
        cout<<"\t\t*                                  *\n";
        cout<<"\t\t************************************\n";
    	
    }
    
    cout<<"\t\t You have Scored "<<score<<" Points. ";
    Sleep(5000);
	
	}
		
}


// This is the main Funtion of the game.
int main()
{
	system("cls");
	ourdata();

	int count=1, pass, correctpass=23236;	
    cout<<"\t\t\t\t\t**********************************************\n";
    cout<<"\t\t\t\t\t                  !! LOGIN !!                 \n";
    cout<<"\t\t\t\t\t**********************************************\n\n\n";
    
    do
    {
	    cout<<"\t\t\t------------------------------------------------\n";
        cout<<"\t\t\t      Please Enter your password : ";
        cin>>pass;
        cout<<"\t\t\t------------------------------------------------\n";
        count++;    
	}
	while( (pass!=correctpass) && (count<=3) );
	{
		if( pass==correctpass )
        {
            cout<<"\t\t\t\t       Correct Password !! \n";
            cout<<"\t\t\t\t       Welcomee !!         \n";
            Sleep(3000);
            
            system("clr");
    int ch;
    
    do
    {
    menu();
    cout<<"\n Enter the choice for the menu : ";
    cin>>ch;
    
    switch( ch )
    {
    	case 1:
    		{
	        Question question[10];  
            int questionCount;
    		addQuestion( question , questionCount);
    	    }
    		break;
    		
    	case 2:
    		{
	        Question question[10];  
            int questionCount;
    		displayQuestion( question , questionCount);
    	    } 
    		break;
		
		case 3:
			{
	        Question question[10];  
            int questionCount;
    		updateQuestion( question , questionCount);
    	    }
			break;
		
		case 4:
			{
	        Question question[10];  
            int questionCount=0;
    		deleteQuestion( question , questionCount);
    	    }
			break;
		
		case 5:
			playgame();
			break;
			
		case 6:
			cout<<"\n-- Exiting the Game !! -- \n";
			cout<<"\n-- Do you really wanna exit the Game ? --";
			cout<<"\n-- Press 1 for yes! -- \n -- & -- \n -- 0 for No -- ";
			
			int op;
			cin>>op;
			
			if(op==1)
			{
				cout<<"\n\n -- Thank You !! -- \n -- The Game has been closed -- ";
			}
			else
			{
				cout<<"\n\n -- Yeh Wala Case Select hi ku kiya jab Exit nhi krna tha.. -- \n -- Ab to Game nhi chalee gii.. -- \n -- Ab Kro mazyy -- \n -- Byebye.. -- ";
			}
			break;
		
		default:
			cout<<"\n\n ~ Incorrect Input ~ \n ~ Please Try Again ~ ";
		
	    }
	    
    }
    while( ch!=6 );
    
    }
    else
    {
        cout<<"\t\t\t\t        Invalid login attempt!! \n";
        Sleep(1000);
    }
        
       }
    
   return 0;
}