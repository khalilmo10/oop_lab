#include <iostream>
#include "matrix3d.h"
using namespace std;

int main()
{
    double matrix1[3][3][3] = {
        {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}},
        {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}},
        {{1, 1, 1}, {1, 1,1}, {1, 1, 1}}
    };

    double matrix2[3][3][3] = {
        {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}},
        {{1, 1, 1}, {1, 1,1}, {1, 1, 1}},
        {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}}
    };

    matrix3d mat1(matrix1);
    matrix3d mat2(matrix2);

    matrix3d mat3 = mat1 + mat2;
    mat3.print_matrix();
    mat3 = mat1 - mat2;
    mat3.print_matrix();
    return 0;
}
