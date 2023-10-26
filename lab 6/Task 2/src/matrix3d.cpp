#include "matrix3d.h"
#include <iostream>
using namespace std;
matrix3d::matrix3d()
{
    //ctor
}

matrix3d::~matrix3d()
{
    //dtor
}

matrix3d::matrix3d(const double input_matrix[3][3][3]) {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                for (int k = 0; k < 3; ++k) {
                    matrix[i][j][k] = input_matrix[i][j][k];
                }
            }
        }
    }

    matrix3d matrix3d::operator+(const matrix3d& other) const {
        double result_matrix[3][3][3];
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                for (int k = 0; k < 3; ++k) {
                    result_matrix[i][j][k] = matrix[i][j][k] + other.matrix[i][j][k];
                }
            }
        }
        return matrix3d(result_matrix);
    }


    matrix3d matrix3d:: operator-(const matrix3d& other) const {
        double result_matrix[3][3][3];
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                for (int k = 0; k < 3; ++k) {
                    result_matrix[i][j][k] = matrix[i][j][k] - other.matrix[i][j][k];
                }
            }
        }
        return matrix3d(result_matrix);
    }





     void matrix3d::print_matrix()
     {

          for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                for (int k = 0; k < 3; ++k) {
                    cout<<matrix[i][j][k]<<" ";
                }
                cout<<"\n";
            }
            cout<<"\n";
        }

     }
