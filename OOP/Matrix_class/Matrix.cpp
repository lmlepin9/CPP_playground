#include "Matrix.h"



Matrix::Matrix(int m, int n)
{
    n_rows = m;
    n_columns =n;
    matrix_data = new double[m*n];

    for(int i = 0; i < m*n; i++){
        matrix_data[i] = 0; 
    }
}



Matrix::Matrix(int m, int n, std::vector<double> elements)
{

    if(elements.size() != m*n){
        std::cout << "The lenght of the array does not match the size of the matrix ..." << std::endl;
        std::cout << "This matrix won't be created" << std::endl;
    }

    else{
        n_rows = m;
        n_columns =n;

        matrix_data = new double[m*n];

        for(int i = 0; i < m*n; i++){
            matrix_data[i] = elements[i]; 
        }
    }
}

// Copy constructor 
Matrix::Matrix(Matrix &m){

    matrix_data=nullptr;
    n_columns=m.get_columns();
    n_rows=m.get_rows();

    if(n_columns >0 && n_rows>0){
        matrix_data=new double[n_columns*n_rows];
        for(size_t i{}; i < n_columns*n_rows; i++){
            matrix_data[i] = m.matrix_data[i];
        }

    }

}



// Assignment operator for deep copying
Matrix & Matrix::operator=(Matrix &m)
{
  if(&m == this) return *this; // no self assignment

  // First delete this object's array
  delete[] matrix_data; matrix_data=nullptr; n_columns=0; n_rows=0;
  // Now copy size and declare new array
  n_columns=m.get_columns();
  n_rows=m.get_rows();


  if(n_columns > 0 && n_rows > 0)
    {
      matrix_data=new double[n_rows*n_columns];
      // Copy values into new array
      for(size_t i{};i<n_rows*n_columns;i++) matrix_data[i] = m.matrix_data[i];
    }
  return *this; // Special pointer!!!
}

