#include <iostream>
using namespace std;

class Matrix{
  private:
    int **mat;
    int row,col;
  public:
    Matrix(int vRow,int vCol):row(vRow),col(vCol){
       mat = new int*[row];
       for(int i=0;i<row;i++)
        mat[i]=new int[col];

      for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
          mat[i][j]=0;
    }
  void input(){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          cin>>mat[i][j];
  }
    void output(){
      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          cout<<" "<<mat[i][j];
        }
        cout<<endl;
      }
    }


}
int main() {
  Matrix mat(2,2);
  mat.input();
  mat.output();
};


