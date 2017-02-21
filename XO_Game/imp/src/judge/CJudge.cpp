//TODO #include "../player/CPlayer.hpp"

#include "CJudge.hpp"

namespace xo {
namespace judge {

CJudge::CJudge()
:mpCurrentGame(0)
//,mpCurrentPlayerSimbol('0') // TODO ,mpCurrentPlayer('X')
,mGames( *( new queue< xo::game::CGame* > ) )
{
	cout<<"CJudge is created\n";
	// TODO screen->print_msg()
	//mpField = mpCurrentGame->getXOField();
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

   xo::xofield::CXOfield* mpField = mpCurrentGame->getXOField();

	if(mpField)
	{
	          cout<<"(*mpField)[1][1]"<<(*mpField)[1][1]<<"\n";
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
	else
	{
		cout<<"mpField is NULL";
	}

   return false;
}


void CJudge::nextMove()
{
	//Sleep(1000);
   cout<<"CJudge::nextMove()\n";

   //cout<<"--> input somthing to continue\n";
   //int pause;  cin>>pause;

   if(isSomeoneWon())
   {
      cout<<"Player "<<mpCurrentGame->getCurrentPlayerSimbol()<<" WON!!!\n";
      return;
   }

	if(isFieldCompleted())
	{
			// TODO send results to main system to Delete Game
			cout<<"END of game, it is DROW!\n";
			return;
	}

   if(mpCurrentGame)
   {
		if( mpCurrentGame->getCurrentPlayerSimbol() == 'X')
		{
			mpCurrentGame->setCurrentPlayerSimbol('0');
		   mpCurrentGame->doNextMove();
	   }
	   else
		{
		   mpCurrentGame->setCurrentPlayerSimbol('X');
		   mpCurrentGame->doNextMove();

		}
   }
   else
   {
   	cout<<"mpCurrentGame is NULL";
   }

   cout<<"Current Player "<<mpCurrentGame->getCurrentPlayerSimbol()<<"\n";

}


void CJudge::doNextPlayerMove( xo::game::CGame* game )
{
   // TODO if in processing state  - add to queue
	cout<<"CJudge::doNextPlayerMove()\n";
   mGames.push(game);
   mpCurrentGame = mGames.front();
   nextMove();

}

// TODO
//void CJudge::addGame(xo::game::CGame& mGame)
//{
   //mpGames.push_back(mGame);
//}

} // namespace judge
} // namespace xo
