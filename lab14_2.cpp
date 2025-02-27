#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

//Do not modify source code above this line
void inputMatrix(double A[][N] ){
   
    for(int i = 0 ; i < N ; i++ ){
        cout << "Row " << i+1 << ": " ;
        for(int j = 0 ; j < N ; j++){
            cin >> A[i][j] ;
        }
    }
}
     
void showMatrix(const bool A[][N]){
    for(int i = 0 ; i < N ;i++){
        for(int j = 0 ; j < N ; j++){
          cout << A[i][j] ;
           cout << " " ;
        }
        cout << endl ;
    }
}
void findLocalMax(const double A[][N], bool B[][N]){
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            
            if( i <= N-2 and j <= N-2){
                if(A[i][j] < A[i-1][j] or A[i][j] < A[i][j-1] or A[i][j] < A[i][j+1] or A[i][j] < A[i+1][j]){
                    B[i][j] = 0 ;
                }else{
                    B[i][j] = 1 ;
                }
            }
                if(i == 0 or j == 0 or j == N-1)B[i][j] = 0 ;                   
        }
    }
    
}
