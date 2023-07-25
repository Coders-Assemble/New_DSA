#include <iostream>

using namespace std;

int main()
{
    // squre<<<<<<<<<<<<<<
    // int n ,m;
    // cout<<"enter number of rows";
    // cin>>n;
    // cout<<"enter number of columns";
    // cin>>m;

    // for (int row=0; row<n; row++){
    //     for(int col=0; col<m; col++){
    //         cout<<"* ";
    //     }cout<<endl;
    // }
    // return 0;
    // hollow squre<<<<<<<<<<<<<<
    // for (int row = 0; row < 3; row++)
    // {
    //     if (row == 0 || row == 2)
    //     {
    //         for (int col = 0; col < 5; col++)
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     else
    //     {
    //         // first star
    //         cout << "* ";
    //         // spaces
    //         for (int i = 0; i < 3; i++)
    //         {
    //             cout << "  ";
    //         }
    //         // last star
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
// int n, m ;
// cout<<"enter number of rows ";
// cin>>n;
// cout<<"enter number of colmns ";
// cin>>m;
//     for (int row =0; row<n; row++){
//         if(row ==0 || row==n-1){
//             for(int col=0; col<m; col++){
//             cout<<"* "; 
//             }
//         }
//         else{
//             // first star
//             cout<<"* ";
//             // spaces
//             for(int i=0; i<m-2; i++){
//                 cout<<"  ";
//             }
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    // for (int row =0; row<8; row++){
    //     if(row ==0 || row==7){
    //         for(int col=0; col<8; col++){
    //         cout<<"* "; 
    //         }
    //     }
    //     else{
    //         // first star
    //         cout<<"* ";
    //         // spaces
    //         for(int i=0; i<6; i++){
    //             cout<<"  ";
    //         }
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // inverted half pyramid<<<<<<<<<<<<<<<<<<<<<
//     int n;
//     cout<<"enter number of rows ";
//     cin>>n;

// for (int row =0; row<n; row++){
//     for(int col=0; col<n-row; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// neumeric half pyramid
// for (int row =0; row<n; row++){
//     for( int col=0; col<row+1; col++){
//         cout<<col+1;
//     }cout<<endl;
// }   


//  pyrammid with nnumber <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    int n;
    cout<<"enter height of rectangles  : ";
    cin>>n;
    for( int row =0; row<n; row++){
        for(int col=0; col<n-row; col++){
            cout<<col+1;

        }cout<<endl;
    }
// full pyrammid with star <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
// for( int row =0; row<n; row++){
//     // spaces
//     for(int col=0 ; col<n-row-1; col++){
//         cout<<" ";
//     }
//     // star
//     for(int col=0; col<row+1 ; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// for( int row=0 ; row<n; row++){
//     // spaces
//     for(int col=0; col<row; col++){
//         cout<<" ";}
//     // star
//     for(int col=0; col<n-row; col++){
//         cout<<"* ";
//     }cout<<endl;
//     }
    }