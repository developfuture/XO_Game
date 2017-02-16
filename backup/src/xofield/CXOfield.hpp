#ifndef xo_xofield_hpp
#define xo_xofield_hpp

#include <vector>

#include <iostream>

using namespace std;
//using std::cout;

namespace xo {
namespace xofield {

using namespace std;

class CXOfield
{
public:

    CXOfield();
    ~CXOfield();

	class CRow {
         friend class CXOfield;
     public:
         char& operator[](int col)
         {
   			//cout<<"CRow  row= "<<parent->mRow-1<<" col= "<<col-1<<"\n";

   			if(col > 0 && col < 4)
   			{
   			   return parent->fild[ (parent->mRow)-1 ][col-1];
   			}
   			else
   			{
   			   cout<<"\nERROR col = "<<col<<"\n";
   			}
         }

         CRow(CXOfield* parent_)
             :parent(parent_)
			 {}

         CXOfield* parent;
     };

    void printField();

	CRow operator[](int col);
	// TODO bool isCompleted();

private:
   int mRow;
   std::vector < std::vector< char > > fild;
   CRow* mpRow;
   int mIdOfTable;   // 0 or next in file
   // TODO const char* mFileName;  // from Game
};


} // namespace xofield
} // namespace xo

#endif // xo_xofield_hpp
