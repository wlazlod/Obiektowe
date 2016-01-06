template <typename T, std::size_t N>
class Tablica
{
public:

	T &operator[](std::size_t i)
	{
		return tabl[i];
	}

private:
	T tabl[N];
};
