#include <iostream>

using namespace std;

int main()
{
    // prictise in hostel<<<<<<<<<<<<<<<<<<<looops>>>>>>>>>>>>>>>>>>>
    // solid rectangle<<<<<<<<<<<<<<<
    // for (int col = 0; col < 6; col = col + 1)
    // // outer loop witch is from row
    // {
    //     // inner loop from the column of the triangle
    //     for (int row = 0; row < 2; row = row + 1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // for (int row = 0; row < 5; row = row + 1)
    // // outer loop witch is from row
    // {
    //     // inner loop from the column of the triangle
    //     for (int col = 0; col < 6; col = col + 1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;

    // squre pattern<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    // for (int row = 0; row < 6; row = row + 1)
    // // outer loop witch is from row
    // {
    //     // inner loop from the column of the triangle
    //     for (int col = 0; col < 6; col = col + 1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;

    // squre pattern<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    // by taking input of the squrepattern
    // int n;
    // cout<<"enter the col and row number:  ";
    // cin>>n;
    // for (int row = 0 ; row<n; row=row+1){
    //     for (int col= 0 ; col<n; col=col+1){
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }

    // int row, col;
    // cout<<"enter row : "
    // cin>>row;
    // cout<<"enter column: "
    // cin>>col;
    // }}

    // hollow rectangle<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    // for (int row = 0; row < 3; row = row + 1)
    // {
    //     if (row == 0 || row == 2)
    //     {
    //         for (int col = 0; col < 5; col++)
    //         {
    //             cout <<"* ";
    //         }
    //     }
    //     else
    //     {
    //         cout <<"* ";
    //         for (int i = 0; i < 3; i = i + 1)
    //         {
    //             cout << "  ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int row = 0; row < 4; row = row + 1)
    // {
    //     if (row == 0 || row == 3)
    //     {
    //         for (int col = 0; col < 5; col++)
    //         {
    //             cout << "* ";
    //         }
    //     } 
    //     else
    //     {
    //         cout << "* ";
    //         for (int i = 0; i < 4; i = i + 1)
    //         {
    //             cout << "  ";
    //         }
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // for(int row =0 ; row<3; row=row+1)
    // {
    //     if( row==0 || row==2){
    //         for(int col=0; col<5; col++)
    //         {
    //             cout<<"* ";
    //         }
    //     }
    
    // else{
    //     // first star of the second row
    //     cout<<"* ";
    //     // spaces
    //     for(int i=0; i<3; i=i++){
    //         cout<<"  ";
    //     }
    // // last  star
    // cout<<"* ";
    // }
    // cout<<endl;
    
    // }

    int rowCount, colCount;

    cout<<"enter row: ";
    cin>>rowCount;
    cout<<"enter col: ";
    cin>>colCount;
// hollow rectangle
    for(int row= 0 ; row<rowCount; row=row+1){
        if(row==0 || row== rowCount-1){
            for( int col=0 ; col<colCount; col++){
                cout<<"$ ";
            }
        }
        else{
            // first star of second row
            cout<<"$ ";
        
        // spaces
        for( int i=0 ; i<colCount-2; i=i+1){
            cout<<"  ";
        }
        cout<<"$ ";
        }
    
    cout<<endl;
    }



    //     for(int row=0; row<rowCount; row=row+1) {
    //  //first row or last row -> print 5 *
    //  if(row == 0  || row == rowCount-1 ){
    //      for(int col=0; col<colCount; col++) {
    //          cout << "* ";
    //      }
    //  }
    //  else {
    //      //remainging middle rows
    //      //first star
    //      cout << "* ";
    //      //spaces
    //      for(int i=0; i< colCount-2; i=i+1){
    //          cout << "  ";
    //      }
    //      //last star
    //      cout << "* ";
    //  }
    //  cout << endl;
    // }


}
