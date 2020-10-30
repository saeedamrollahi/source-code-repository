struct pair {
	explicit pair(int x, int y) : x_{x}, y_{y} {} // what is the meaning of 'explicit' for non-single argument ctor
	explicit pair(int x) :x_{x}, y_{0} {}
	int x_, y_;
};

int main()
{
	pair p{0, 1};
	pair p2{1};

	return 0;
}
