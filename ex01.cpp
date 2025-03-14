#include <iostream>
using namespace std;
int main() {
    int n,a=0,b=0,s,e;
    cout << "Матрицаның өлшемін енгізіңіз (n x n): ";
    cin >> n;
    int matrix[n][n];
        cout << "Матрицаны енгізіңіз:\n";
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "Негізгі диагональ:\n";
    for (int i = 1; i < n; i++) {
        cout << matrix[i][i] << " ";
    }
	  cout << endl;
    cout << "Қосалқы диагональ:\n";
    for (int i = 1; i < n; i++) {
        cout << matrix[i][n-i-1] << " ";
    }
 for (int i = 1; i < n; i++) {
cout<<(matrix[i][i]+a)/n==s;
            }
  for (int i = 1; i < n; i++) {
cout<<(matrix[i][n-i-1]+b)/n=n;

           }

cout<<s<<n;
    cout << endl;
    return 0;
}
