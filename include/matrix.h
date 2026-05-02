#pragma once         
#include <vector>    
#include <iostream>


class Matrix{
private:
    size_t row,col;
    std::vector<std::vector<double>> data;
    

public:
    // constrcutor init. data w/ writing code in body of func
    // data(rows * columns)
    Matrix(size_t rows, size_t columns): row(rows), col(columns){}


    //setter
    void set_matrix(){}

    //getter
    void get_rows(){}
    void get_columns(){}
    


    //operations
    /*

    add
    subtract
    multiply

    diagonalize
    etc

    */


};