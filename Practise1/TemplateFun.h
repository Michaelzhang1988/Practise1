template<typename T>
inline T const& max(T const a, T const b)
{
	return a < b?b:a;
}


template<typename T1, typename T2, typename RT>
inline RT max1(T1 const& a, T2 const& b)
{
	return a < b?b:a;
}




template<typename RT, typename T1, typename T2>
inline RT max2(T1 const& a, T2 const& b)
{
	return a < b?b:a;
}




inline int const& max3(int const& a, int const& b)
{
	return a < b ? b : a;
}

template<typename T>
inline T const& max3(T const& a, T const& b)
{
	return a < b ? b : a;
}

template<typename T>
inline T const& max3(T const& a, T const& b, T const& c)
{
	return ::max(::max(a, b), c);
}