#ifndef xo_xofield_hpp
#define xo_xofield_hpp

namespace xo {
namespace xofield {


class CXOfield
{
public:

    CXOfield(/* CGame* game */);
    ~CXOfield();

	class CRow {
         friend class CXOfield;
     public:
         char& operator[](int col)
         {
			cout<<"CRow  row= "<<parent->mRow-1<<" col= "<<col-1<<"\n";

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
   //bool isFieldCompleted();


private:
   int mRow;
   vector<vector<char> > fild;
   CRow* mpRow;
   int mIdOfTable;   // 0 or next in file
   // const char* mFileName;  // from Game



};


} // namespace xofield
} // namespace xo

#endif // xo_xofield_hpp
