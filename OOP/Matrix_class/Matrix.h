#ifndef MATRIX_H
#define MATRIX_H



#include<string>
#include<iostream>
#include<vector>
#include<cmath>


class Matrix{

    private:
        double *matrix_data{nullptr};
        int n_columns{0};
        int n_rows{0}; 


    public: 
        Matrix() = default;
        Matrix(int m, int n);
        Matrix(int m, int n, std::vector<double> elements);
        // Copy constructor
        Matrix(Matrix &m);


        // Destructor
        ~Matrix(){delete [] matrix_data;}



        int get_rows() const {return n_rows;};
        int get_columns() const {return n_columns;};
        int index(int m, int n)
        {
            if(m>0 && m<=n_rows && n>0 && n<=n_columns) return (n-1) + (m-1)*n_columns;
            else{std::cout << "Error: one of the indexes is out of range..." << std::endl; return 0;}
        };


        // Copy assignment
        Matrix& operator=(Matrix &);


        // Overload operator ()
        double & operator()(int m, int n){return matrix_data[index(m,n)];}

  






};


#endif 