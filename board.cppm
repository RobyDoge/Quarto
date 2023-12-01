export module board;
export import piece;
import <optional>;
import <array>;
import <iostream>;

namespace quarto
{
	export class Board
	{
	public:
		static constexpr size_t WIDTH{ 4 };
		static constexpr size_t HEIGHT{ 4 };
		using Position = std::pair<size_t, size_t>;
	public:
		Board() = default;

		const std::optional<Piece>& operator[](const Position& position) const;
		std::optional<Piece>& operator[](const Position& position);

	private:
		static constexpr size_t SIZE{ WIDTH * HEIGHT };

		std::array<std::optional<Piece>, SIZE> m_pieces;
	};

	export std::ostream& operator<<(std::ostream& output, const Board& board);
}