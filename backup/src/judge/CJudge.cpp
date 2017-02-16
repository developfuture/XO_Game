//TODO #include "../player/CPlayer.hpp"

#include "CJudge.hpp"

namespace xo {
namespace judge {

CJudge::CJudge(xo::game::CGame& game, xo::xofield::CXOfield* field)
:mGame(game)
,mpField(field)
,mpCurrentPlayer('X')
//,mpGames(0)
{
	cout<<"CJudge is created\n";
	// TODO screen->print_msg()
}

CJudge::~CJudge()
{

}


bool CJudge::isSomeoneWon() const
{
	cout<<"CJudge::isSomeoneWon()\n";

	// TODO chack if game was won
	return false;
}


bool CJudge::isFieldCompleted() const
{
	cout<<"CJudge::isFieldCompleted()\n";
   //Sleep(1000);

   if( ( (*mpField)[1][1] == 'X' || (*mpField)[1][1] == '0' ) &&
   	 ( (*mpField)[1][2] == 'X' || (*mpField)[1][2] == '0' ) &&
       ( (*mpField)[1][3] == 'X' || (*mpField)[1][3] == '0' ) &&
       ( (*mpField)[2][1] == 'X' || (*mpField)[2][1] == '0' ) &&
       ( (*mpField)[2][2] == 'X' || (*mpField)[2][2] == '0' ) &&
       ( (*mpField)[2][3] == 'X' || (*mpField)[2][3] == '0' ) &&
       ( (*mpField)[3][1] == 'X' || (*mpField)[3][1] == '0' ) &&
       ( (*mpField)[3][2] == 'X' || (*mpField)[3][2] == '0' ) &&
       ( (*mpField)[3][3] == 'X' || (*mpField)[3][3] == '0' ) )
   {
   	cout<<"Field is complited\n";
   	return true;
	}

}


void CJudge::nextMove()
{
	//Sleep(1000);
   cout<<"CJudge::nextMove()\n";

   cout<<"--> input somthing to continue\n";
   int pause;  cin>>pause;

   if(isSomeoneWon())
   {
      cout<<"Player "<<mpCurrentPlayer<<" WON!!!\n";
      return;
   }

	if(isFieldCompleted())
	{
			// TODO send results to main system to Delete Game
			cout<<"END of game, it is DROW!\n";
			return;
	}

   //if(mpGame)
   //{
	   if( mpCurrentPlayer == 'X')
	   {
	      mpCurrentPlayer = '0';
	      mGame.doNextMove(mpCurrentPlayer);
	   }
	   else
	   {
	      mpCurrentPlayer = 'X';
	      mGame.doNextMove(mpCurrentPlayer);
	   }
   //}
   //else
   //{
   	//cout<<"Error: mGame is NULL\n";
   //}

   cout<<"Current Player"<<mpCurrentPlayer<<"\n";

}


void CJudge::doNextPlayerMove() //const
{
   nextMove();
}

// TODO
//void CJudge::addGame(xo::game::CGame* mGame)
//{
   //mGames.push_back(mGame);
//}

} // namespace judge
} // namespace xo
