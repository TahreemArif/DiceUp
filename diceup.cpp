# include <iostream>
# include <cstdlib>
# include <ctime>
# include <conio.h>
# include <Windows.h>
# include <string>
using namespace std;
void display_board(string board[],int size);
void player1_piece1(string board[],int size,int dice,int & i,int & j,int & indexCi,int & indexCj,int & indexDi,int & indexDj,int & count,int & pc_1,int & pc_2,int & total,int & total1,int & total2,int & hitrecord1,bool  & check_hit1,bool & check_move1);
void player1_piece2(string board[],int size,int dice,int & i,int & j,int & indexCi,int & indexCj,int & indexDi,int & indexDj,int & count,int & pc_1,int & pc_2,int & total,int & total1,int & total2,int & hitrecord1,bool  & check_hit2,bool & check_move2);
void player2_piece1(string board[],int size,int dice,int & i,int & j,int & indexAi,int & indexAj,int & indexBi,int & indexBj,int & count,int & pc_1,int & pc_2,int & total,int & total1,int & total2,int & hitrecord2,bool  & check_hit3,bool & check_move3);
void player2_piece2(string board[],int size,int dice,int & i,int & j,int & indexAi,int & indexAj,int & indexBi,int & indexBj,int & count,int & pc_1,int & pc_2,int & total,int & total1,int & total2,int & hitrecord2,bool  & check_hit4,bool & check_move4);
void welcome();
void colour_board();
void instructions();
void player1win();
void player2win();
void game_tie();
void player1win ()
{
	
  
	cout<<
		  "\n\n\n\n\n\n\n\n\n\n\n\n\n"
"                                         :::::::::  :::            :::     :::   ::: :::::::::: :::::::::          :::        \n"      
"                                         :+:    :+: :+:          :+: :+:   :+:   :+: :+:        :+:    :+:       :+:+:        \n"    
"                                         +:+    +:+ +:+         +:+   +:+   +:+ +:+  +:+        +:+    +:+         +:+        \n" 
"                                         +#++:++#+  +#+        +#++:++#++:   +#++:   +#++:++#   +#++:++#:          +#+        \n" 
"                                         +#+        +#+        +#+     +#+    +#+    +#+        +#+    +#+         +#+        \n" 
"                                         #+#        #+#        #+#     #+#    #+#    #+#        #+#    #+#         #+#        \n" 
"                                         ###        ########## ###     ###    ###    ########## ###    ###       #######      \n\n"
"                                                         :::       ::: ::::::::::: ::::    :::  ::::::::  \n"
"                                                         :+:       :+:     :+:     :+:+:   :+: :+:    :+: \n"
"                                                         +:+       +:+     +:+     :+:+:+  +:+ +:+        \n"
"                                                         +#+  +:+  +#+     +#+     +#+ +:+ +#+ +#++:++#++ \n"
"                                                         +#+ +#+#+ +#+     +#+     +#+  +#+#+#        +#+ \n"
"                                                          #+#+# #+#+#      #+#     #+#   #+#+# #+#    #+# \n"
"                                                           ###   ###   ########### ###    ####  ########  \n";

	system("color 0c");
	cin.ignore();
}
void player2win()
{
   cout<<
		  "\n\n\n\n\n\n\n\n\n\n\n\n\n"
"                                        :::::::::  :::            :::     :::   ::: :::::::::: :::::::::         :::::::: \n"       
"                                        :+:    :+: :+:          :+: :+:   :+:   :+: :+:        :+:    :+:       :+:    :+:\n"       
"                                        +:+    +:+ +:+         +:+   +:+   +:+ +:+  +:+        +:+    +:+             +:+\n"        
"                                        +#++:++#+  +#+        +#++:++#++:   +#++:   +#++:++#   +#++:++#:            +#+\n"          
"                                        +#+        +#+        +#+     +#+    +#+    +#+        +#+    +#+         +#+\n"            
"                                        #+#        #+#        #+#     #+#    #+#    #+#        #+#    #+#        #+#\n"             
"                                        ###        ########## ###     ###    ###    ########## ###    ###       ##########\n\n"       
"                                                         :::       ::: ::::::::::: ::::    :::  ::::::::  \n"
"                                                         :+:       :+:     :+:     :+:+:   :+: :+:    :+: \n"
"                                                         +:+       +:+     +:+     :+:+:+  +:+ +:+        \n"
"                                                         +#+  +:+  +#+     +#+     +#+ +:+ +#+ +#++:++#++ \n"
"                                                         +#+ +#+#+ +#+     +#+     +#+  +#+#+#        +#+ \n"
"                                                          #+#+# #+#+#      #+#     #+#   #+#+# #+#    #+# \n"
"                                                           ###   ###   ########### ###    ####  ########  \n";

	system("color 0c");
	cin.ignore();

};
void setcolor(unsigned short color)
{
	HANDLE hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon,color);
};
void one()
        {cout<<endl;
        setcolor(117);cout << " ----- " << endl;
        setcolor(117);cout << "|     |" << endl;
        setcolor(117);cout << "|  O  |" << endl;
        setcolor(117);cout << "|     |" << endl;
        setcolor(117);cout << " ----- " << endl;setcolor(240);
        }
void two()
        {cout<<endl;
        setcolor(117);cout << " ----- " << endl;
        setcolor(117);cout << "|    O|" << endl;
        setcolor(117);cout << "|     |" << endl;
        setcolor(117);cout << "|O    |" << endl;
        setcolor(117);cout << " ----- " << endl;setcolor(240);
        }
void three()
        {cout<<endl;
        setcolor(117);cout << " ----- " << endl;
        setcolor(117);cout << "|    O|" << endl;
        setcolor(117);cout << "|  O  |" << endl;
        setcolor(117);cout << "|O    |" << endl;
        setcolor(117);cout << " ----- " << endl;setcolor(240);
        }
void four()
        {cout<<endl;
        setcolor(117);cout << " ----- " << endl;
        setcolor(117);cout << "|O   O|" << endl;
        setcolor(117);cout << "|     |" << endl;
        setcolor(117);cout << "|O   O|" << endl;
        setcolor(117);cout << " ----- " << endl;setcolor(240);
        }
void five()
        {cout<<endl;
        setcolor(117);cout << " ----- " << endl;
        setcolor(117);cout << "|O   O|" << endl;
        setcolor(117);cout << "|  O  |" << endl;
        setcolor(117);cout << "|O   O|" << endl;
        setcolor(117);cout << " ----- " << endl;setcolor(240);
        }
void six()
        {cout<<endl;
        setcolor(117);cout << " ----- " << endl;
        setcolor(117);cout << "|O   O|" << endl;
        setcolor(117);cout << "|O   O|" << endl;
        setcolor(117);cout << "|O   O|" << endl;
        setcolor(117);cout << " ----- " << endl;setcolor(240);
        }
