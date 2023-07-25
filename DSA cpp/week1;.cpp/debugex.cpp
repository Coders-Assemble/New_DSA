// int main() {
//     int i=0;
//     // i=i+1;
//     /*print i *///i=i+1
//     cout<<++i;
//     cout<<i;
// }

# include<iostream>

using namespace std;

// 2}<<<<<<<<<<

    // int main(){
// 	short i=2300, j=4322;
// 	cout<<"i+j=";
//     cout<<(i+j);

// 3}<<<<<<<<<

// int main() {
// 	float l=89, b=3;
//     int P;
// 	P = 2*(l+b);
// 	cout<<("Perimeter=%f", P);
// }

// 4}}}<<<
// int main(){
//     int n;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n; ++j) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

// 5}<<<<<<<<<<<
// int main(){
// 	int n;
// 	cin >> n;
// 	bool isPrime = true;
//   for(int i=2;i<n;i++){
//       if(n%i == 0){
//           isPrime = false; break;
//       }
//   }
// 	if(isPrime){
// 		cout<<"Prime"<<endl;	
// 	}
// 	else{
// 		cout<<"Not Prime"<<endl;	
// 	}
//   return 0;

// 6}<<<<<<<<<<<<<
// int main() {
//   int n;
//   std::cin>>n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n - i ; j++) {
//       printf("  ");
//     }
//     for (int j = i; j <2 * i; j++) {
//       printf("%d ", j);
//     }
//     int ele = 2 * (n - i - 1);
//     for (int j = 1; j <= i - 1; j++) {
//       printf("%d ", ele--);
//     }
//     printf("\n");
//   }
//   return 0;
// }
// 7}<<<<<<<<<<<<

int main(){
    int n;
    cin>>n;
    for (int i=0; i<n; ++i) {
        int k= 0;
        for (int j=0; j<n*2-1; ++j) {
		        // int k=0;
            if(j<n-i-1){
                cout<<" ";
            }
            else if(k < 2*i+1){
                if(k==0 || k == 2*i - 1 || i == n - 1){
                    cout<<" ";
                }
                else{
                    cout<<" ";
                }
            }
            else{
                cout<<" ";
            } k++;
        }
        cout<<endl;
    }
}

