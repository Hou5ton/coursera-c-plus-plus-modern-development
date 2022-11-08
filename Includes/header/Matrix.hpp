#pragma once

#include <array>

class Matrix
{
public:
	Matrix(unsigned cols = 0, unsigned rows = 0);

	void At(const unsigned& cols, const unsigned& rows) const;
	void Fill(unsigned cols, unsigned rows);
	void Reset(unsigned cols = 0, unsigned rows = 0);
	void Remove();

	~Matrix()
	{
		Remove();
	}

private:
	unsigned** arr;

	unsigned num_cols = 0;
	unsigned num_rows = 0;

};