void game_tie()
{
cout<<"\n\n\n\n\n\n\n\n\n\n\n"
"\t\t\t\t                                                           ,;                                ,;\n"
"\t\t\t\t          .Gt                                            f#i                     t          f#i \n"
"\t\t\t\t         j#W:             ..            ..       :     .E#t           GEEEEEEEL  Ej       .E#t \n "
"\t\t\t\t       ;K#f              ;W,           ,W,     .Et    i#W,            ,;;L#K;;.  E#,     i#W,   \n "
"\t\t\t\t     .G#D.              j##,          t##,    ,W#t   L#D.                t#E     E#t    L#D.    \n"
"\t\t\t\t    j#K;               G###,         L###,   j###t  :K#Wfff;             t#E     E#t  :K#Wfff;  \n"
"\t\t\t\t  ,K#f   ,GD;        :E####,       .E#j##,  G#fE#t  i##WLLLLt            t#E     E#t  i##WLLLLt \n"
"\t\t\t\t   j#Wi   E#t       ;W#DG##,      ;WW; ##,:K#i E#t   .E#L                t#E     E#t   .E#L     \n"
"\t\t\t\t    .G#D: E#t      j###DW##,     j#E.  ##f#W,  E#t     f#E:              t#E     E#t     f#E:   \n"
"\t\t\t\t      ,K#fK#t     G##i,,G##,   .D#L    ###K:   E#t      ,WW;             t#E     E#t      ,WW;  \n"
"\t\t\t\t        j###t   :K#K:   L##,  :K#t     ##D.    E#t       .D#;            t#E     E#t       .D#; \n"
"\t\t\t\t         .G#t  ;##D.    L##,  ...      #G      ..          tt             fE     E#t         tt \n"
"\t\t\t\t           ;;  ,,,      .,,            #                                   :     ,;.            \n";
                                                                                                
system("color 0d");           
cin.ignore();


}
int main()
{   system("color 70");
	const int size = 40; // size of string a rray that prints the board
    string board[size];
    char player1_d; //player 1 key to roll the dice
    int player=1;  //main switch condition
	char piece;  // char to indicate the piece,the user want to move
	char player2_d;  //player 2 key to roll the dice.
    int count=0,// no of turns of each player
    count1=0,count2=0,count3=0,count4=0,//its value increment when dice for piece 1 = 6  
    dice1,dice2,dice3,dice4;// it generates random number
    int total1=0,total2=0,total3=0,total4=0;
	int piecehit1 = 0,piecehit2 = 0; //piece hit.
	static int indexAi=16,indexAj=10; //for  player 1 piece 1 starting index number
	static int indexBi=17,indexBj=10; //for  player 1 piece 2 starting index number
	static int indexCi=22,indexCj=80; //for  player 2 piece 1 starting index number
	static int indexDi=23,indexDj=80; //for  player 2 piece 2 starting index number
	bool check_hit1;     // to check whether if piece A comfortably move inside the run line
    bool check_hit2;     // to check whether if piece B comfortably move inside the run line
	bool check_hit3;     // to check whether if piece C comfortably move inside the run line
	bool check_hit4;     // to check whether if piece D comfortably move inside the run line
	bool check_move1 = true; // to check whether the piece A before hitting player 2 piece can move upto the runline
	bool check_move2 = true; // to check whether the piece B before hitting player 2 piece can move upto the runline
	bool check_move3 = true; // to check whether the piece c before hitting player 1 piece can move upto the runline
	bool check_move4 = true; // to check whether the piece d before hitting player 1 piece can move upto the runline
	welcome();
	Sleep(4000);
	system("cls");
	instructions();
	system("pause");
	system("cls");
	colour_board();
	system("pause");
	system("cls");
    display_board(board,27);
 
      do{ switch(player )
	   {
	   case 1: 
          start2:system("color fc");
		   cout<<"\tPLAYER 1\n "; bonus1: cout << "press ANY APLHA NUMERIC KEY  to roll dice.";
               here: player1_d=cin.get();
		             cin.ignore(10,'\n');
                    if(player1_d!='#')
                   { srand((unsigned) time(NULL));
					 dice1=  rand()% 6+1;
		             dice2= dice1;
					  if(dice1==6)
				       {six();
			           Beep(600,1000);}
			 else if(dice1==5)
				 five();
			 else if(dice1==4)
				 four();
			 else if(dice1==3)
				 three();
			 else if(dice1==2)
				 two();
			 else if(dice1==1)
			 one();
                   }   
               else 
			      { cout<<"Invalid input, try again."<<endl;goto here;}
 
              if(dice1 <= 6 )
                 {  
				  cout<<"Dice roll is: "<<dice1<<endl;
				  if( ( count1 == 0 && count2 == 0 && dice1 < 6 ) || ( count1==0 && check_hit2 == true )|| ( count2==0 && check_hit1 == true ))
					{ 
					cout<<"\nNone of your pieces is legal to move yet!"<<endl;
					Sleep(2000);
					display_board(board,size);
				    goto start1;
				  } //condition to check whether any of the pieces of player 1 is in working position
									
                  else piece1:cout << "Which piece do you want to move(A OR B)?";
                  piece=getch();
                  switch(piece)
                      {
                         case 'a' : 
			             case 'A' : if (check_hit1 == true )
						            {cout<<"\tTHIS PIECE HAVE RUN OUT!" << endl;
							         if( check_hit2 == false ||( total2 == 0 && count2 == 0))
                                        goto start1;
									 else if ( total2 >= 0 && count2 > 0 && total2 < 47 )
										 {Sleep(1000);
									 total2 += dice1;
									 player1_piece2(board,size,dice1,indexBi,indexBj,indexCi,indexCj,indexDi,indexDj,count2,count3,count4,total2,total3,total4,piecehit1,check_hit2,check_move2);}
									 }
					               else   
									{
									 if( count1 == 0 && dice1==6 )
                                    { 
                                     board[7].replace(13,1," "); 
                                     board[16].replace(10,1,"A");
                                     display_board(board,size);
                                     count1++;
                                    }   // the condition to initialize a piece 
                                    else if(count1 >= 1)
                                     {
									 total1 += dice1;
									 check_move1 = true;
                                     player1_piece1(board,size,dice1,indexAi,indexAj,indexCi,indexCj,indexDi,indexDj,count1,count3,count4,total1,total3,total4,piecehit1,check_hit1,check_move1);
									  if(( total1 >= 42 && check_hit1 == false && total2 >= 0 && count2 > 0 && (total2 + dice1 ) <= 47)||
										  (check_move1 == false &&  piecehit1 == 0 && total2 >= 0 && count2 > 0 && (total2 + dice1 ) <= 42))
										  {
										   //cout <<"\tPIECE A IS UNABLE TO MOVE!"<<endl;
										   Sleep(2000);
										   total2 += dice1;
									       player1_piece2(board,size,dice1,indexBi,indexBj,indexCi,indexCj,indexDi,indexDj,count2,count3,count4,total2,total3,total4,piecehit1,check_hit2,check_move2);
									      }
									      
									 }   // the condition to increase the total
					                else 
					                 {
								     cout<<"Illegal move,TRY AGAIN!"<<endl;
									 goto piece1;
									 }  // if you try to move a piece that is not inititalized
					                 if (dice1 == 6)
						             {
										 if(check_move1==false)
										    {cout<<"NO BONUS TURN."<<endl;
										     break;}
										 else
								           {
											cout<<"\tYou have got a BONUS turn!"<<endl;
									        goto bonus1;}
									 }//if ends
									}//else ends
									 break;
			             case 'b':
			            case 'B'  :{
							         if (check_hit2 == true )
						                {cout<<"\tTHIS PIECE HAVE RUN OUT!" << endl;
							         if( check_hit1 == false || total1 == 0)
                                        goto start1;
									 else if ( total1 >= 0 && count1 > 0 && total1 < 47 )
										 {
										   total1 += dice2;
										   //cout <<"\tPIECE B IS UNABLE TO MOVE!"<<endl;
										   Sleep(2000);
										   player1_piece1(board,size,dice1,indexAi,indexAj,indexCi,indexCj,indexDi,indexDj,count1,count3,count4,total1,total3,total4,piecehit1,check_hit1,check_move1);
									      }
							      }
					                else {
					 				  if(count2 == 0 && dice2 == 6)
                                      { 
                                       board[7].replace(19,1," "); 
                                       board[17].replace(10,1,"B");
                                       display_board(board,size);
                                       count2++;
                                      }
                                     else if(count2 >=1 )
                                      {
									  total2 += dice2;
									  check_move2 = true;
				                      player1_piece2(board,size,dice2,indexBi,indexBj,indexCi,indexCj,indexDi,indexDj,count2,count3,count4,total2,total3,total4,piecehit1,check_hit2,check_move2);
									  if( (total2 >=42 && check_hit2 == false && total1 >=  0 && count1 > 0 && (total1 + dice2 ) <= 47)||
										  ( check_move2 == false && piecehit1 == 0 && total1 >= 0 && count1 > 0 && (total1 + dice2 ) <= 42))
										  {
										   total1 += dice2;
										   //cout <<"\tPIECE B IS UNABLE TO MOVE!"<<endl;
										   Sleep(2000);
										   player1_piece1(board,size,dice1,indexAi,indexAj,indexCi,indexCj,indexDi,indexDj,count1,count3,count4,total1,total3,total4,piecehit1,check_hit1,check_move1);
									      }
									  }
					                 else
					                 {
									  cout<<"Illegal move,Try again!"<<endl;
									  goto piece1;
									 }
					                 if (dice2 == 6)
						               {
										 if(check_move2==false)
										   {cout<<"NO BONUS TURN."<<endl;
										     break;}
										 else
										  {  
											 cout<<"\tYou have got a bonus turn!"<<endl;
										     goto bonus1;}
									   }//if ends

								      }//else ends
									 break;
			             default:cout<<"Invalid move!"<<endl;
				                 goto piece1;
								 break;
								   }//switch for piece B ends. 
				          } // switch for player 1 ends
						  if(total1==42 && total2==42 && piecehit1==0)
						      { 
								  cout<<"\t\tGAME OVER, TIE.";system("cls");game_tie();
								  system("pause");
								  goto TIE;}
                    }  // IF FOR DICE ENDS
					if(total1>=47 && total2>=47 )
						 { 
							 cout <<"   PLAYER 1 WINS!"<<endl; system("cls");player1win();system("pause");
						    goto End;
						 }
			   
	  case 2:                                         //case for player 2.
             {
			  
              start1:system("color f9");
		      cout<<"\tPLAYER 2\n"; bonus2 :cout<<"press ANY ALPHA NUMERIC KEY AND ENTER to roll dice.";
              here1: player2_d=cin.get();
		      cin.ignore(35,'\n');
			   if(player2_d!='#')
               {     srand((unsigned) time(NULL));
                     dice3 =  rand()% 6+1;
					 dice4 = dice3;
					 if(dice3==6)
				 {six();
			 Beep(600,1000);}
			 if(dice3==5)
				 five();
			 else if(dice3==4)
				 four();
			 else if(dice3==3)
				 three();
			 else if(dice3==2)
				 two();
			 else if(dice3==1)
			 one();
               }
              else { cout<<"Invalid input, try again."<<endl;goto here1;}
 
              if(dice3 <= 6 )
            {  
             cout<<"Dice roll is: "<<dice3<<endl;
			 if ( ( count3 == 0 && count4 == 0 && dice3 < 6 ) || ( count3 == 0 && check_hit4 == true && dice3 < 6)|| ( count4 == 0 && check_hit3 == true && dice4 < 6))
				 		{
				         cout<<"\nNone of your pieces is legal to move yet!"<<endl;
						 Sleep(2000);
						 display_board(board,size);
				         goto start2;
						} //condition to check whether any of the pieces of player 2 is in working position
			 else piece2:cout << "Which piece do you want to move(C OR D)?";
             piece=getch();
             switch(piece)
             {
			 case 'c' :
		     case 'C' : {
				         if (check_hit3 == true )
						   {cout<<"\tTHIS PIECE HAVE RUN OUT!" << endl;
							         if( check_hit4 == false  || (total4 == 0 && count4==0))
                                        goto start2;
								    else if ( total4 >= 0 && count4 > 0 && total4 < 47 )
									   {  //cout <<"\tPIECE C IS UNABLE TO MOVE!"<<endl;
						                  Sleep(2000);
										 total4 += dice3;
										 player2_piece2(board,size,dice3,indexDi,indexDj,indexAi,indexAj,indexBi,indexBj,count4,count1,count2,total4,total1,total2,piecehit2,check_hit4,check_move4);
										}
						   }
					  else
			             {
							 if( count3 == 0 && dice3==6 )
                        { 
                         board[32].replace(71,1," "); 
                         board[22].replace(80,1,"C");
                         display_board(board,size);
                         count3++;
                        }
                        else if(count3 >= 1)
                         { 
						   total3 += dice3;
						   check_move3 = true;
                           player2_piece1(board,size,dice3,indexCi,indexCj,indexAi,indexAj,indexBi,indexBj,count3,count1,count2,total3,total1,total2,piecehit2,check_hit3,check_move3);
						 if( (total3 >= 42 && check_hit3 == false && total4 >= 0 && count4 >0 && (total4 + dice3 ) <= 47) ||
							 (check_move3 == false  && piecehit2 == 0 && total4 >= 0 && count4 > 0 && (total4 + dice3 ) <= 42) )
						  {  //cout <<"\tPIECE C IS UNABLE TO MOVE!"<<endl;
						     Sleep(2000);
							 total4 += dice3;
                             player2_piece2(board,size,dice3,indexDi,indexDj,indexAi,indexAj,indexBi,indexBj,count4,count1,count2,total4,total1,total2,piecehit2,check_hit4,check_move4);
						  }
						 }
					  else
					       {
							cout<<"Illegal move,Try again!"<<endl;
					        goto piece2;
						   }
                      if (dice3 == 6)
						  {
							  if(check_move3==false)
							  {
								  cout<<"NO BONUS TURN."<<endl;
								  break;
							  }
							  else
							  {
								  cout<<"\tYou have got a bonus turn!"<<endl;
							      goto bonus2;}
					       }
						 }
						break;}
					// else ends of the condition which check whether the piece has run out
					
		 	 case 'd' :
             case 'D' :{
				       if (check_hit4 == true)
				        {cout<<"\tTHIS PIECE HAVE RUN OUT!" << endl;
					   if( check_hit3 == false || total3 == 0)
                           goto start2;
					   else if ( total3 >= 0 && count3 > 0 && total3 < 47 )
							{ //cout <<"\tPIECE D IS UNABLE TO MOVE!"<<endl;
						      Sleep(2000);
						     total3 += dice4;
							 player2_piece1(board,size,dice4,indexCi,indexCj,indexAi,indexAj,indexBi,indexBj,count3,count1,count2,total3,total1,total2,piecehit2,check_hit3,check_move3);
						    }			
					    }
					   else
					   {if(count4 == 0 && dice4 == 6 )
                       { 
                        board[32].replace(78,1," "); 
                        board[23].replace(80,1,"D");
                        display_board(board,size);
                        count4++;
                       }
                      else if (count4 >= 1)
                        {total4 += dice4;
				         check_move4 = true;
                         player2_piece2(board,size,dice4,indexDi,indexDj,indexAi,indexAj,indexBi,indexBj,count4,count1,count2,total4,total1,total2,piecehit2,check_hit4,check_move4);
				          if(( total4 >=42 && check_hit1 == false && total3 >= 0 && count3 > 0 && (total3 + dice4 ) <= 47)||
							  (check_move4 == false && piecehit2 == 0 && total3 >= 0 && count3 > 0 && (total3 + dice4 ) <= 42))
							{ //cout <<"\tPIECE D IS UNABLE TO MOVE!"<<endl;
						      Sleep(2000);
						     total3 += dice4;
							 player2_piece1(board,size,dice4,indexCi,indexCj,indexAi,indexAj,indexBi,indexBj,count3,count1,count2,total3,total1,total2,piecehit2,check_hit3,check_move3);
						    }
						 }
					  else 
					  {cout << "Illegal move,Try again!"<<endl;
					  goto piece2;}
					  if (dice4 == 6)
					     {
							 if(check_move4 == false)
							   {cout<<" NO BONUS TURN."<<endl;
								   break;}
							 else
							  {
								 cout<<"\tYou have got a bonus turn!"<<endl;
							     goto bonus2;}
					     }//if ends.
					   }//else end
					  break;
			 default:cout<<"Invalid move!"<<endl;
				     goto piece2;
					 break;
			 }//switch for piece D ends.
			 
			 }// SWITCH PIECE FOR PLAYER 2 ENDS
			 if(total3==42 && total4==42 && piecehit2==0)
				{ 
					cout<<"\t\tGAME OVER, GAME TIE.";system("cls");game_tie();
								  system("pause");
					goto TIE;
			 }
			  }  // IF FOR DICE ENDS
			  if(total3>=47 && total4>=47)
						 { 
							 cout <<"   PLAYER 2 WINS!"<<endl; system("cls");player2win(); 
						    goto End;
						 }
			  
			 } // CASE 2 OF SWITCH(PLAYER) ENDS
		count++;	 
	   } // SWITCH FOR PLAYER ENDS
	   
	 }//do
 while((total1 <= 47 && total2 <= 47) || (total3 <= 47 && total4 <= 47));//while((total1 >= 47 && total2 >= 47) || (total3 >= 47 && total4 >= 47));
 End:;
 TIE:;
return 0;}
void welcome()
{
   // Sleep(2000);
	cout<<"\n\n";
    system ("color 01");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<< "\t\t\t\t\t       @@@  @@@  @@@  @@@@@@@@  @@@        @@@@@@@   @@@@@@   @@@@@@@@@@   @@@@@@@@ \n";
    cout<<"\t\t\t\t\t       @@@  @@@  @@@  @@@@@@@@  @@@       @@@@@@@@  @@@@@@@@  @@@@@@@@@@@  @@@@@@@@  \n";
	
    cout<<"\t\t\t\t\t       @@!  @@!  @@!  @@!       @@!       !@@       @@!  @@@  @@! @@! @@!  @@!    \n"  ;
    
    cout<<"\t\t\t\t\t       !@!  !@!  !@!  !@!       !@!       !@!       !@!  @!@  !@! !@! !@!  !@!   \n" ;
    
    cout<<"\t\t\t\t\t       @!!  !!@  @!@  @!!!:!    @!!       !@!       @!@  !@!  @!! !!@ @!@  @!!!:! \n";
    
    cout<<"\t\t\t\t\t       !@!  !!!  !@!  !!!!!:    !!!       !!!       !@!  !!!  !@!   ! !@!  !!!!!:  \n";
   
    cout<<"\t\t\t\t\t       !!:  !!:  !!:  !!:       !!:       :!!       !!:  !!!  !!:     !!:  !!:    \n";
   
    cout<<"\t\t\t\t\t       :!:  :!:  :!:  :!:        :!:      :!:       :!:  !:!  :!:     :!:  :!:    \n" ;
   
    cout<<"\t\t\t\t\t       :::: :: :::    :: ::::   :: ::::   ::: :::  ::::: ::  :::     ::    :: ::::\n";
    
    cout<<"\t\t\t\t\t       :: :  : :    : :: ::   : :: : :   :: :: :   : :  :    :      :    : :: ::  \n" ;
	system ("color 0d");

	Sleep(400);
	system ("color 0b");
	Sleep(200);
	system ("color 0c");
	Sleep(200);
	system ("color 02");
	Sleep(200);
	system ("color 01");
	system ("color 0c");
	Sleep(100);
	system ("color 02");
	Sleep(100);
	system ("color 04");
	Sleep(100);
	system ("color 01");
	system ("color 0c");
	Sleep(100);
	system ("color 02");
	Sleep(100);
	system ("color 04");
	Sleep(100);
	system ("color 09");
	
	
    Sleep(2000);
    system("cls");
	cout<<"\n";
	system ("color 0c");
	cout<<     "\n\n\t\t      *************************************************************************************************************************\n";
	Sleep(100);
	system ("color 01");
    cout<<         "\t\t      *                         *[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]*                          *\n";
	Sleep(100);
	system ("color 02");
    cout<<         "\t\t      *                         ********************************************************************                          *\n";
	Sleep(100);
	system ("color 03");
    cout<<         "\t\t      *                         *[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]*                          *\n";
	Sleep(100);
	system ("color 04");
    cout<<         "\t\t      *                         ********************************************************************                          *\n";
	Sleep(100);
	system ("color 05");
    cout<<         "\t\t      *                         *[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]*                          *\n";
	Sleep(100);
	system ("color 06");
    cout<<         "\t\t      *                         ********************************************************************                          *\n";
	Sleep(100);
	system ("color 01");
    cout<<         "\t\t      *                         *[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]*                          *\n";
	Sleep(100);
	system ("color 01");
	cout<<         "\t\t      *                         ********************************************************************                          *\n";
	Sleep(100);
	system ("color 01");
    cout<<         "\t\t      *                         *[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]*                          *\n";
	Sleep(100);
	system ("color 08");
    cout<<        "\t\t      *************************************************************************************************************************\n";
	Sleep(100);
	system ("color 0f");



   cout<<         "\t\t\t DDDDDDDDDDDDD        IIIIIIIIII        CCCCCCCCCCCCCEEEEEEEEEEEEEEEEEEEEEE     UUUUUUUU     UUUUUUUUPPPPPPPPPPPPPPPPP\n"   
                  "\t\t\t D::::::::::::DDD     I::::::::I     CCC::::::::::::CE::::::::::::::::::::E     U::::::U     U::::::UP::::::::::::::::P\n"  
                  "\t\t\t D:::::::::::::::DD   I::::::::I   CC:::::::::::::::CE::::::::::::::::::::E     U::::::U     U::::::UP::::::PPPPPP:::::P\n" 
                  "\t\t\t DDD:::::DDDDD:::::D  II::::::II  C:::::CCCCCCCC::::CEE::::::EEEEEEEEE::::E     UU:::::U     U:::::UUPP:::::P     P:::::P\n"
                  "\t\t\t   D:::::D    D:::::D   I::::I   C:::::C       CCCCCC  E:::::E       EEEEEE      U:::::U     U:::::U   P::::P     P:::::P\n"
                  "\t\t\t   D:::::D     D:::::D  I::::I  C:::::C                E:::::E                   U:::::D     D:::::U   P::::P     P:::::P\n"
                  "\t\t\t   D:::::D     D:::::D  I::::I  C:::::C                E::::::EEEEEEEEEE         U:::::D     D:::::U   P::::PPPPPP:::::P\n" 
                  "\t\t\t   D:::::D     D:::::D  I::::I  C:::::C                E:::::::::::::::E         U:::::D     D:::::U   P:::::::::::::PP\n"  
                  "\t\t\t   D:::::D     D:::::D  I::::I  C:::::C                E:::::::::::::::E         U:::::D     D:::::U   P::::PPPPPPPPP\n"    
                  "\t\t\t   D:::::D     D:::::D  I::::I  C:::::C                E::::::EEEEEEEEEE         U:::::D     D:::::U   P::::P\n"            
                  "\t\t\t   D:::::D     D:::::D  I::::I  C:::::C                E:::::E                   U:::::D     D:::::U   P::::P\n"            
                  "\t\t\t   D:::::D    D:::::D   I::::I   C:::::C       CCCCCC  E:::::E       EEEEEE      U::::::U   U::::::U   P::::P\n"            
                  "\t\t\t DDD:::::DDDDD:::::D  II::::::II  C:::::CCCCCCCC::::CEE::::::EEEEEEEE:::::E      U:::::::UUU:::::::U PP::::::PP\n"          
                  "\t\t\t D:::::::::::::::DD   I::::::::I   CC:::::::::::::::CE::::::::::::::::::::E       UU:::::::::::::UU  P::::::::P\n"          
                  "\t\t\t D::::::::::::DDD     I::::::::I     CCC::::::::::::CE::::::::::::::::::::E         UU:::::::::UU    P::::::::P\n"          
                  "\t\t\t DDDDDDDDDDDDD        IIIIIIIIII        CCCCCCCCCCCCCEEEEEEEEEEEEEEEEEEEEEE           UUUUUUUUU      PPPPPPPPPP\n"          
                                                                                                                        
                                                                                  
            "\t\t       ************************************************************************************************************************\n";
	Sleep(100);
	system ("color 08");
	cout<<		  "\t\t       *                        *[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]*                          *\n";
	Sleep(100);
	system ("color 0a");
    cout<<        "\t\t       *                        ********************************************************************                          *\n";
	Sleep(100);
	system ("color 0b");
	cout<<		  "\t\t       *                        *[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]*                          *\n";
	Sleep(100);
	system ("color 05");
 	cout<<        "\t\t       *                        ********************************************************************                          *\n";
	Sleep(100);
	system ("color 08");
	cout<<		  "\t\t       *                        *[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]*                          *\n";
	Sleep(100);
	system ("color 08");
	cout<<        "\t\t       *                        ********************************************************************                          *\n";
	Sleep(100);
	system ("color 05");
	cout<<		  "\t\t       *                        *[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]*                          *\n";
	Sleep(100);
	system ("color 08");
	cout<<        "\t\t       *                        ********************************************************************                          *\n";
	Sleep(100);
	system ("color 05");
	cout<<		  "\t\t       *                        *[ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]*                          *\n";
	Sleep(100);
	system ("color 02");
    cout<<        "\t\t       ************************************************************************************************************************\n";


	system ("color 0d");
	Sleep(100);
	system ("color 0b");
	Sleep(100);
	system ("color 0c");
	Sleep(100);
	system ("color 02");
	Sleep(100);
	system ("color 04");
	Sleep(100);
	system ("color 0d");

}
void colour_board()
{
	system("color f1");
		  setcolor(240);cout<<"\n\n\n"
	
	<<"\n\n";	
setcolor(240);cout<< "\t\t\t\t";setcolor(160);cout<<"************************************";setcolor(112);cout<<"*********************";setcolor(224);cout<<"***********************************";setcolor(240);cout<< "*\n";
setcolor(240); cout<< "\t\t\t\t";setcolor(160);cout<<"*                                  *";setcolor(112);cout<<"|     ||     ||     |";setcolor(224);cout<<"*                                  ";setcolor(240);cout<< "*\n"; 
setcolor(240); cout<< "\t\t\t\t";setcolor(160);cout<<"*                                  *";setcolor(112);cout<<"|     ||     ||     |";setcolor(224);cout<<"*                                  ";setcolor(240); cout<< "*\n ";
setcolor(240); cout<< "\t\t\t\t";setcolor(160);cout<< "*                                  *";setcolor(112);cout<<"*********************";setcolor(224);cout<<"*                                  ";setcolor(240);cout<< "*\n";
setcolor(240);cout<< " These are pieces for player 1--";setcolor(160);cout<<"----------->> A    B               *";setcolor(112);cout<<"|     ||     ||     |";setcolor(224);cout<<"*                                  " ;setcolor(240);cout<< "*\n";
setcolor(240); cout<< "\t\t\t\t";setcolor(160);cout<<"*                                  *";setcolor(112);cout<<"|     ||     ||     |";setcolor(224);cout<<"*                                  "; setcolor(240);cout<< "*\n";
setcolor(240); cout<< "\t\t\t\t";setcolor(160);cout<<"*                                  *";setcolor(112);cout<<"*********************";setcolor(224);cout<<"*                                  ";setcolor(240);cout<< "*\n";
setcolor(240); cout<< "\t\t\t\t";setcolor(160);cout<<"*                                  *";setcolor(112);cout<<"|     ||     ||     |";setcolor(224);cout<<"*                                  " ;setcolor(240);cout<< "*\n";
setcolor(240); cout<< "\t\t\t\t";setcolor(160);cout<<"*                                  *";setcolor(112);cout<<"|     ||     ||     |";setcolor(224);cout<<"*                                  ";setcolor(240);cout<< "*\n";
setcolor(240); cout<< "\t\t\t\t";setcolor(160);cout<< "*                                  *";setcolor(112);cout<<"*********************";setcolor(224);cout<<"*                                  ";setcolor(240);cout<< "*\n";
setcolor(240); cout<< "\t\t\t\t";setcolor(160);cout<<"*                                  *";setcolor(112);cout<<"|     ||     ||     |";setcolor(224);cout<<"*                                  " ;setcolor(240);cout<< "*\n";
setcolor(240); cout<< "\t\t\t\t";setcolor(160);cout<< "*                                  *";setcolor(112);cout<<"|     ||     ||     |";setcolor(224);cout<<"*                                  ";setcolor(240);cout<< "*\n";
setcolor(240); cout<< "\t\t\t\t";setcolor(160);cout<< "************************************";setcolor(112);cout<<"*********************";setcolor(224);cout<<"***********************************";setcolor(240);cout<< "*\n";
  setcolor(240); cout<<" It is the stop for piece-------";setcolor(116);cout<<"----->>|{STOP }|     ||     ||     || xxx || xxx || xxx ||     ||     ||     ||     ||     |";setcolor(240);cout<< "*\n";
setcolor(240);cout<< "     A and B.                   ";setcolor(116);cout<<"*|     |{     }|     ||     ||     || xxx || xxx || xxx ||     ||     ||     ||     ||     |";setcolor(240);cout<< "*\n";
setcolor(240);cout<< "\t\t\t\t";setcolor(116);cout<< "********************************************************************************************";setcolor(240);cout<< "*\n";
setcolor(240);cout<< " It is winning line for piece---";setcolor(116);cout<<"------>>{     }{     }{     }{     }| xxx || xxx || xxx |{     }{     }{     }{     }|<<----";setcolor(240);cout<< "-----  It is winning line for piece.\n";
setcolor(240);cout<<"   A and B                      ";setcolor(116);cout<<"*|     |{     }{     }{     }{     }| xxx || xxx || xxx |{     }{     }{     }{     }|     |";setcolor(240);cout<< "*           C and D.\n";
setcolor(240);cout<< "\t\t\t\t";setcolor(116);cout<< "********************************************************************************************";setcolor(240);cout<< "*\n";
setcolor(240);cout<< "\t\t\t\t";setcolor(116);cout<< "*|     ||     ||     ||     ||     || xxx || xxx || xxx ||     ||     ||     |{STOP }|<<----";setcolor(240);cout<< "------It is the stop for piece.\n";
setcolor(240);cout<< "\t\t\t\t";setcolor(116);cout<< "*|     ||     ||     ||     ||     || xxx || xxx || xxx ||     ||     ||     |{     }|     |";setcolor(240);cout<< "*         C and D.\n";
setcolor(240);cout<< "\t\t\t\t";setcolor(144);cout<< "************************************";setcolor(112);cout<<"*********************";setcolor(192);cout<<"***********************************";setcolor(240);cout<< "*\n";
setcolor(240);cout<< "\t\t\t\t";setcolor(144);cout<<"*                                  *";setcolor(112);cout<<"|     ||     ||     |";setcolor(192);cout<<"*                                  " ;setcolor(240);cout<< "*\n";
setcolor(240);cout<< "\t\t\t\t";setcolor(144);cout<<"*                                  *";setcolor(112);cout<<"|     ||     ||     |";setcolor(192);cout<<"*                                  ";setcolor(240);cout<< "*\n";
setcolor(240);cout<< "\t\t\t\t";setcolor(144);cout<<"*                                  *";setcolor(112);cout<<"*********************";setcolor(192);cout<<"*                                  ";setcolor(240);cout<< "*\n";
setcolor(240);cout<< "\t\t\t\t";setcolor(144);cout<<"*                                  *";setcolor(112);cout<<"|     ||     ||     |";setcolor(192);cout<<"*                                  " ;setcolor(240);cout<< "*\n";
setcolor(240);cout<< "\t\t\t\t";setcolor(144);cout<< "*                                  *";setcolor(112);cout<<"|     ||     ||     |";setcolor(192);cout<<"*                                  ";setcolor(240);cout<< "*\n";
setcolor(240);cout<< "\t\t\t\t";setcolor(144);cout<< "*                                  *";setcolor(112);cout<<"*********************";setcolor(192);cout<<"*                                  " ;setcolor(240);cout<< "*\n";
setcolor(240);cout<< "\t\t\t\t";setcolor(144);cout<<"*                                  *";setcolor(112);cout<<"|     ||     ||     |";setcolor(192);cout<<"*                                  " ;setcolor(240);cout<< "*\n";
setcolor(240);cout<< "\t\t\t\t";setcolor(144);cout<<"*                                  *";setcolor(112);cout<<"|     ||     ||     |";setcolor(192);cout<<"*             C      D <<----------";setcolor(240);cout<< "----These are pieces for player 2 .\n"; 
setcolor(240);cout<< "\t\t\t\t";setcolor(144);cout<< "*                                  *";setcolor(112);cout<<"*********************";setcolor(192);cout<<"*                                  ";setcolor(240);cout<< "*\n";
setcolor(240);cout<< "\t\t\t\t";setcolor(144);cout<< "*                                  *";setcolor(112);cout<<"|     ||     ||     |";setcolor(192);cout<<"*                                  " ;setcolor(240);cout<< "*\n";
setcolor(240);cout<< "\t\t\t\t";setcolor(144);cout<< "*                                  *";setcolor(112);cout<<"|     ||     ||     |";setcolor(192);cout<<"*                                  ";setcolor(240);cout<< "*\n";
setcolor(240);cout<< "\t\t\t\t";setcolor(144);cout<< "************************************";setcolor(112);cout<<"*********************";setcolor(192);cout<<"***********************************";setcolor(240);cout<< "*\n";
cout <<endl<<endl<<endl;
cout<<"                               PRESS ENTER TO START THE GAME"<<endl;
}
void instructions()
{
                                                                              
      system ("color 0b");
cout<<  
"\n\n"
"\t\t   8888888 888b    888  .d8888b.  88888888888 8888888b.  888     888  .d8888b.  88888888888 8888888  .d88888b.  888b    888  .d8888b.\n"  
"\t\t     888   8888b   888 d88P  Y88b     888     888   Y88b 888     888 d88P  Y88b     888       888   d88P' 'Y88b 8888b   888 d88P  Y88b \n"
"\t\t     888   88888b  888 Y88b.          888     888    888 888     888 888    888     888       888   888     888 88888b  888 Y88b.      \n"
"\t\t     888   888Y88b 888  'Y888b.       888     888   d88P 888     888 888            888       888   888     888 888Y88b 888  'Y888b.   \n"
"\t\t     888   888 Y88b888     'Y88b.     888     8888888P'  888     888 888            888       888   888     888 888 Y88b888     'Y88b. \n"
"\t\t     888   888  Y88888       '888     888     888 T88b   888     888 888    888     888       888   888     888 888  Y88888       '888 \n"
"\t\t     888   888   Y8888 Y88b  d88P     888     888  T88b  Y88b. .d88P Y88b  d88P     888       888   Y88b. .d88P 888   Y8888 Y88b  d88P \n"
"\t\t   8888888 888    Y888  'Y8888P'      888     888   T88b  'Y88888P'   'Y8888P'      888     8888888  'Y88888P'  888    Y888  'Y8888P'  \n\n\n";
                                                                                                                                    
                                                                                                                                    
                                                                                                                                    
                                                       

                                                       
cout<< "\t\t\t __________________________________________________________________________________________________________________ \n";                                                                                                              
cout<< "\t\t\t |                                                                                                                 | \n";
cout<< "\t\t\t |   1.Its two player's game.                                                                                      | \n";
cout<< "\t\t\t |       Each player has two pieces.                                                                               | \n";
cout<< "\t\t\t |       Player 1: A and B                                                                                         | \n";
cout<< "\t\t\t |       Player 2: C and D                                                                                         | \n";
cout<< "\t\t\t |                                                                                                                 | \n";
cout<< "\t\t\t |                                                                                                                 | \n";
cout<< "\t\t\t |   2.Press any key to roll dice.                                                                                 | \n";
cout<< "\t\t\t |                                                                                                                 | \n";
cout<< "\t\t\t |   3.To move piece:                                                                                              | \n";
cout<< "\t\t\t |      Player 1: Press A to move piece A and press B to move piece B                                              | \n";
cout<< "\t\t\t |      Player 2: Press C to move piece C and press D to move piece D.                                             | \n";
cout<< "\t\t\t |                                                                                                                 | \n";
cout<< "\t\t\t |   4.The player can not start to move piece until the dice roll is not equals to 6.                              | \n";
cout<< "\t\t\t |                                                                                                                 | \n";
cout<< "\t\t\t |   5.After each 6, the player would get a bonus turn.                                                            | \n";
cout<< "\t\t\t |                                                                                                                 | \n";
cout<< "\t\t\t |   6.The player can not enter in running line without beating an opposite player's piece(at least one).          | \n";
cout<< "\t\t\t |                                                                                                                 | \n";
cout<< "\t\t\t |   7.Each player has it's one stop.                                                                              | \n";
cout<< "\t\t\t |                                                                                                                 | \n";
cout<< "\t\t\t |   8.The player can not hit any opposite player's piece when it is on stop.                                      | \n";
cout<< "\t\t\t |                                                                                                                 | \n";
cout<< "\t\t\t |                                                                                                                 | \n";
cout<< "\t\t\t |_________________________________________________________________________________________________________________| \n";
Sleep(100);
      system ("color 0b");
	 // cin.ignore();

}   
void display_board(string board[],int size)
{  
    static int first=0;
    if(first>0)
    {
    system( "cls");
    for(int i=0;i<40;i++)
    std :: cout<<"\t\t"<<board[i]<<endl;
    }
    else{
  board[0]= "*********************************************************************************************",
  board[1]= "*                                  *|     ||     ||     |*                                  *", 
  board[2]= "*                                  *|     ||     ||     |*                                  *",
  board[3]= "*                                  ***********************                                  *",
  board[4]= "*                                  *|     ||     ||     |*                                  *", 
  board[5]= "*                                  *|     ||     ||     |*                                  *",
  board[6]= "*                                  ***********************                                  *",
  board[7]= "*            A     B               *|     ||     ||     |*                                  *", 
  board[8]= "*                                  *|     ||     ||     |*                                  *", 
  board[9]= "*                                  ***********************                                  *",
 board[10]= "*                                  *|     ||     ||     |*                                  *", 
 board[11]= "*                                  *|     ||     ||     |*                                  *",
 board[12]= "*                                  ***********************                                  *",
 board[13]= "*                                  *|     ||     ||     |*                                  *", 
 board[14]= "*                                  *|     ||     ||     |*                                  *",
 board[15]= "*********************************************************************************************",
 board[16]= "*|     |{     }|     ||     ||     || xxx || xxx || xxx ||     ||     ||     ||     ||     |*",
 board[17]= "*|     |{     }|     ||     ||     || xxx || xxx || xxx ||     ||     ||     ||     ||     |*",
 board[18]= "*********************************************************************************************",
 board[19]= "*|     |{     }{     }{     }{     }| xxx || xxx || xxx |{     }{     }{     }{     }|     |*",
 board[20]= "*|     |{     }{     }{     }{     }| xxx || xxx || xxx |{     }{     }{     }{     }|     |*",
 board[21]= "*********************************************************************************************",
 board[22]= "*|     ||     ||     ||     ||     || xxx || xxx || xxx ||     ||     ||     |{     }|     |*",
 board[23]= "*|     ||     ||     ||     ||     || xxx || xxx || xxx ||     ||     ||     |{     }|     |*",
 board[24]= "*********************************************************************************************",
 board[25]= "*                                  *|     ||     ||     |*                                  *", 
 board[26]= "*                                  *|     ||     ||     |*                                  *",
 board[27]= "*                                  ***********************                                  *",
 board[28]= "*                                  *|     ||     ||     |*                                  *", 
 board[29]= "*                                  *|     ||     ||     |*                                  *",
 board[30]= "*                                  ***********************                                  *", 
 board[31]= "*                                  *|     ||     ||     |*                                  *", 
 board[32]= "*                                  *|     ||     ||     |*             C      D             *", 
 board[33]= "*                                  ***********************                                  *",
 board[34]= "*                                  *|     ||     ||     |*                                  *", 
 board[35]= "*                                  *|     ||     ||     |*                                  *",
 board[36]= "*                                  ***********************                                  *",
 board[37]= "*                                  *|     ||     ||     |*                                  *", 
 board[38]= "*                                  *|     ||     ||     |*                                  *",
 board[39]= "*********************************************************************************************";
        for (int i=0;i<40;i++)
        cout<<"\t\t"<<board[i]<<endl; first++;}
		///cout<< board[32].size();
}
void player1_piece1(string board[],int size,int dice,int & i,int & j,int & indexCi,int & indexCj,int & indexDi,int & indexDj,int & count,int & pc_1,int & pc_2,int & total,int & total1,int & total2,int & hitrecord1,bool  & check_hit1,bool & check_move1)   //function for player 1 for piece 1.
{ int piecehit1 = 0;
  if (count  > 0 )
    { 
  board[7].replace(13,1," ");
  if (total == 1)
     {   board[16].replace(10,1," ");
         if( board[16].at(18) == 'C')
		  	{
		     board[32].replace(71,1,"C");
			 piecehit1++; total1=0;pc_1=0; hitrecord1++;
		      indexCi = 22, indexCj = 80;}
         else if( board[17].at(18) == 'D')
		  	{
		     board[32].replace(78,1,"D");
			 board[17].replace(18,1," ");  
			 piecehit1++;pc_2=0, hitrecord1++;
		     total2=0,indexDi=23,indexDj=80;}
		 board[16].replace(18,1,"A");
		 if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}     
         else 
         display_board(board,size);
       i = 16,j=18;
      }
//--------------------------------------------------------------------------------------
  else if( total == 2 )
  {    board[i].replace(j,1," ");
      if( board[16].at(25) == 'C')
		  	{
		     board[32].replace(71,1,"C"); 
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
			indexCi = 22, indexCj = 80;}
         else if( board[17].at(25) == 'D')
		  	{
		     board[21].replace(78,1,"D");
			 board[17].replace(25,1," "); 
			 piecehit1++; total2=0;
			 pc_2=0,indexDi=23,indexDj=80;hitrecord1++;
	        }
       board[16].replace(25,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else 
       display_board(board,size);
       i = 16,j=25;
      }
//--------------------------------------------------------------------------------------
  else if( total == 3 )
  {    board[i].replace(j,1," ");
       if( board[16].at(32) == 'C')
		  	{
		     board[32].replace(71,1,"C");  
			 piecehit1++;total1=0;pc_1=0;hitrecord1++;
	          indexCi = 22, indexCj = 80;}
         else if( board[17].at(32) == 'D')
		  	{
		     board[32].replace(78,1,"D"); 
			 board[17].replace(32,1," ");
			 hitrecord1++;
			 piecehit1++; total2=0;pc_2=0,indexDi=23,indexDj=80;}
       board[16].replace(32,1,"A");
	    if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}     
         else 
       display_board(board,size);
       i = 16,j=32;
      }
//--------------------------------------------------------------------------------------
  else if( total == 4 )
  {    board[i].replace(j,1," ");
           if( board[13].at(39) == 'C')
		  	{
		     board[32].replace(71,1,"C"); 
			 piecehit1++;total1=0;pc_1=0;hitrecord1++;
		   indexCi = 22, indexCj = 80;}
         else if( board[14].at(39) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[14].replace(39,1," ");hitrecord1++; 
			 piecehit1++; total2=0;pc_2=0,indexDi=23,indexDj=80;}
    
       board[13].replace(39,1,"A");
	    if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}     
         else 
       display_board(board,size);
       i=13 ,j=39;
      }
