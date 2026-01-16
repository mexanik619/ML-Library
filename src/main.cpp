#include <iostream>
#include <Eigen/Dense>
using namespace Eigen;
using namespace std;

int main(){
    MatrixXd b(2,2);
    b << 1,2,3,4;

    int h = b.determinant();
    cout << h << endl;
}