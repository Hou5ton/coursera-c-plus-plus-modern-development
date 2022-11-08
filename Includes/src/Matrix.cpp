#include "Matrix.hpp"

Matrix::Matrix(unsigned cols = 0, unsigned rows = 0) : 
    num_cols(cols),
    num_rows(rows)
{
    Fill(cols, rows);
}

void Matrix::At(const unsigned& cols, const unsigned& rows)
{

}

void Matrix::Fill(unsigned cols = 0, unsigned rows = 0)
{
    unsigned** arr = new unsigned* [rows];
    for (int count = 0; count < cols; count++)
    {
        arr[count] = new unsigned[cols];
    }
}

void Matrix::Remove()
{
    for (int count = 0; count < 2; count++)
    {
        delete[] arr[count];
    }
    delete [] arr;
}

void Matrix::Reset(unsigned cols = 0, unsigned rows = 0)
{
    Remove();
    Fill(cols, rows);
}


