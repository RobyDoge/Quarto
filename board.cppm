module;
export module board;
import piece;
import <optional>;
import <array>;

namespace quarto
{
	export class Board
	{
	public:


		
	private:
		std::array<std::optional<Piece>, 16> m_pieces;

	};
}