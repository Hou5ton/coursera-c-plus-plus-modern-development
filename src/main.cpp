#include <iostream>
#include <stdexcept>
#include <vector>

class Matrix
{
public:
	Matrix();
	Matrix(int rows, int cols);

	void Reset(int& rows, int& cols);

	int At(const int& rows, const int& cols) const;
	int& At(const int& rows, const int& cols);

	int GetNumRows() const;
	int GetNumColumns() const;

	friend std::istream& operator>> (std::istream& in, Matrix& array);
	friend std::ostream& operator<< (std::ostream& out, const Matrix& array);
    friend bool operator== (const Matrix& one, const Matrix& two);
    friend Matrix operator+(const Matrix& one, const Matrix& two);

private:
	std::vector<std::vector<int >> arr;

	int num_cols;
	int num_rows;
};


Matrix::Matrix()
{
    num_cols = 0;
    num_rows = 0;
}

Matrix::Matrix(int rows, int cols)
{
    Reset(rows, cols);
}

void Matrix::Reset(int& rows, int& cols)
{
    if (cols < 0 || rows < 0)
    {
        throw std::out_of_range("blaha");
    }
    else if (cols == 0 || rows == 0)
    {
        throw std::out_of_range("blaha");
    }

    arr.clear();
    num_rows = rows;
    num_cols = cols;

    std::vector<std::vector<int> > temp_matrix(rows, std::vector<int>(cols, 0));
    arr = temp_matrix;
}

int Matrix::At(const int& row, const int& col) const
{
    return arr.at(row).at(col);
}

int& Matrix::At(const int& row, const int& col)
{
    return arr.at(row).at(col);
}


int Matrix::GetNumRows() const
{
    return num_rows;
}

int Matrix::GetNumColumns() const
{
    return num_cols;
}

std::istream& operator>> (std::istream& in, Matrix& array)
{
    int cols, rows;
    in >> rows >> cols;
    array.Reset(rows, cols);

    for (int row = 0; row < rows; ++row)
    {
        for (int column = 0; column < cols; ++column)
        {
            in >> array.At(row, column);
        }
    }
    return in;
}

std::ostream& operator<< (std::ostream& out, Matrix& array)
{
    int rows = array.GetNumRows();
    int cols = array.GetNumColumns();

    out << rows << ' ' << cols << '\n';

    for (int row = 0; row < rows; ++row)
    {
        for (int column = 0; column < cols; ++column)
        {
            out << array.At(row, column);
        }
        out << std::endl;
    }
    return out;
}

bool operator== (const Matrix& one, const Matrix& two)
{
    if (one.GetNumRows() == two.GetNumRows() || one.GetNumColumns() == two.GetNumColumns())
    {
        for (int row = 0; row < one.GetNumRows(); ++row)
        {
            for (int column = 0; column < one.GetNumColumns(); ++column)
            {
                if (one.At(row, column) != two.At(row, column))
                {
                    return false;
                }
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}

Matrix operator+(const Matrix& one, const Matrix& two)
{
    if (one == two)
    {
        Matrix temp;
        int rows = one.GetNumRows();
        int cols = one.GetNumColumns();
        temp.Reset(rows, cols);

        for (int row = 0; row < rows; ++row)
        {
            for (int column = 0; column < cols; ++column)
            {
                temp.At(one.At(row,column) + two.At(row, column), one.At(row, column) + one.At(row, column))
            }
        }

    }
    else
    {
        throw std::invalid_argument("invalid_argument\n");
    }
}


int main()
{
    Matrix one;
    Matrix two;

    std::cin >> one >> two;
    bool res = one == two;
    std::cout << res;


    return 0;
}
