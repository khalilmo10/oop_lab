#ifndef MATRIX3D_H
#define MATRIX3D_H


class matrix3d
{
    public:
        matrix3d();
        ~matrix3d();
        matrix3d(const double input_matrix[3][3][3]);
        matrix3d operator+(const matrix3d& other) const;
        matrix3d operator-(const matrix3d& other) const;
        void print_matrix();

    protected:

    private:
        enum {size=3};
      double matrix[size][size][size];
};

#endif // MATRIX3D_H
