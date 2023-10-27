import piece;
import <iostream>;


int main()
{
	using namespace quarto;
	using enum Piece::Color;
	Piece piece{ Piece::Body::Full,Dark,Piece::Height::Short,Piece::Shape::Round };
	std::cout << piece;

	return 0;
}