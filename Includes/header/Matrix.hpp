#pragma once

#include <array>
#include <exception>

class Matrix
{
public:
	Matrix(unsigned cols = 0, unsigned rows = 0);

	int At(const unsigned& cols, const unsigned& rows) const;
	int& At(const unsigned& cols, const unsigned& rows);

	void Fill(unsigned cols, unsigned rows);
	int GetNumRows() const;
	int GetNumColumns() const;

	void Reset(unsigned cols = 0, unsigned rows = 0);
	void Remove();

	~Matrix()
	{
		Remove();
	}

private:
	int** arr;

	int num_cols;
	int num_rows;
};
