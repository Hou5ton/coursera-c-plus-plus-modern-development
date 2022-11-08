#include "Matrix.hpp"

Matrix::Matrix(unsigned cols = 0, unsigned rows = 0) : 
    num_cols(cols),
    num_rows(rows)
{
    if (cols < 0 || rows < 0)
    {
    }

    Fill(cols, rows);
}

int Matrix::At(const unsigned& cols, const unsigned& rows) const
{
    return arr[cols][rows];
}

int& Matrix::At(const unsigned& cols, const unsigned& rows)
{
    return arr[cols][rows];
}

void Matrix::Fill(unsigned cols = 0, unsigned rows = 0)
{
    unsigned** arr = new unsigned* [rows];
    for (int count = 0; count < cols; count++)
    {
        arr[count] = new unsigned[cols];
    }
}

int Matrix::GetNumRows() const
{
    return num_rows;
}

int Matrix::GetNumColumns() const
{
    return num_cols;
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


