module board;

using namespace quarto;

std::string_view EMPTY_SPACE{ "____" };

const std::optional<Piece>& Board::operator[](const Board::Position& position) const
{
	/*size_t line = position.first;
	size_t column = position.second;
	*/
	const auto& [line, column] = position;
	return m_pieces[line * HEIGHT + column];
}

std::optional<Piece>& Board::operator[](const Board::Position& position)
{
	const auto& piece = std::as_const(*this)[position];
	return const_cast<std::optional<Piece>&>(piece);
}

std::ostream& quarto::operator<<(std::ostream& output, const Board& board)
{
	Board::Position position;
	auto& [line, column] = position;
	for (;line < Board::HEIGHT; line++)
	{
		for (column = 0; column < Board::WIDTH; column++)
		{
			
			if (const auto& pieceOpt{ board[position] }; pieceOpt.has_value())
			{
				output << pieceOpt.value();
			}
			else
			{
				output << EMPTY_SPACE;
			}
			output << " ";
			
		}
		output << std::endl;
	}
	return output;
}