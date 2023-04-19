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

// Move constructor

Matrix::Matrix(Matrix &&m)
{ // steal the data
  std::cout <<"move constructor\n";
  n_columns=m.get_columns();
  n_rows=m.get_rows();
  matrix_data=m.matrix_data;
  m.n_columns=0;
  m.n_rows=0;
  m.matrix_data=nullptr;
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


// Move assignment operator
Matrix & Matrix::operator=(Matrix&& m)
{
  std::cout <<"move assignment\n";
  std::swap(n_columns,m.n_columns);
  std::swap(n_rows,m.n_rows);
  std::swap(matrix_data,m.matrix_data);
  return *this; // Special pointer!!!
}


void Matrix::print_matrix() const{
    std::cout << "["; 
    for(int i{1}; i <= n_rows; i++){
        std::cout <<"[";
        for(int j{1}; j <= n_columns; j++){
            std::cout << matrix_data[index(i,j)]; 
            if(j==n_columns){
                std::cout << "";
            }
            else{
                std::cout << " ";
            }
        }
        if(i == n_rows){
            std::cout <<"]";
        }
        else{
        std::cout <<"],";
        }
    }
    std::cout << "]" << std::endl;
}

Matrix operator+(Matrix &m1, Matrix &m2){
    Matrix temp_m(m1.get_rows(),m1.get_columns()); 
    if( (m1.get_columns() != m2.get_columns() ) || (m1.get_rows() != m2.get_rows())){
        std::cout << "Shape of matrices do not match" << std::endl;
        return temp_m;       
    }
    else{
        for(int i{1}; i <= m1.get_rows(); i++){
            for(int j{1}; j<= m1.get_columns(); j++){
                temp_m(i,j) = m1(i,j) + m2(i,j);
            }
        }
        return temp_m;
    }
}