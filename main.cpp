import piece;
import board;
import <iostream>;

int main()
{
	using namespace quarto;
	using enum Piece::Color;
	Piece piece{ Piece::Body::Full,Dark,Piece::Height::Short,Piece::Shape::Round };
	std::cout << piece<<std::endl;
	Board board;
	board[{0,1}] = std::move(piece);
	std::cout << board;
	std::cout << piece;

	return 0;
}