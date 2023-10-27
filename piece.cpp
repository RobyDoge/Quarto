module piece;
import <format>;

using quarto::Piece;

Piece::Piece(Body body, Color color, Height height, Shape shape) :
	m_body{ body },
	m_color{ color },
	m_height{ height },
	m_shape{ shape }
{
	static_assert(sizeof(*this) <= 1, "This object should have 1 byte in size");
}

Piece::Body Piece::GetBody() const
{
	return m_body;
}

Piece::Color Piece::GetColor() const
{
	return m_color;
}

Piece::Height Piece::GetHeight() const
{
	return m_height;
}

Piece::Shape Piece::GetShape() const
{
	return m_shape;
}

std::ostream& quarto::operator<<(std::ostream& os, const Piece& piece)
{
	return os << std::format("{}{}{}{}",
			static_cast<int>(piece.GetBody()),
			static_cast<int>(piece.GetColor()),
			static_cast<int>(piece.GetHeight()),
			static_cast<int>(piece.GetShape())
		);
}