//--------------------------------------------------------------------------------------
  else if( total == 5 )
  {    board[i].replace(j,1," ");
         if( board[10].at(39) == 'C')
		  	{
		     board[32].replace(71,1,"C"); 
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
		 indexCi = 22, indexCj = 80;}
         else if( board[11].at(39) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[11].replace(39,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0,indexDi=23,indexDj=80;}
       board[10].replace(39,1,"A");
	    if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}     
         else 
       display_board(board,size);
       i = 10 ,j=39;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 6 )
  {    board[i].replace(j,1," ");
       if( board[7].at(39) == 'C')
		  	{
		     board[32].replace(71,1,"C"); 
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
	   indexCi = 22, indexCj = 80;}
         else if( board[8].at(39) == 'D')
		  	{
		     board[32].replace(78,1,"D"); board[8].replace(39,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0,indexDi=23,indexDj=80;}
       board[7].replace(39,1,"A");
	    if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}     
         else 
       display_board(board,size);
       i = 7,j=39;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 7 )
  {    board[i].replace(j,1," ");
       if( board[4].at(39) == 'C')
		  {
		     board[32].replace(71,1,"C");
			 piecehit1++;total1=0;pc_1=0;hitrecord1++;
	   indexCi = 22, indexCj = 80;}
       else if( board[5].at(39) == 'D')
		  {
		     board[32].replace(78,1,"D"); board[5].replace(39,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0,indexDi=23,indexDj=80;}
       board[4].replace(39,1,"A");
	    if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}     
         else 
       display_board(board,size);
       i = 4,j=39;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 8 )
  {    board[i].replace(j,1," ");
         if( board[1].at(39) == 'C')
		  	{
		     board[32].replace(71,1,"C");
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
		 indexCi = 22, indexCj = 80;}
         else if( board[2].at(39) == 'D')
		  	{
		     board[32].replace(78,1,"D"); board[2].replace(39,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0,indexDi=23,indexDj=80;}
       board[1].replace(39,1,"A");
	    if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}     
         else 
       display_board(board,size);
       i = 1, j = 39;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 9 )
  {    board[i].replace(j,1," ");
           if( board[1].at(46) == 'C')
		  	{
		     board[32].replace(71,1,"C"); 
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
		   indexCi = 22, indexCj = 80;}
         else if( board[2].at(46) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[2].replace(46,1," "); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0,indexDi=23,indexDj=80;}
       board[1].replace(46,1,"A");
	    if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}     
         else 
       display_board(board,size);
       i = 1,j=46;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 10 )
  {    board[i].replace(j,1," ");
           if( board[1].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C");
			 piecehit1++; total1=0;pc_1=0; hitrecord1++;
		   indexCi = 22, indexCj = 80;
		   }
         else if( board[2].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[2].replace(53,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0,indexDi=23,indexDj=80;}
       board[1].replace(53,1,"A");
	    if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}     
         else 
       display_board(board,size);
       i = 1, j = 53;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 11 )
  {    board[i].replace(j,1," ");
           if( board[4].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C");
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
		   indexCi = 22, indexCj = 80;}
         else if( board[5].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[5].replace(53,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0,indexDi=23,indexDj=80;}
       board[4].replace(53,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i=4,j=53;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 12 )
  {  board[i].replace(j,1," ");
           if( board[7].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C"); 
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
		   indexCi = 22, indexCj = 80;}
         else if( board[8].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[8].replace(53,1," ");hitrecord1++; 
			 piecehit1++; total2=0;pc_2=0,indexDi=23,indexDj=80;}
       board[7].replace(53,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i=7,j=53;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 13 )
  {    board[i].replace(j,1," ");
           if( board[10].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C"); 
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
		   indexCi = 22, indexCj = 80;}
         else if( board[11].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D"); board[11].replace(53,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0,indexDi=23,indexDj=80;}
       board[10].replace(53,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
	   i=10,j=53;
  }
  //--------------------------------------------------------------------------------------
  else if( total == 14 )
  {    board[i].replace(j,1," ");
           if( board[13].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C");
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
		   indexCi = 22, indexCj = 80;}
         else if( board[14].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D"); board[14].replace(53,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0,indexDi=23,indexDj=80;}
       board[13].replace(53,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i=13,j=53;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 15 )
  {    board[i].replace(j,1," ");
             if( board[16].at(60) == 'C')
		  	{
		     board[32].replace(71,1,"C"); 
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
			 indexCi = 22, indexCj = 80;}
         else if( board[17].at(60) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[17].replace(60,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[16].replace(60,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 16,j=60;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 16 )
  {    
       board[i].replace(j,1," ");
             if( board[16].at(67) == 'C')
		  	{
		     board[32].replace(71,1,"C");
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
			 indexCi = 22, indexCj = 80;}
         else if( board[17].at(67) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[17].replace(67,1," ");hitrecord1++;  
			 piecehit1++; total2=0;pc_2=0,indexDi=23,indexDj=80;}
       board[16].replace(67,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 16,j=67;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 17 )
  {    board[i].replace(j,1," ");
             if( board[16].at(74) == 'C')
		  	{
		     board[32].replace(71,1,"C");  
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
			 indexCi = 22, indexCj = 80;}
         else if( board[17].at(74) == 'D')
		  	{
		     board[32].replace(78,1,"D"); board[17].replace(74,1," "); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[16].replace(74,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 16,j=74;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 18 )
  {    board[i].replace(j,1," ");
             if( board[16].at(81) == 'C')
		  	{
		     board[32].replace(71,1,"C");  
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
			 indexCi = 22, indexCj = 80;}
         else if( board[17].at(81) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[17].replace(81,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[16].replace(81,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 16,j=81;
      }
  //--------------------------------------------------------------------------------------
   else if( total == 19 )
  {    board[i].replace(j,1," ");
             if( board[16].at(88) == 'C')
		  	{
		     board[32].replace(71,1,"C");  
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
			 indexCi = 22, indexCj = 80;}
         else if( board[17].at(88) == 'D')
		  	{
		     board[32].replace(78,1,"D"); board[17].replace(88,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[16].replace(88,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 16,j=88;
      }
  //--------------------------------------------------------------------------------------
   else if( total == 20 )
  {    board[i].replace(j,1," ");
         if( board[19].at(88) == 'C')
		  	{
		     board[32].replace(71,1,"C");
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
		 indexCi = 22, indexCj = 80;}
         else if( board[20].at(88) == 'D')
		  	{
		     board[32].replace(78,1,"D"); board[20].replace(88,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[19].replace(88,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 19,j = 88;
      }
   //--------------------------------------------------------------------------------------
    else if( total == 21 )
  {    board[i].replace(j,1," ");
                if( board[22].at(88) == 'C')
		  	{
		     board[32].replace(71,1,"C");
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
				indexCi = 22, indexCj = 80;}
         else if( board[23].at(88) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[23].replace(88,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[22].replace(88,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 22,j = 88;
      }
   //--------------------------------------------------------------------------------------
    else if( total == 22 )
  {    board[i].replace(j,1," ");
         if( board[22].at(81) == 'C')
		  	{
		     board[32].replace(71,1,"C"); 
			 piecehit1++;total1=0;pc_1=0;hitrecord1++;
		 indexCi = 22, indexCj = 80;}
         else if( board[23].at(81) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[23].replace(81,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[22].replace(81,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 22,j = 81;
      }
	//--------------------------------------------------------------------------------------
     else if( total == 23 )
  {   board[i].replace(j,1," ");
         if( board[22].at(74) == 'C')
		  	{
		     board[32].replace(71,1,"C"); 
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
		 indexCi = 22, indexCj = 80;}
         else if( board[23].at(74) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[23].replace(74,1," ");
			 piecehit1++; total2=0;pc_2=0;hitrecord1++;
		indexDi=23,indexDj=80;}
       board[22].replace(74,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 22,j = 74; 
      }
	//--------------------------------------------------------------------------------------
     else if( total == 24 )
  {    board[i].replace(j,1," ");
         if( board[22].at(67) == 'C')
		  	{
		     board[32].replace(71,1,"C");  
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
		 indexCi = 22, indexCj = 80;}
         else if( board[23].at(67) == 'D')
		  	{
		     board[32].replace(78,1,"D"); board[23].replace(67,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[22].replace(67,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 22,j = 67;
      }
	 //--------------------------------------------------------------------------------------
      else if( total == 25 )
  {    board[i].replace(j,1," ");
         if( board[22].at(60) == 'C')
		  	{
		     board[32].replace(71,1,"C");
			 piecehit1++;total1=0;pc_1=0;hitrecord1++;
			 indexCi = 22, indexCj = 80;
		     }
         else if( board[23].at(60) == 'D')
		  	{
		     board[32].replace(78,1,"D");  board[23].replace(60,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[22].replace(60,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 22,j = 60;
      }
	 //--------------------------------------------------------------------------------------
      else if( total == 26  )
  {    board[i].replace(j,1," ");
         if( board[25].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C");
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;		 
		 indexCi = 22, indexCj = 80;}
         else if( board[26].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D"); board[26].replace(53,1," ");
			 piecehit1++;total2=0;pc_2=0;indexDi=23,indexDj=80;hitrecord1++;}
       board[25].replace(53,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 25,j = 53;
   }
//--------------------------------------------------------------------------------------
       else if( total == 27 )
  {  board[i].replace(j,1," ");
         if( board[28].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C");
			 piecehit1++;total1=0;pc_1=0;hitrecord1++;
		 indexCi = 22, indexCj = 80;}
         else if( board[29].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[29].replace(53,1," "); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[28].replace(53,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 28,j = 53;  
    }
  //--------------------------------------------------------------------------------------
       else if( total == 28 )
  {    board[i].replace(j,1," ");
         if( board[31].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C");
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
		 indexCi = 22, indexCj = 80;}
         else if( board[32].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D"); board[32].replace(53,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[31].replace(53,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 31,j = 53;
      }
	//--------------------------------------------------------------------------------------
        else if( total == 29 )
  {    board[i].replace(j,1," ");
         if( board[34].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C");
			 piecehit1++; total1=0;pc_1=0; hitrecord1++;
		 indexCi = 22, indexCj = 80;}
         else if( board[35].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[35].replace(53,1," "); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[34].replace(53,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 34,j = 53;
      }
	 //--------------------------------------------------------------------------------------
        else if( total == 30 )
  {    
       board[i].replace(j,1," ");
         if( board[37].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C"); 
			 piecehit1++; total1=0;pc_1=0; hitrecord1++;
		 indexCi = 22, indexCj = 80;}
         else if( board[38].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D");  board[38].replace(53,1," "); hitrecord1++;
			 piecehit1++;total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[37].replace(53,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 37,j = 53;
      }
//--------------------------------------------------------------------------------------
         else if( total == 31 )
  {    
    board[i].replace(j,1," ");
         if( board[37].at(46) == 'C')
		  	{
		     board[32].replace(71,1,"C"); 
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
		 indexCi = 22, indexCj = 80;
		 }
         else if( board[38].at(46) == 'D')
		  	{
		     board[32].replace(78,1,"D"); board[38].replace(46,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[37].replace(46,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 37,j = 46;
      }
//--------------------------------------------------------------------------------------
         else if( total == 32 )
  {    
      board[i].replace(j,1," ");
         if( board[37].at(39) == 'C')
		  	{
		     board[32].replace(71,1,"C"); 
			 hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;
		     indexCi = 22, indexCj = 80;
		 }
         else if( board[38].at(39) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[38].replace(39,1," "); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[37].replace(39,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 37,j = 39;
      }
//--------------------------------------------------------------------------------------
          else if( total == 33 )
  {    board[i].replace(j,1," ");
         if( board[34].at(39) == 'C')
		  	{
		     board[32].replace(71,1,"C");  
			 piecehit1++;total1=0;pc_1=0;hitrecord1++;
		 indexCi = 22, indexCj = 80;
		 }
         else if( board[35].at(39) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[35].replace(39,1," ");hitrecord1++;
			 piecehit1++;total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[34].replace(39,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 34,j = 39;
      }
//--------------------------------------------------------------------------------------
          else if( total == 34 )
  {    
	 board[i].replace(j,1," ");
         if( board[31].at(39) == 'C')
		  	{
		     board[32].replace(71,1,"C"); 
			 piecehit1++;total1=0;pc_1=0;hitrecord1++;
		 indexCi = 22, indexCj = 80;
		 }
         else if( board[32].at(39) == 'D')
		  	{
		     board[32].replace(78,1,"D"); board[32].replace(39,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[31].replace(39,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 31,j = 39;
      }
//--------------------------------------------------------------------------------------
        else if( total == 35 )
  {     board[i].replace(j,1," ");
         if( board[28].at(39) == 'C')
		  	{
		     board[32].replace(71,1,"C");
			 piecehit1++;total1=0;pc_1=0; hitrecord1++;
		 indexCi = 22, indexCj = 80;
		 }
         else if( board[29].at(39) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[29].replace(39,1," "); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[28].replace(39,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 28,j = 39;
      }
//--------------------------------------------------------------------------------------
      else if( total == 36 )
  {     board[i].replace(j,1," ");
         if( board[25].at(39) == 'C')
		  	{
		     board[32].replace(71,1,"C"); 
			 piecehit1++; total1=0;pc_1=0; hitrecord1++;
		 indexCi = 22, indexCj = 80;
		 }
         else if( board[26].at(39) == 'D')
		  	{
		     board[32].replace(78,1,"D"); board[26].replace(39,1," ");hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[25].replace(39,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 25,j = 39;
      }
//--------------------------------------------------------------------------------------
       else if( total == 37 )
  {     board[i].replace(j,1," ");
         if( board[22].at(32) == 'C')
		  	{
		     board[32].replace(71,1,"C");
			 piecehit1++; total1=0;pc_1=0; hitrecord1++;
		 indexCi = 22, indexCj = 80;
		 }
		  else if( board[23].at(32) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[23].replace(32,1," ");hitrecord1++; 
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[22].replace(32,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 22,j = 32;
      }
//--------------------------------------------------------------------------------------
    else if( total == 38 )
  {    
   board[i].replace(j,1," ");
         if( board[22].at(25) == 'C')
		  	{
		     board[32].replace(71,1,"C");
			 piecehit1++; total1=0;pc_1=0; hitrecord1++;
		 indexCi = 22, indexCj = 80;
		 }
         else if( board[23].at(25) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[32].replace(78,1," "); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[22].replace(25,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 22,j = 25;
      }
//--------------------------------------------------------------------------------------
   else if( total == 39 )
  {    board[i].replace(j,1," ");
	     if( board[22].at(18) == 'C')
		  	{
		     board[32].replace(71,1,"C"); 
			 piecehit1++; total1=0;pc_1=0; hitrecord1++; 
		 indexCi = 22, indexCj = 80;
		 }
         else if( board[23].at(18) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[32].replace(78,1," "); hitrecord1++;
			 piecehit1++;total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[22].replace(18,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 22,j = 18;
      }
//--------------------------------------------------------------------------------------
   else if( total == 40 )
  {    board[i].replace(j,1," ");
	      if( board[22].at(11) == 'C')
		  	{
		     board[32].replace(71,1,"C"); 
			 piecehit1++; total1=0;pc_1=0; hitrecord1++;
		  indexCi = 22, indexCj = 80;
		  }
		  else if( board[23].at(11) == 'D')
		  	{
		     board[32].replace(78,1,"D"); board[23].replace(11,1," "); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[22].replace(11,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 22,j = 11;
      }
//--------------------------------------------------------------------------------------
   else if( total == 41 )
  {    board[i].replace(j,1," ");
	      if( board[22].at(4) == 'C')
		  	{
		     board[32].replace(71,1,"C");
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
		  indexCi = 22, indexCj = 80;
		  }
		  else if( board[23].at(4) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[23].replace(4,1," "); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
       board[22].replace(4,1,"A");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 22,j = 4;
      }
//--------------------------------------------------------------------------------------
    else if( total == 42 )
  {    board[i].replace(j,1," ");
	      if( board[19].at(4) == 'C')
		  	{
		     board[32].replace(71,1,"C");  
			 piecehit1++; total1=0;pc_1=0;hitrecord1++;
		  indexCi = 22, indexCj = 80;}
		  else if( board[20].at(4) == 'D')
		  	{
		     board[32].replace(78,1,"D");board[20].replace(4,1," ");hitrecord1++;
			 piecehit1++;total2=0;pc_2=0;indexDi=23,indexDj=80;}
          board[19].replace(4,1," ");
		  board[20].replace(3,1,"A");
		  if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 20,j = 3;
      }
//--------------------------------------------------------------------------------------
	else if( total == 43 )
      {  if( hitrecord1 > 0 )
         { 
	   board[i].replace(j,1," ");
       board[19].replace(10,1,"A");
       display_board(board,size);
       i = 19,j = 10;
	    }
		else
			   { system("cls");display_board(board,size);
				   cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 check_move1 = false ;total-=dice;}
      }
	 //--------------------------------------------------------------------------------------
     else if( total == 44 )
     { if( hitrecord1 > 0 )
       {  
	   board[i].replace(j,1," ");
       board[19].replace(17,1,"A");
       display_board(board,size);
       i = 19,j = 17;
	   }
			else
			   { system("cls");display_board(board,size);
				   cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 check_move1 = false ;total-=dice;}
      }
	 //--------------------------------------------------------------------------------------
     else if( total == 45 )
     {  if( hitrecord1 > 0 )
       {  
	   board[i].replace(j,1," ");
       board[19].replace(24,1,"A");
       display_board(board,size);
       i = 19,j = 24;
	   }
		else
			   { system("cls");display_board(board,size);
				   cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 check_move1 = false ;total-=dice;}
	 }
	 //--------------------------------------------------------------------------------------
      else if( total == 46 )
     {   
	   if( hitrecord1 > 0 )
       { board[i].replace(j,1," ");
       board[19].replace(31,1,"A");
       display_board(board,size);
	   i = 19,j = 31;}
	   else
	    { system("cls");display_board(board,size);
			cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 check_move1 = false ;total-=dice;}
     }
	 //--------------------------------------------------------------------------------------
	  else if( total == 47)
		  {if (hitrecord1 > 0 )
	       {
		   board[i].replace(j,1," ");
		   display_board(board,size);
		   cout<<"Congratulations!"<<endl;
		   cout<<"Your one piece has successfully run!" <<endl;
		   check_hit1 = true;
		   }
		   else
			   { system("cls");display_board(board,size);
				   cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 check_move1 = false ;total-=dice;}
		   }
	  else if( total > 47 )
		  {total -= dice;
	        system("cls");display_board(board,size);
			cout << "You cannot move this piece"<<endl;
	        check_hit1 = false;}
} //if (count>0)
  else
  {cout<<"This piece is not legal to move yet!"<<endl;}
}
void player1_piece2(string board[],int size,int dice,int & i,int & j,int & indexCi,int & indexCj,int & indexDi,int & indexDj,int & count,int & pc_1,int & pc_2,int & total,int & total1,int & total2,int & hitrecord1,bool  & check_hit2,bool & check_move2)
{  int piecehit1=0;
  if (count  > 0 )
    { 
  if (total == 1)
     {   board[17].replace(10,1," ");
         if( board[17].at(18) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++; 
			 piecehit1++;total2=0;pc_2=0;indexDi=23,indexDj=80;}
         else if(board[16].at(18) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[16].replace(18,1," ");hitrecord1++;
			 piecehit1++;total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
		 board[17].replace(18,1,"B");
		  if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}
         else 
           display_board(board,size);
           i = 17,j=18;
      }
//--------------------------------------------------------------------------------------
  else if( total == 2 )
  {    board[i].replace(j,1," ");
      if( board[17].at(25) == 'D')
		  	{
			 
		     board[21].replace(78,1,"D"); hitrecord1++;
			 piecehit1++;total2=0;pc_2=0;indexDi=23,indexDj=80;
	        }
         else if(board[16].at(25) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[16].replace(25,1," "); 
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80;hitrecord1++;
	        }
       board[17].replace(25,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 17,j=25;
      }
//--------------------------------------------------------------------------------------
  else if( total == 3 )
  {    board[i].replace(j,1," ");
       if(board[17].at(32) == 'D')
		  	{
		     board[32].replace(78,1,"D");hitrecord1++; 
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
         else if( board[16].at(32) == 'C')
		  	{
		     board[32].replace(71,1,"C"); board[16].replace(32,1," ");hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[17].replace(32,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 17,j=32;
      }
//--------------------------------------------------------------------------------------
  else if( total == 4 )
  {    board[i].replace(j,1," ");
           if( board[14].at(39) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
         else if(board[13].at(39) == 'C')
		  	{
		     board[32].replace(71,1,"C"); board[13].replace(39,1," ");hitrecord1++;
			 piecehit1++; total1=0;pc_1=0; indexCi = 22, indexCj = 80; }
       board[14].replace(39,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i=14 ,j=39;
      }
//--------------------------------------------------------------------------------------
  else if( total == 5 )
  {    board[i].replace(j,1," ");
         if(board[11].at(39) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++;total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[10].at(39) == 'C')
		  	{
		     board[32].replace(71,1,"C"); board[10].replace(39,1," ");hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[11].replace(39,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 11 ,j=39;
      }
//--------------------------------------------------------------------------------------
  else if( total == 6 )
  {    board[i].replace(j,1," ");
       if( board[8].at(39) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
         else if(board[7].at(39) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[7].replace(39,1," "); hitrecord1++; 
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[8].replace(39,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 8,j=39;
      }
//--------------------------------------------------------------------------------------
  else if( total == 7 )
  {    board[i].replace(j,1," ");
       if(board[5].at(39) == 'D')
		  {
		     board[32].replace(78,1,"D");hitrecord1++; 
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
       else if(board[4].at(39) == 'C')
		  {
		     board[32].replace(71,1,"C");board[4].replace(39,1," "); hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[5].replace(39,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i=5,j=39;
      }
//--------------------------------------------------------------------------------------
  else if( total == 8 )
  {    board[i].replace(j,1," ");
         if(board[2].at(39) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[1].at(39) == 'C')
		  	{
		     board[32].replace(71,1,"C"); board[1].replace(39,1," "); hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[2].replace(39,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 2, j = 39;
      }
//--------------------------------------------------------------------------------------
  else if( total == 9 )
  {    board[i].replace(j,1," ");
           if(board[2].at(46) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[1].at(46) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[1].replace(46,1," "); hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[2].replace(46,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i =2,j=46;
      }
//--------------------------------------------------------------------------------------
  else if( total == 10 )
  {    board[i].replace(j,1," ");
           if( board[2].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++; 
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[1].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[1].replace(53,1," "); hitrecord1++; 
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[2].replace(53,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 2, j = 53;
      }
//--------------------------------------------------------------------------------------
  else if( total == 11 )
  {    board[i].replace(j,1," ");
           if(board[5].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; 
		   }
         else if(board[4].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C"); board[4].replace(53,1," "); hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[5].replace(53,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i=5,j=53;
      }
//--------------------------------------------------------------------------------------
  else if( total == 12 )
  {  board[i].replace(j,1," ");
           if(board[8].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[7].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[7].replace(53,1," "); hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[8].replace(53,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i=8,j=53;
      }
//--------------------------------------------------------------------------------------
  else if( total == 13 )
  {    board[i].replace(j,1," ");
           if(board[11].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[10].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[10].replace(53,1," "); hitrecord1++; 
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[11].replace(53,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
	   i=11,j=53;
  }
//--------------------------------------------------------------------------------------
  else if( total == 14 )
  {    board[i].replace(j,1," ");
           if(board[14].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++; 
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
         else if(board[13].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C"); board[4].replace(53,1," ");hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[14].replace(53,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i=14,j=53;
      }
//--------------------------------------------------------------------------------------
  else if( total == 15 )
  {    board[i].replace(j,1," ");
             if(board[17].at(60) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;  }
         else if(board[16].at(60) == 'C')
		  	{
		     board[32].replace(71,1,"C");  board[16].replace(60,1," ");hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[17].replace(60,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 17,j=60;
      }
//--------------------------------------------------------------------------------------
  else if( total == 16 )
  {    
       board[i].replace(j,1," ");
             if(board[17].at(67) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
         else if(board[16].at(67) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[16].replace(67,1," "); hitrecord1++;
			 piecehit1++;total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[17].replace(67,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 17,j=67;
      }
//--------------------------------------------------------------------------------------
  else if( total == 17 )
  {    board[i].replace(j,1," ");
             if(board[17].at(74) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[16].at(74) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[16].replace(74,1," "); hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80;}
       board[17].replace(74,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 17,j=74;
      }
//--------------------------------------------------------------------------------------
  else if( total == 18 )
  {    board[i].replace(j,1," ");
             if(board[17].at(60) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++; 
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[16].at(81) == 'C')
		  	{
		     board[32].replace(71,1,"C"); board[16].replace(81,1," "); hitrecord1++;
			 piecehit1++;total1=0;pc_1=0;indexCi = 22, indexCj = 80;}
       board[17].replace(81,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 17,j=81;
      }
//--------------------------------------------------------------------------------------
   else if( total == 19 )
  {    board[i].replace(j,1," ");
             if(board[17].at(88) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++;total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[16].at(88) == 'C')
		  	{
			 board[32].replace(71,1,"C");board[16].replace(88,1," "); hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80;}
       board[17].replace(88,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 17,j=88;
      }
//--------------------------------------------------------------------------------------
   else if( total == 20 )
  {    board[i].replace(j,1," ");
         if(  board[20].at(88) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++; 
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
         else if(board[19].at(88) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[19].replace(88,1," ");hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80;}
       board[20].replace(88,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 20,j = 88;
      }
//--------------------------------------------------------------------------------------
    else if( total == 21 )
  {    board[i].replace(j,1," ");
                if(board[23].at(88) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++; 
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[22].at(88) == 'C')
		  	{
		     board[32].replace(71,1,"C"); board[22].replace(88,1," ");hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[23].replace(88,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 23,j = 88;
      }
//--------------------------------------------------------------------------------------
    else if( total == 22 )
  {    board[i].replace(j,1," ");
         if(board[23].at(81) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
         else if( board[22].at(81) == 'C')
		  	{
		     board[32].replace(71,1,"C"); board[1].replace(53,1," "); hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80;}
       board[23].replace(81,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 23,j = 81;
      }
//--------------------------------------------------------------------------------------
     else if( total == 23 )
  {   board[i].replace(j,1," ");
         if(board[23].at(74) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[22].at(74) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[22].replace(74,1," "); hitrecord1++;
			 piecehit1++;total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[23].replace(74,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 23,j = 74; 
      }
//--------------------------------------------------------------------------------------
     else if( total == 24 )
  {    board[i].replace(j,1," ");
         if(board[23].at(67) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[22].at(67) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[22].replace(67,1," ");hitrecord1++; 
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[23].replace(67,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 23,j = 67;
      }
//--------------------------------------------------------------------------------------
      else if( total == 25 )
  {    board[i].replace(j,1," ");
         if(board[23].at(60) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[22].at(60) == 'C')
		  	{
		     board[32].replace(71,1,"C"); board[22].replace(60,1," "); hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[23].replace(60,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 23,j = 60;
      }
//--------------------------------------------------------------------------------------
      else if( total == 26  )
  {    board[i].replace(j,1," ");
         if(board[26].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[25].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C"); board[25].replace(53,1," ");hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[26].replace(53,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 26,j = 53;
      }
//--------------------------------------------------------------------------------------
       else if( total == 27 )
  {  board[i].replace(j,1," ");
         if(board[29].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D");  hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[28].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C"); board[28].replace(53,1," ");hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[29].replace(53,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 29,j = 53;  
  }
//--------------------------------------------------------------------------------------
       else if( total == 28 )
  {    board[i].replace(j,1," ");
         if(board[33].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[31].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[31].replace(53,1," "); hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[32].replace(53,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 32,j = 53;
   }
//--------------------------------------------------------------------------------------
        else if( total == 29 )
  {    board[i].replace(j,1," ");
         if(board[35].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[34].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[34].replace(53,1," ");hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[35].replace(53,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 35,j = 53;
      }
//--------------------------------------------------------------------------------------
        else if( total == 30 )
  {    
       board[i].replace(j,1," ");
         if(board[38].at(53) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[37].at(53) == 'C')
		  	{
		     board[32].replace(71,1,"C"); board[37].replace(53,1," "); hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[38].replace(53,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 38,j = 53;
      }
//--------------------------------------------------------------------------------------
         else if( total == 31 )
  {    
    board[i].replace(j,1," ");
         if(board[38].at(46) == 'D')
		  	{
		     board[32].replace(78,1,"D");hitrecord1++; 
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[37].at(46) == 'C')
		  	{
		     board[32].replace(71,1,"C"); board[37].replace(46,1," ");hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[38].replace(46,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 38,j = 46;
      }
//--------------------------------------------------------------------------------------
         else if( total == 32 )
  {    
      board[i].replace(j,1," ");
         if( board[38].at(39) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++; 
			 piecehit1++;total2=0;pc_2=0;indexDi=23,indexDj=80;}
         else if(board[37].at(39) == 'C')
		  	{
		     board[32].replace(71,1,"C"); board[37].replace(39,1," ");hitrecord1++;
			 piecehit1++; total1=0;pc_1=0; indexCi = 22, indexCj = 80;}
       board[38].replace(39,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 38,j = 39;
      }
//--------------------------------------------------------------------------------------
          else if( total == 33 )
  {    board[i].replace(j,1," ");
         if(board[35].at(39) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
         else if( board[34].at(39) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[34].replace(39,1," "); hitrecord1++;
			 piecehit1++;total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[35].replace(39,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 35,j = 39;
      }
//--------------------------------------------------------------------------------------
          else if( total == 34 )
  {    
	 board[i].replace(j,1," ");
         if(  board[32].at(39) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++;total2=0;pc_2=0;indexDi=23,indexDj=80;}
         else if(board[31].at(39) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[31].replace(39,1," ");hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80;}
       board[32].replace(39,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 32,j = 39;
      }
//--------------------------------------------------------------------------------------
        else if( total == 35 )
  {     board[i].replace(j,1," ");
         if( board[29].at(39) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[28].at(39) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[28].replace(39,1," "); hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80;}
       board[29].replace(39,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 29,j = 39;
      }
//--------------------------------------------------------------------------------------
      else if( total == 36 )
  {     board[i].replace(j,1," ");
         if( board[26].at(39) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
         else if(board[25].at(39) == 'C')
		  	{
		     board[32].replace(71,1,"C"); board[25].replace(39,1," "); hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80;}
       board[26].replace(39,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 26,j = 39;
      }
//--------------------------------------------------------------------------------------
       else if( total == 37 )
  {     board[i].replace(j,1," ");
         if(board[23].at(32) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
         else if( board[22].at(32) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[22].replace(32,1," "); hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[23].replace(32,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 23,j = 32;
      }
//--------------------------------------------------------------------------------------
    else if( total == 38 )
  {    
   board[i].replace(j,1," ");
         if(board[23].at(25) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++; 
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
         else if( board[22].at(25) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[22].replace(25,1," "); hitrecord1++;
			 piecehit1++; total1=0;pc_1=0; indexCi = 22, indexCj = 80; }
       board[23].replace(25,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 23,j = 25;
      }
//--------------------------------------------------------------------------------------
   else if( total == 39 )
  {    board[i].replace(j,1," ");
	     if( board[23].at(18) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
         else if(board[22].at(18) == 'C')
		  	{
		     board[32].replace(71,1,"C"); board[22].replace(18,1," "); hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80;}
       board[23].replace(18,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 23,j = 18;
      }
//--------------------------------------------------------------------------------------
   else if( total == 40 )
  {    board[i].replace(j,1," ");
	      if(board[23].at(11) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++; 
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80;}
		  else if( board[22].at(11) == 'C')
		  	{
		     board[32].replace(71,1,"C"); board[22].replace(11,1," "); hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[23].replace(11,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 23,j = 11;
      }
//--------------------------------------------------------------------------------------
   else if( total == 41 )
  {    board[i].replace(j,1," ");
	      if(board[23].at(4) == 'D')
		  	{
		     board[32].replace(78,1,"D"); hitrecord1++;
			 piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
		  else if(board[22].at(4) == 'C')
		  	{
		     board[32].replace(71,1,"C");board[22].replace(4,1," "); hitrecord1++;
			 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80; }
       board[23].replace(4,1,"B");
	   if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
         else
       display_board(board,size);
       i = 23,j = 4;
      }
//--------------------------------------------------------------------------------------
   else	if( total == 42 )
	{    board[i].replace(j,1," ");
			     if( board[20].at(4) == 'D')
		  	            {
		                board[32].replace(78,1,"D"); hitrecord1++;
						piecehit1++; total2=0;pc_2=0;indexDi=23,indexDj=80; }
		         else if(board[19].at(4) == 'C')
		  	         {
		             board[32].replace(71,1,"C"); board[19].replace(4,1," "); hitrecord1++;
					 piecehit1++; total1=0;pc_1=0;indexCi = 22, indexCj = 80;}
                 board[20].replace(5,1,"B");
				 if ( piecehit1 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 1 HIT PLAYER 2!"; Beep(6000,500);cout<<endl;}    
              else
                 display_board(board,size);
				 i =20,j = 5;
            }
//--------------------------------------------------------------------------------------
   
      else if( total == 43 )
            {   if( hitrecord1 > 0 )
                {
			    board[i].replace(j,1," ");
                board[20].replace(12,1,"B");
                display_board(board,size);
                i = 20,j = 12; 
                }
   		else
			   { system("cls");display_board(board,size);
				 cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 total-=dice;check_move2 = false ;}
            }
			//--------------------------------------------------------------------------------------
            else if( total == 44 )
            {   if( hitrecord1 > 0 )
                {
				board[i].replace(j,1," ");
                board[20].replace(19,1,"B");
                display_board(board,size);
                i = 20,j = 19;
	            }
	  		else
			   { system("cls");display_board(board,size);
				   cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 total-=dice;check_move2 = false ;}
            }
			//--------------------------------------------------------------------------------------
            else if( total == 45 )
            {   if( hitrecord1 > 0 )
                {
				board[i].replace(j,1," ");
	            board[20].replace(26,1,"B");
                display_board(board,size);
				i =20,j = 26; }
					else
			   { system("cls");display_board(board,size);	
				   cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 total-=dice;check_move2 = false ;}
			}
			//--------------------------------------------------------------------------------------
            else if( total == 46 )
            {   if( hitrecord1 > 0 )
                {
				 board[i].replace(j,1," ");
                 board[20].replace(33,1,"B");
                 display_board(board,size);
                 i = 20,j = 33;
			     }
		else
			   { system("cls");display_board(board,size);
				   cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 total-=dice;check_move2 = false ;
			     }
			}
			//--------------------------------------------------------------------------------------
		  else if( total == 47)
		  {if (hitrecord1 > 0 )
	       {
		   board[i].replace(j,1," ");
		   display_board(board,size);
		   cout<<"Congratulations!"<<endl;
		   cout<<"Your one piece has successfully run!" <<endl;
		   check_hit2 = true;
		   }
		   else
			   { system("cls");display_board(board,size);
				   cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 total-=dice;check_move2 = false ;}
		   }
	      else if( total > 47 )
		  {total -= dice;system("cls");display_board(board,size);
			cout << "You cannot move this piece"<<endl;
		    check_hit2 = false;}
    
	}//if(count > 0
  else
  {cout<<"This piece is not legal to move yet!"<<endl;}
}
void player2_piece1(string board[],int size,int dice,int & i,int & j,int & indexAi,int & indexAj,int & indexBi,int & indexBj,int & count,int & pc_1,int & pc_2,int & total,int & total1,int & total2,int & hitrecord2,bool  & check_hit3,bool & check_move3)
{  int piecehit2 = 0;
  if (count  > 0 )
    { 
  board[32].replace(71,1," ");
  if (total == 1)
     {   board[22].replace(80,1," ");
         if( board[22].at(74) == 'A')
		  	{//cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 ; indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
         else if( board[23].at(74) == 'B')
		  	{//cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[23].replace(74,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		 board[22].replace(74,1,"C");
		 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
         display_board(board,size);
       i = 22,j=74;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 2 )
  {   board[i].replace(j,1," ");
         if( board[22].at(67) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
         else if( board[23].at(67) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[23].replace(67,1," ");
			 indexBi=17,indexBj=10;hitrecord2++; 
			 piecehit2++; total2=0;pc_2=0;}
		 board[22].replace(67,1,"C");
		 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
         display_board(board,size);
       i = 22,j=67;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 3 )
  {    board[i].replace(j,1," ");
         if( board[22].at(60) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10 ;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
         else if( board[23].at(60) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[23].replace(60,1," ");
			 indexBi=17,indexBj=10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		 board[22].replace(60,1,"C");
		 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
         display_board(board,size);
       i = 22,j=60;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 4 )
  {     board[i].replace(j,1," ");
         if( board[25].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
         else if( board[26].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[26].replace(53,1," ");
			 indexBi=17,indexBj=10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		 board[25].replace(53,1,"C");
		 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
         display_board(board,size);
       i = 25,j=53;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 5 )
  {    board[i].replace(j,1," ");
         if( board[28].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");  indexAi=16 , indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
         else if( board[29].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[29].replace(53,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		 board[28].replace(53,1,"C");
		 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
         display_board(board,size);
       i = 28,j=53;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 6 )
  {    board[i].replace(j,1," ");
         if( board[31].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
         else if( board[32].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		 board[7].replace(18,1,"B"); 
		 board[32].replace(53,1," ");
		 indexBi=17,indexBj=10; hitrecord2++; 
		 piecehit2++;total2=0;pc_2=0;} 

		 board[31].replace(53,1,"C");
		 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
         display_board(board,size);
       i = 31,j=53;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 7 )
  {   board[i].replace(j,1," ");
         if( board[34].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10;hitrecord2++;
			 piecehit2++;total1=0;pc_1=0;}
    else if( board[35].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); 
			 board[35].replace(53,1," ");
			 indexBi=17,indexBj=10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[34].replace(53,1,"C");
			 if ( piecehit2 > 0)
		      {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
              display_board(board,size);
               i = 34,j=53;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 8 )
  {   board[i].replace(j,1," ");
         if( board[37].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A") ;indexAi=16 , indexAj=10 ;hitrecord2++;
			 piecehit2++;total1=0;pc_1=0;}
    else if( board[38].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[38].replace(53,1," ");
			 indexBi=17,indexBj=10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[37].replace(53,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i = 37,j=53;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 9 )
  {    board[i].replace(j,1," ");
         if( board[37].at(46) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10;hitrecord2++;
			 piecehit2++;total1=0;pc_1=0;}
    else if( board[38].at(46) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[38].replace(46,1," ");
			 indexBi=17,indexBj=10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[37].replace(46,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i = 37,j=46;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 10 )
  {    board[i].replace(j,1," ");
         if( board[37].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");indexAi=16 , indexAj=10 ; hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[38].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[38].replace(39,1," ");
			 indexBi=17,indexBj=10;hitrecord2++;
			 piecehit2++;total2=0;pc_2=0;}
		    
		     board[37].replace(39,1,"C");
			 if ( piecehit2 > 0)
		      {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
              display_board(board,size);
               i =37 ,j=39;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 11 )
  {   board[i].replace(j,1," ");
         if( board[34].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[35].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[35].replace(39,1," ");
			 indexBi=17,indexBj=10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[34].replace(39,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
             display_board(board,size);
               i =34 ,j=39;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 12 )
  {  board[i].replace(j,1," ");
         if( board[31].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10;hitrecord2++;
			 piecehit2++;total1=0;pc_1=0;}
    else if( board[32].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); 
			 board[32].replace(39,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[31].replace(39,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
             display_board(board,size);
               i =31 ,j=39;    
  }
  //--------------------------------------------------------------------------------------
  else if( total == 13 )
  {    board[i].replace(j,1," ");
         if( board[28].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");indexAi=16 , indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[29].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[29].replace(39,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++;total2=0;pc_2=0;}
		    
		     board[28].replace(39,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
           display_board(board,size);
               i =28 ,j=39;
  }
  //--------------------------------------------------------------------------------------
  else if( total == 14 )
  {    board[i].replace(j,1," ");
         if( board[25].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");indexAi=16 , indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[26].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[26].replace(39,1," ");
			 indexBi=17,indexBj=10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[25].replace(39,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =25 ,j=39;
      }
//--------------------------------------------------------------------------------------
  else if( total == 15 )
  {    board[i].replace(j,1," ");
         if( board[22].at(32) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[23].at(32) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");  
			 board[23].replace(32,1," ");
			 indexBi=17,indexBj=10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[22].replace(32,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
           display_board(board,size);
               i =22 ,j=32;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 16 )
  {    
       board[i].replace(j,1," ");
         if( board[22].at(25) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10 ;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[23].at(25) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[23].replace(25,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}

		     board[22].replace(25,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
           display_board(board,size);
               i =22 ,j=25;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 17 )
  {    board[i].replace(j,1," ");
         if( board[22].at(18) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10;hitrecord2++;
			 piecehit2++;total1=0;pc_1=0;}
    else if( board[23].at(18) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[23].replace(18,1," ");
			 indexBi=17,indexBj=10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[22].replace(18,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
            display_board(board,size);
               i =22 ,j=18;
      }
//--------------------------------------------------------------------------------------
  else if( total == 18 )
  {    board[i].replace(j,1," ");
         if( board[22].at(11) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[23].at(11) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[23].replace(11,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[22].replace(11,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =22 ,j=11;
      }
//--------------------------------------------------------------------------------------
   else if( total == 19 )
  {    board[i].replace(j,1," ");
         if( board[22].at(4) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10;hitrecord2++;
			 piecehit2++;total1=0;pc_1=0;}
    else if( board[23].at(4) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[23].replace(4,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[22].replace(4,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =22 ,j=4;
      }
//--------------------------------------------------------------------------------------
   else if( total == 20 )
  {    board[i].replace(j,1," ");
         if( board[19].at(4) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10; hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[20].at(4) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[20].replace(4,1," ");
			 indexBi=17,indexBj=10; hitrecord2++; 
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[19].replace(4,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =19 ,j=4;
      }
//--------------------------------------------------------------------------------------
    else if( total == 21 )
  {    board[i].replace(j,1," ");
         if( board[16].at(4) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10; hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[17].at(4) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[17].replace(4,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[16].replace(4,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =16 ,j=4;
      }
//--------------------------------------------------------------------------------------
    else if( total == 22 )
  {     board[i].replace(j,1," ");
         if( board[16].at(11) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");indexAi=16 , indexAj=10; hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[17].at(11) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[17].replace(11,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[16].replace(11,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =16 ,j=11;
      }
	//--------------------------------------------------------------------------------------
     else if( total == 23 )
  {   board[i].replace(j,1," ");
         if( board[16].at(18) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10; hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[17].at(18) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[17].replace(18,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++;total2=0;pc_2=0;}
		    
		     board[16].replace(18,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =16 ,j=18;
      }
//--------------------------------------------------------------------------------------
     else if( total == 24 )
  {    board[i].replace(j,1," ");
         if( board[16].at(25) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10; hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[17].at(25) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[17].replace(25,1," ");
			 indexBi=17,indexBj=10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}

		     board[16].replace(25,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =16 ,j=25;
      }
//--------------------------------------------------------------------------------------
      else if( total == 25 )
  {    board[i].replace(j,1," ");
         if( board[16].at(32) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[17].at(32) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); 
			 board[17].replace(32,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++;total2=0;pc_2=0;}
		    
		     board[16].replace(32,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =16 ,j=32;
      }
//--------------------------------------------------------------------------------------
      else if( total == 26  )
  {    board[i].replace(j,1," ");
         if( board[13].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10; hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
         else if( board[14].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		 board[7].replace(18,1,"B");
		 board[14].replace(39,1," ");
		 indexBi=17,indexBj=10; hitrecord2++;
		 piecehit2++; total2=0;pc_2=0;}
		    
		     board[13].replace(39,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =13 ,j=39;
      }
//--------------------------------------------------------------------------------------
       else if( total == 27 )
  {   board[i].replace(j,1," ");
         if( board[10].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10 ; hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[11].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); 
			 board[11].replace(39,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[10].replace(39,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =10 ,j=39;
		     
      }
//--------------------------------------------------------------------------------------
       else if( total == 28 )
  {    board[i].replace(j,1," ");
         if( board[7].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");indexAi=16 , indexAj=10 ; hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[8].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[8].replace(39,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++;total2=0;pc_2=0;}
		    
		     board[7].replace(39,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =7 ,j=39;
      }
//--------------------------------------------------------------------------------------
        else if( total == 29 )
  {    board[i].replace(j,1," ");
         if( board[4].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");indexAi=16 , indexAj=10 ;hitrecord2++;
			 piecehit2++;total1=0;pc_1=0;}
    else if( board[5].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); 
			 board[5].replace(39,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[4].replace(39,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =4 ,j=39;
  }
//--------------------------------------------------------------------------------------
        else if( total == 30 )
  {    
       board[i].replace(j,1," ");
         if( board[1].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");indexAi=16 , indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[2].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[2].replace(39,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[1].replace(39,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =1 ,j=39;
  }
//--------------------------------------------------------------------------------------
         else if( total == 31 )
  {    
    board[i].replace(j,1," ");
         if( board[1].at(46) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10; hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
		 else if( board[2].at(46) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[2].replace(46,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[1].replace(46,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =1 ,j=46;
  }
//--------------------------------------------------------------------------------------
         else if( total == 32 )
  {    
     board[i].replace(j,1," ");
         if( board[1].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10; hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[2].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		    board[7].replace(18,1,"B");
			board[2].replace(53,1," ");
			indexBi=17,indexBj=10; hitrecord2++;
			piecehit2++;  total2=0;pc_2=0;}

		     board[1].replace(53,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =1 ,j=53;
  }
//--------------------------------------------------------------------------------------
          else if( total == 33 )
  {    board[i].replace(j,1," ");
         if( board[4].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");indexAi=16 , indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[5].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[5].replace(53,1," ");
			 indexBi=17,indexBj=10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[4].replace(53,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =4 ,j=53;
   }
//--------------------------------------------------------------------------------------
     else if( total == 34 )
     {    
	   board[i].replace(j,1," ");
         if( board[7].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");indexAi=16 , indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[8].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[8].replace(53,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[7].replace(53,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =7 ,j=53;
   }
//--------------------------------------------------------------------------------------
        else if( total == 35 )
  {    board[i].replace(j,1," ");
         if( board[10].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");  indexAi=16 , indexAj=10; hitrecord2++;
			 piecehit2++;total1=0;pc_1=0;}
    else if( board[11].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[11].replace(53,1," ");
			 indexBi=17,indexBj=10; hitrecord2++; 
			 piecehit2++;total2=0;pc_2=0;}
		    
		     board[10].replace(53,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =10 ,j=53;
   }
//--------------------------------------------------------------------------------------
      else if( total == 36 )
  {     board[i].replace(j,1," ");
         if( board[13].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10; hitrecord2++;
			 piecehit2++;total1=0;pc_1=0;}
    else if( board[14].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[14].replace(53,1," ");
			 indexBi=17,indexBj=10; hitrecord2++; 
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[13].replace(53,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =13 ,j=53;;
   }
//--------------------------------------------------------------------------------------
       else if( total == 37 )
  {     board[i].replace(j,1," ");
         if( board[16].at(60) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");indexAi=16 , indexAj=10; hitrecord2++;
			 piecehit2++;total1=0;pc_1=0;}
    else if( board[17].at(60) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); 
			 board[17].replace(60,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[16].replace(60,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =16 ,j=60;
  }
//--------------------------------------------------------------------------------------
    else if( total == 38 )
  {    
          board[i].replace(j,1," ");
         if( board[16].at(67) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10; hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[17].at(67) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[17].replace(67,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[16].replace(67,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =16 ,j=67;
      }
//--------------------------------------------------------------------------------------
   else if( total == 39 )
  {    board[i].replace(j,1," ");
         if( board[16].at(74) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10; hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[17].at(74) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); 
			 board[17].replace(74,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[16].replace(74,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
        display_board(board,size);
               i =16 ,j=74;
      }
//--------------------------------------------------------------------------------------
   else if( total == 40 )
  {    board[i].replace(j,1," ");
         if( board[16].at(81) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); indexAi=16 , indexAj=10; hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[17].at(81) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); 
			 board[17].replace(81,1," ");
			 indexBi=17,indexBj=10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[16].replace(81,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
             display_board(board,size);
               i =16 ,j=81;
      }
//--------------------------------------------------------------------------------------
   else if( total == 41 )
  {    board[i].replace(j,1," ");
         if( board[16].at(88) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");indexAi=16 , indexAj=10; hitrecord2++;
			 piecehit2++;  total1=0;pc_1=0;}
    else if( board[17].at(88) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");indexBi=17,indexBj=10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
		     board[16].replace(88,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
             display_board(board,size);
               i =16 ,j=88;
      }
//--------------------------------------------------------------------------------------
    else if( total == 42 )
  {    board[i].replace(j,1," ");
         if( board[19].at(88) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");indexAi=16 , indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
    else if( board[20].at(88) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");
			 board[20].replace(88,1," ");
			 indexBi=17,indexBj=10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    // board[20].replace(88,1," ");
		     board[19].replace(88,1,"C");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else
              display_board(board,size);
               i =19 ,j=88;
      }
//------------------------------------------------------------------------------------------
   
   
     else if( total == 43 )
		   {  if ( hitrecord2 > 0 )
	          { 
			   board[i].replace(j,1," ");
               board[19].replace(82,1,"C");
               display_board(board,size);
			   i =19 ,j=82;
	          }
	         else
			   { //cout<<"Sorry you cannot move inside"<<endl;
				   system("cls");display_board(board,size);
				   cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 total-=dice;check_move3 = false ;}
           }
//--------------------------------------------------------------------------------------
      else if( total == 44 )
           { if (hitrecord2 > 0 )
	          {
			   board[i].replace(j,1," ");
               board[19].replace(75,1,"C");
               display_board(board,size);
               i =19 ,j=75;
	          }
	       else
			   { //cout<<"Sorry you cannot move inside"<<endl;
				  // Sleep(1000);
				   system("cls");display_board(board,size);
				   cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 total-=dice;check_move3 = false ;}
           } 
//--------------------------------------------------------------------------------------
           else if( total == 45 )
           {   if (hitrecord2 > 0 )
	            {
			   board[i].replace(j,1," ");
               board[19].replace(68,1,"C");
               display_board(board,size);
               i =19 ,j=68;
	            }
	        else
			   { //cout<<"Sorry you cannot move inside"<<endl;
				   system("cls");display_board(board,size);
				   cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 total-=dice;check_move3 = false ;}
		   } 
//--------------------------------------------------------------------------------------
           else if( total == 46 )
           {    if (hitrecord2 > 0 )
	          {
				board[i].replace(j,1," ");
                board[19].replace(61,1,"C");
                display_board(board,size);
                i =19 ,j=61;
		       }
		      else
			   { //cout<<"Sorry you cannot move inside"<<endl;
				   system("cls");display_board(board,size);
				   cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 total-=dice;check_move3 = false ;}
		   } 
//--------------------------------------------------------------------------------------
		   else if( total == 47)
		  {if (hitrecord2 > 0 )
	       {
		   board[i].replace(j,1," ");
		   display_board(board,size);
		   cout<<"Congratulations!"<<endl;
		   cout<<"Your one piece has successfully run!" <<endl;
		   check_hit3 = true;
		   }
		   else
			   { //cout<<"Sorry you cannot move inside"<<endl;
				   system("cls");display_board(board,size);
				   cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 total-=dice;check_move3 = false ;
		       }
		   }
//--------------------------------------------------------------------------------------
	      else if( total > 47 )
		  { total -= dice;
		   system("cls");display_board(board,size);
			cout << "You cannot move this piece "<<endl;
		    check_hit3 = false;}
//--------------------------------------------------------------------------------------
      
   }//if (count>0)
  else
  {cout<<"This piece is not legal to move yet!"<<endl;}
}//function end.
void player2_piece2(string board[],int size,int dice,int & i,int & j,int & indexAi,int & indexAj,int & indexBi,int & indexBj,int & count,int & pc_1,int & pc_2,int & total,int & total1,int & total2,int & hitrecord2,bool  & check_hit4,bool & check_move4)
{
  int piecehit2 = 0;
  if (count  > 0 )
    { 
  board[32].replace(78,1," ");
  if (total == 1)
     {   board[23].replace(80,1," ");
        if( board[23].at(74) == 'B')
		  	{//cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); indexBi = 17, indexBj = 10;  
			 piecehit2++; total2=0;pc_2=0;hitrecord2++;
		     }
       else if( board[22].at(74) == 'A')
		  	{//cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");indexAi=16,indexAj=10;
			 board[22].replace(74,1," ");
			 piecehit2++; total1=0;pc_1=0;hitrecord2++;}       
		 board[23].replace(74,1,"D");
		 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
         display_board(board,size);
       i = 23,j=74;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 2 )
  {   board[i].replace(j,1," ");
         if( board[23].at(67) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); indexBi = 17, indexBj = 10; 
			 piecehit2++; total2=0;pc_2=0;hitrecord2++;}
         else if( board[22].at(67) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); 
			 board[22].replace(67,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
         board[23].replace(67,1,"D");
		 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
		 display_board(board,size);
       i = 23,j=67;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 3 )
  {    board[i].replace(j,1," ");
            if( board[23].at(60) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");indexBi = 17, indexBj = 10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
         else if( board[22].at(60) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[22].replace(60,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0,pc_1=0;}
          board[23].replace(60,1,"D");
		  if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
         display_board(board,size);
       i = 23,j=60;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 4 )
  {     board[i].replace(j,1," ");
         if( board[26].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");indexBi = 17, indexBj = 10;hitrecord2++;   
			 piecehit2++; total2=0;pc_2=0;}
         else if( board[25].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[25].replace(53,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
          board[26].replace(53,1,"D");
		  if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
         display_board(board,size);
       i = 26,j=53;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 5 )
  {    board[i].replace(j,1," ");
          if( board[29].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); indexBi = 17, indexBj = 10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
         else if( board[28].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[28].replace(53,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
          board[29].replace(53,1,"D");
		  if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
         display_board(board,size);
       i = 29,j=53;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 6 )
  {    board[i].replace(j,1," ");
         if( board[32].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
         else if( board[31].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[31].replace(53,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
          board[32].replace(53,1,"D");
		  if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
         display_board(board,size);
       i = 32,j=53;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 7 )
  {   board[i].replace(j,1," ");
         if( board[35].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); indexBi = 17, indexBj = 10;hitrecord2++; 
			 piecehit2++; total2=0;pc_2=0;}
         else if( board[34].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); 
			 board[34].replace(53,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
		    board[35].replace(53,1,"D");
			if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
		 display_board(board,size);
               i = 35,j=53;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 8 )
  {   board[i].replace(j,1," ");
        if( board[38].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}  
        else if( board[37].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");indexAi=16,indexAj=10;hitrecord2++;
			 board[37].replace(53,1," ");
			 piecehit2++; total1=0;pc_1=0;}
		    
		     board[38].replace(53,1,"D");
             if ( piecehit2 > 0)
			 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
             else 
			 display_board(board,size);
               i = 38,j=53;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 9 )
  {    board[i].replace(j,1," ");
         if( board[38].at(46) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");indexBi = 17, indexBj = 10;hitrecord2++;  
			 piecehit2++; total2=0;pc_2=0;}
         else if( board[37].at(46) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[37].replace(46,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}     
		    
		     board[38].replace(46,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
			 display_board(board,size);
               i = 38,j=46;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 10 )
  {    board[i].replace(j,1," ");
      if( board[38].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
      else if( board[37].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[37].replace(39,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
		    
		     board[38].replace(39,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
              display_board(board,size);
               i =38 ,j=39;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 11 )
  {   board[i].replace(j,1," ");
         if( board[35].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); indexBi = 17, indexBj = 10; hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
         else if( board[34].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[34].replace(39,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}          
		    
		     board[35].replace(39,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =35 ,j=39;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 12 )
  {  board[i].replace(j,1," ");
         if( board[32].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");indexBi = 17, indexBj = 10;hitrecord2++;  
			 piecehit2++; total2=0;pc_2=0;}
         else if( board[31].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[31].replace(39,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}         
		    
		     board[32].replace(39,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =32 ,j=39;    
  }
  //--------------------------------------------------------------------------------------
  else if( total == 13 )
  {    board[i].replace(j,1," ");
         if( board[29].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
         else if( board[28].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[28].replace(39,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
		    
		     board[29].replace(39,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =29 ,j=39;
  }
  //--------------------------------------------------------------------------------------
  else if( total == 14 )
  {    board[i].replace(j,1," ");
         if( board[26].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
         else if( board[25].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[25].replace(39,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
		    
		     board[26].replace(39,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =26 ,j=39;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 15 )
  {    board[i].replace(j,1," ");
         if( board[23].at(32) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");indexBi = 17, indexBj = 10;  hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
         else if( board[22].at(32) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); 
			 board[22].replace(32,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
		    
		     board[23].replace(32,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =23 ,j=32;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 16 )
  {    
       board[i].replace(j,1," ");
	      if( board[23].at(25) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");  
			 indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
         else if( board[22].at(25) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[22].replace(25,1," ");
			 piecehit2++;indexAi=16,indexAj=10;hitrecord2++;
			 total1=0;pc_1=0;}
		    
		     board[23].replace(25,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =23 ,j=25;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 17 )
  {    board[i].replace(j,1," ");
          if( board[23].at(18) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");   indexBi = 17, indexBj = 10;
			 piecehit2++; total2=0;pc_2=0;hitrecord2++;
		    }
         else if( board[22].at(18) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");   
			 board[22].replace(18,1," ");indexAi=16,indexAj=10;
			 piecehit2++; total1=0;pc_1=0;hitrecord2++;
		  }
		    
		     board[23].replace(18,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =23 ,j=18;
      }
  //--------------------------------------------------------------------------------------
  else if( total == 18 )
  {    board[i].replace(j,1," ");
       if( board[23].at(11) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
    
       else if( board[22].at(11) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[22].replace(11,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;
		 }
       
		     board[23].replace(11,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =23 ,j=11;
      }
  //--------------------------------------------------------------------------------------
   else if( total == 19 )
  {    board[i].replace(j,1," ");
         if( board[23].at(4) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");  indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
         else if( board[22].at(4) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); 
			 board[22].replace(4,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;
		  }
          
		     board[23].replace(4,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =23 ,j=4;
      }
  //--------------------------------------------------------------------------------------
   else if( total == 20 )
  {    board[i].replace(j,1," ");
       if( board[20].at(4) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");indexBi = 17, indexBj = 10;hitrecord2++;  
			 piecehit2++; total2=0;pc_2=0;}
       else if( board[19].at(4) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[19].replace(4,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
             board[20].replace(4,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
             display_board(board,size);
               i =20 ,j=4;
      }
   //--------------------------------------------------------------------------------------
    else if( total == 21 )
  {    board[i].replace(j,1," ");
         if( board[17].at(4) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");  
			indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
         else if( board[16].at(4) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); 
			 board[16].replace(4,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;
	        }
		    
		     board[17].replace(4,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =17 ,j=4;
      }
//--------------------------------------------------------------------------------------
    else if( total == 22 )
  {     board[i].replace(j,1," ");
	  if( board[17].at(11) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");   
			 indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0;pc_2=0;}
		    
	 else if( board[16].at(11) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[16].replace(11,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
	     
		     board[17].replace(11,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =17 ,j=11;
      }
//--------------------------------------------------------------------------------------
     else if( total == 23 )
  {   board[i].replace(j,1," ");
	     if( board[17].at(18) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");indexBi = 17, indexBj = 10;hitrecord2++; 
			 piecehit2++; total2=0;pc_2=0;}
		    
         else if( board[16].at(18) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");  
			 board[16].replace(18,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0;pc_1=0;}
             board[17].replace(18,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
             display_board(board,size);
               i =17 ,j=18;
      }
//--------------------------------------------------------------------------------------
     else if( total == 24 )
  {    board[i].replace(j,1," ");
	     if( board[17].at(25) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");  
			 indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0,pc_2=0;}
		    
         else if( board[16].at(25) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");  
			 board[16].replace(25,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0,pc_1=0;}
          
		     board[17].replace(25,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
                display_board(board,size);
               i =17 ,j=25;
      }
//--------------------------------------------------------------------------------------
      else if( total == 25 )
  {    board[i].replace(j,1," ");
	     if( board[17].at(32) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");indexBi = 17, indexBj = 10;hitrecord2++; 
			 piecehit2++; total2=0,pc_2=0;}
         else if( board[16].at(32) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[16].replace(32,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0,pc_1=0;}
		    
		     board[17].replace(32,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
             display_board(board,size);
               i =17 ,j=32;
      }
//--------------------------------------------------------------------------------------
      else if( total == 26  )
  {    board[i].replace(j,1," ");
	     if( board[14].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); 
			 indexBi = 17, indexBj = 10;hitrecord2++; 
			 piecehit2++; total2=0,pc_2=0;}
         else if( board[13].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");  
			 board[13].replace(39,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0,pc_1=0;}
        
		     board[14].replace(39,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
              display_board(board,size);
               i =14 ,j=39;
      }
//--------------------------------------------------------------------------------------
       else if( total == 27 )
  {   board[i].replace(j,1," ");
	      if( board[11].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");  
			 indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0,pc_2=0;}
         else if( board[10].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); 
		     board[10].replace(39,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0,pc_1=0;}
		    
		     board[11].replace(39,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
            display_board(board,size);
               i =11 ,j=39;
		     
      }
//--------------------------------------------------------------------------------------
       else if( total == 28 )
  {    board[i].replace(j,1," ");
	     if( board[8].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");  indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0,pc_2=0;}
	    else if( board[7].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");  
			 board[7].replace(39,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0,pc_1=0;}
		    
		     board[8].replace(39,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
             display_board(board,size);
               i =8 ,j=39;
      }
//--------------------------------------------------------------------------------------
        else if( total == 29 )
  {    board[i].replace(j,1," ");
	     if( board[5].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++;total2=0,pc_2=0;}
		    
         else if( board[4].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[4].replace(39,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0,pc_1=0;}
         
		     board[5].replace(39,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
            display_board(board,size);
               i =5 ,j=39;
  }
//--------------------------------------------------------------------------------------
        else if( total == 30 )
  {    
       board[i].replace(j,1," ");
	   if( board[2].at(39) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");  indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0,pc_2=0;}
		   
		else if( board[1].at(39) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[1].replace(39,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0,pc_1=0;}
        	 board[2].replace(39,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =2 ,j=39;
  }
//--------------------------------------------------------------------------------------
         else if( total == 31 )
  {    
    board[i].replace(j,1," ");
	     if( board[2].at(46) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");  indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0,pc_2=0;}
         else if( board[1].at(46) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[1].replace(46,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0,pc_1=0;}          
		    
		     board[2].replace(46,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =2 ,j=46;
  }
//--------------------------------------------------------------------------------------
         else if( total == 32 )
  {    
     board[i].replace(j,1," ");
	     if( board[2].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");   indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0,pc_2=0;}
         else if( board[1].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A"); 
			 board[1].replace(53,1," ");indexAi=16,indexAj=10;hitrecord2++;
			  piecehit2++; total1=0,pc_1=0;}
		    
		     board[2].replace(53,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
           display_board(board,size);
               i =2 ,j=53;
  }
//--------------------------------------------------------------------------------------
          else if( total == 33 )
  {    board[i].replace(j,1," ");
		 if( board[5].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");  indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0,pc_2=0;}
         else if( board[4].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[4].replace(53,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0,pc_1=0;}
		    
		     board[5].replace(53,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
             display_board(board,size);
               i =5 ,j=53;
   }
//--------------------------------------------------------------------------------------
  else if( total == 34 )
  {    
	 board[i].replace(j,1," ");
	     if( board[8].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");  indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0,pc_2=0;}
		    
         else if( board[7].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[7].replace(53,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0,pc_1=0;}
         
		     board[8].replace(53,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =8 ,j=53;
   }
//--------------------------------------------------------------------------------------
        else if( total == 35 )
  {    board[i].replace(j,1," ");
		  if( board[11].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0,pc_2=0;}
		else if( board[10].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");indexAi=16,indexAj=10;hitrecord2++;
			 board[10].replace(53,1," ");
			 piecehit2++; total1=0,pc_1=0;}
		    
		     board[11].replace(53,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =11 ,j=53;
   }
  //--------------------------------------------------------------------------------------
      else if( total == 36 )
  {     board[i].replace(j,1," ");
		    if( board[14].at(53) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");  indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0,pc_2=0;}
		    
         else if( board[13].at(53) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");indexAi=16,indexAj=10;hitrecord2++;
			 board[13].replace(53,1," ");
			 piecehit2++; total1=0,pc_1=0;}
        
		     board[14].replace(53,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =14 ,j=53;;
   }
//--------------------------------------------------------------------------------------
       else if( total == 37 )
  {     board[i].replace(j,1," ");
	       if( board[17].at(60) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0,pc_2=0;}
		    
         else if( board[16].at(60) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[16].replace(60,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0,pc_1=0;}
        
		     board[17].replace(60,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =17 ,j=60;
  }
//--------------------------------------------------------------------------------------
    else if( total == 38 )
  {    
          board[i].replace(j,1," ");
		  if( board[17].at(67) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0,pc_2=0;}
		    
         else if( board[16].at(67) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[16].replace(67,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0,pc_1=0;}
             board[17].replace(67,1,"D");
			if ( piecehit2 > 0)
		      {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
             display_board(board,size);
               i =17 ,j=67;
      }
//--------------------------------------------------------------------------------------
   else if( total == 39 )
  {    board[i].replace(j,1," ");
	     if( board[17].at(74) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B");  indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++;total2=0,pc_2=0;}
         else if( board[16].at(74) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[16].replace(74,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++;total1=0,pc_1=0;} 
		    
		     board[17].replace(74,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =17 ,j=74;
      }
//--------------------------------------------------------------------------------------
   else if( total == 40 )
  {    board[i].replace(j,1," ");
         if( board[17].at(81) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); indexBi = 17, indexBj = 10;hitrecord2++;
			 piecehit2++; total2=0,pc_2=0;}		    
         else if( board[16].at(81) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[16].replace(81,1," ");indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++;total1=0,pc_1=0;}
          
		     board[17].replace(81,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =17 ,j=81;
      }
//--------------------------------------------------------------------------------------
   else if( total == 41 )
  {    board[i].replace(j,1," ");
         if( board[17].at(88) == 'B')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(18,1,"B"); 
			 indexBi = 17, indexBj = 10; hitrecord2++;
			 piecehit2++; total2=0,pc_2=0;}
         else if( board[16].at(88) == 'A')
		  	{cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		     board[7].replace(13,1,"A");
			 board[16].replace(88,1," ");
			 indexAi=16,indexAj=10;hitrecord2++;
			 piecehit2++; total1=0,pc_1=0;}
          
		     board[17].replace(88,1,"D");
			 if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
         else 
        display_board(board,size);
               i =17 ,j=88;
      }
 //--------------------------------------------------------------------------------------   
   else	if( total == 42 )
               {    board[i].replace(j,1," ");
                     if( board[20].at(88) == 'B')
		           	   {cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		                board[7].replace(18,1,"B");
						piecehit2++; total2=0,pc_2=0;hitrecord2++;
						indexBi = 17, indexBj = 10;}
                     else if( board[19].at(88) == 'A')
		  	           {cout <<"PLAYER 2 HIT PLAYER 1"<<endl;
		               board[7].replace(13,1,"A"); 
					   board[19].replace(88,1," ");
					   indexAi=16,indexAj=10;
					   piecehit2++; total1=0,pc_1=0;}
                      
					   board[20].replace(87,1,"D");
					   if ( piecehit2 > 0)
		 {display_board(board,size);cout<<"\t\tPLAYER 2 HIT PLAYER 1!"; Beep(500,500);cout<<endl;}
                     else 
                       display_board(board,size);
                       i =20 ,j=87;
			   }
    //--------------------------------------------------------------------------------------
   
		
         else if( total == 43 )
               { if(hitrecord2 > 0 )
			       {
				   board[i].replace(j,1," ");
                   board[19].replace(80,1,"D");
                   display_board(board,size);
				   i =19 ,j=80;}
			   else
			   { //cout<<"Sorry you cannot move inside"<<endl;
				   system("cls");display_board(board,size);
				   cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 total-=dice;check_move4 = false ;}
			   }
         else if( total == 44 )
               {   
				   if(hitrecord2 > 0 )
			       {
				   board[i].replace(j,1," ");
                   board[19].replace(73,1,"D");
                   display_board(board,size);
				   i =19 ,j=73; }
				   else
			   { //cout<<"Sorry you cannot move inside"<<endl;
				   system("cls");display_board(board,size);
				   cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 total-=dice;check_move4 = false ;}
			   } 
        else if( total == 45 )
               {   if(hitrecord2 > 0 )
			       {
					board[i].replace(j,1," ");
                   board[19].replace(66,1,"D");
                   display_board(board,size);
				   i =19 ,j=66;}
				   else
			   { //cout<<"Sorry you cannot move inside"<<endl;
				   system("cls");display_board(board,size);
				   cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 total-=dice;check_move4 = false ;}
			   } 
            else if( total == 46 )
               {   if(hitrecord2 > 0 )
			       {
					board[i].replace(j,1," ");
                    board[19].replace(59,1,"D");
                    display_board(board,size);
					i =19 ,j=59;}
					else
			   { //cout<<"Sorry you cannot move inside the run line"<<endl;
				   system("cls");display_board(board,size);
				   cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 total-=dice;check_move4 = false ;}
			}
		  else if( total == 47)
		   {if (hitrecord2 > 0 )
	       {
		   board[i].replace(j,1," ");
		   display_board(board,size);
		   cout<<"Congratulations!"<<endl;
		   cout<<"Your one piece has successfully run!" <<endl;
		   check_hit4 = true;
		   }
		   else
			   { //cout<<"Sorry you cannot move inside"<<endl;
				   system("cls");display_board(board,size);
				   cout<<"\n\tPIECE CANNOT MOVE"<<endl;
                 total-=dice;check_move4 = false ;
			    }
		       }
           
	      else if( total > 47 )
		  {total -= dice;
		    system("cls");display_board(board,size);
			cout << "You cannot move this piece"<<endl;
		    check_hit4 = false;}

      } //if (count>0)
  else
  {cout<<"This piece is not legal to move yet!"<<endl;}
}


 







