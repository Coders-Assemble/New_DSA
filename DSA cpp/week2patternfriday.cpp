# include<iostream>

using namespace std;

int main(){

// // <<<<<<<<<<<<<<<full pyramid by user input>>>>>>>>>>>>>>>>
//     int n;
//     cin>>n;
//     // spaces<<<< n=6 <<<<<< n-0 ,n-1, n-2, n-3, n-4, n-5
//     // now 0 is equal too the n+1
//     // now 1 is equal too the n+1
//     // now 2 is equal too the n+1
//     // now 3 is equal too the n+1
//     // now 4 is equal too the n+1
//     for (int row=0; row<n; row=row+1){
//         for( int col=0; col<n-row-1; col=col+1){
//             cout<<" ";
//         }
//         // stars<<<<<
//     for(int col= 0; col<row+1; col=col+1){
//         cout<<"* ";
//     }
//     cout<<endl;

//     }
//     // return 0;
    
// // <<<<<<<<<<<<<<< inverted full pyramid by user input>>>>>>>>>>>>>>>>
//     for (int row =0; row<n; row++){
//         for (int col=0; col<row; col++){
//             cout<<" ";
//         }
//         for(int col=0; col<n-row; col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

// }
// // <<<<<<<<<<<<<<<solid diamond>>>>>>>>>>>>>>>>
//     int n;
//     cin>>n;
//     // spaces<<<< n=6 <<<<<< n-0 ,n-1, n-2, n-3, n-4, n-5
//     // now 0 is equal too the n+1
//     // now 1 is equal too the n+1
//     // now 2 is equal too the n+1
//     // now 3 is equal too the n+1
//     // now 4 is equal too the n+1
//     for (int row=0; row<n; row=row+1){
//         for( int col=0; col<n-row-1; col=col+1){
//             cout<<" ";
//         }
//         // stars<<<<<
//     for(int col= 0; col<row+1; col=col+1){
//         cout<<"* ";
//     }
//     cout<<endl;

//     }
//     // return 0;
    
// // <<<<<<<<<<<<<<< inverted full pyramid by user input>>>>>>>>>>>>>>>>
//     for (int row =0; row<n; row++){
//         for (int col=0; col<row; col++){
//             cout<<" ";
//         }
//         for(int col=0; col<n-row; col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
int n; 
cin>>n; 
// for (int row=0; row<n ; row++ ){
//     for(int col=0; col<n-row-1; col++){
//         cout<<" ";
//     }
//     for(int col=0; col<2*row+1; col=col+1){
//         if(col==0 || col == 2*row){
//             cout<<"*";
//         }
        
//         else {
//             cout<<" ";
//         }
//     }
//     cout<<endl;
    
// }
// for (int row=0; row<n; row++){
//     for( int col=0; col<row; col++){
//         cout<<" ";
//     }
//     for(int col= 0; col<2*n-2*row-1; col++){
//         if( col== 0 || col==2*n-2*row-2 ){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }cout<<endl;
// }
for ( int row=0 ; row<n; row=row+1){
    // spaces
    for (int col=0; col<n-row-1; col=col+1){
        cout<<" ";
    }
// numbers
// for(int row=0 ; row<n; row=row+1){
    // int start=row+1;
    for (int col=0 ; col<row+1; col=col+1){
        cout<<row+ col+1;
        // start= start+1;
    }
    // reverse counting
    int start = 2*row;
    for(int col=0; col<row; col++){
        cout<<start;
        start= start-1;
    }
    cout<<endl;
}
}