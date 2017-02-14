#include "CPlayer.hpp"

namespace xo {
namespace player {
	

	
CPlayer::CPlayer(xo::game::CGame* game, xo::xofield::CXOfield* field, char symbol)
:mpGame(game)
,mOunSimbol(symbol)
,mpField(field)
{
	cout<<"CPlayer is created\n";
	// TODO screen->print_msg() 
}

CPlayer::~CPlayer()
{
	
}


void CPlayer::make_a_move()
{
	// TODO NEED Brain
	
	cout<<"CPlayer::make_a_move()  mOunSimbol = "<<mOunSimbol<<"\n";
	//PRINT("CPlayer::make_a_move()");
	
	while(true)
	{
		 int pos_row =2; // random(1,3);
		 int pos_col =1; // random(1,3);
		
		 if(pos_row > 0 && pos_row < 4 && pos_col > 0 && pos_col< 4)
		 {
			cout<<"CPlayer: position is correct\n"; 
			
			if( ( (*mpField)[pos_row][pos_col] != 'X') && ( (*mpField)[pos_row][pos_col] != '0') )
			{
			    (*mpField)[pos_row][pos_row] = mOunSimbol;
				cout<<"Position "<<pos_row<<" : "<<pos_col<<" was set as "<<mOunSimbol<<"\n";
				break;
			}
		
			else
			{
				cout<<"position is already taken\n";
			}
				
		 }
		 else
		 {
			 cout<<"ERROR wrong position\n";
		 }
    }
	
}



} // namespace player
} // namespace xo