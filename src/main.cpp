#include <iostream>

int main()
{
	try
	{

	}
	catch (std::out_of_range const& exc)
	{
		std::cout << exc.what();
	}

    return 0;
}
