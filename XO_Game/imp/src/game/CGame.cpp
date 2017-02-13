#include "CGame.hpp"
//#include "../player/CPlayer.hpp"
//#include "../xofield/CXOfield.cpp"
//#include "../player/CPlayer.cpp"

namespace xo {
namespace game {
	

	
CGame::CGame( /*xo::xofield::CXOfield field*, CDjudger judjer*/ )
:mpField(0)
,nNextPlayer('X')
,mpPlayerX(0)
,mpPlayer0(0)
{
	cout<<"CGame is created\n";
	// TODO screen->print_msg() 
	
	mpField = new xo::xofield::CXOfield;
	
	mpPlayerX = new xo::player::CPlayer(this, mpField, 'X');
    mpPlayer0 = new xo::player::CPlayer(this, mpField, '0');
	
	 
	 while(true)
	 {
		// TODO isCompleted() in CXOfield
		if(    (*mpField)[1][1] == 'X' && (*mpField)[1][2] == 'X' && (*mpField)[1][3] == 'X' 
		    && (*mpField)[2][1] == 'X' && (*mpField)[2][2] == 'X' && (*mpField)[2][3] == 'X' 
			&& (*mpField)[3][1] == 'X' && (*mpField)[3][2] == 'X' && (*mpField)[3][3] == 'X' 
			|| (*mpField)[1][1] == '0' && (*mpField)[1][2] == '0' && (*mpField)[1][3] == '0' 
		    && (*mpField)[2][1] == '0' && (*mpField)[2][2] == '0' && (*mpField)[2][3] == '0' 
			&& (*mpField)[3][1] == '0' && (*mpField)[3][2] == '0' && (*mpField)[3][3] == '0'
			)
		{
			cout<<"END of game\n";
			break;
		}
		else
		{   Sleep(3000);
			if( nNextPlayer == 'X')
			{
			   mpPlayerX.make_a_move();
			   nNextPlayer = '0';
			}
		    else
			{
				mpPlayer0.make_a_move();
				nNextPlayer = 'X';
			}
			
			
			// when game got result from player another thread:
			// change nNextPlayer
			//TODO 
			
			
			
		}
	 }
	
	
	
}

CGame::~CGame()
{
	
}




} // namespace game
} // namespace xo