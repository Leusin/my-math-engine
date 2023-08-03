#include "Vector2.h"
#include "MathUtils.h"
#include <iostream>

namespace MathEngine
{
	Vector2::Vector2(float x, float y)
		: x(x), y(y)
	{

	}

	Vector2::Vector2(const Vector2& copy)
		: x(copy.x), y(copy.y)
	{

	}

	void Vector2::set(float x, float y)
	{
		this->x = x;
		this->y = y;
	}

	Vector2& Vector2::operator=(const Vector2& rhs)
	{
		// ��ġ�� �˻�
		if (this == &rhs)
		{
			return *this;
		}

		x = rhs.x;
		y = rhs.y;

		return *this;
	}

	bool Vector2::operator==(const Vector2& rhs) const
	{
		return (x == rhs.x && y == rhs.y);
	}

	bool Vector2::operator!=(const Vector2& rhs) const
	{
		return (x != rhs.x || y != rhs.y);
	}

	Vector2 Vector2::operator+(const Vector2& rhs) const
	{
		return Vector2(x + rhs.x, y + rhs.y);
	}

	void Vector2::operator+=(const Vector2& rhs)
	{
		x += rhs.x;
		y += rhs.y;
	}

	Vector2 Vector2::operator-(const Vector2& rhs) const
	{
		return Vector2(x - rhs.x, y - rhs.y);
	}

	void Vector2::operator-=(const Vector2& rhs)
	{
		x -= rhs.x;
		y -= rhs.y;
	}

	Vector2 Vector2::operator*(const float scalar) const
	{
		return Vector2(scalar * x, scalar * y);
	}

	void Vector2::operator*=(const float scalar)
	{
		x *= scalar;
		y *= scalar;
	}

	Vector2 Vector2::operator/(const float scalar) const
	{
		if (scalar != 0.0f)
		{
			return Vector2(x / scalar, y / scalar);
		}
		else
		{
			return Vector2(0.0f, 0.0f);
		}
	}

	void Vector2::operator/=(const float scalar)
	{
		x /= scalar;
		y /= scalar;
	}

	float Vector2::operator*(const Vector2& rhs) const
	{
		return x * rhs.x + y * rhs.y;
	}

	float Vector2::Dot(const Vector2& other) const
	{
		return x * other.x + y * other.y;
	}

	float Vector2::Cross(const Vector2& other) const
	{
		return x * other.y - other.x * y;
	}

	float Vector2::Angle(const Vector2& other) const
	{
		float theta;

		Vector2 u = other;
		Vector2 m = *this;

		float dotProduct = Dot(u);
		float magnitudeProduct = m.Magnitude() * u.Magnitude();

		// dotProduct�� magnitudeProduct�� ���� �ǹ� �ִ� ������ ���� ���� acos�� �����մϴ�.
		if (magnitudeProduct > 0.0f)
		{
			float cosTheta = dotProduct / magnitudeProduct;
			cosTheta = std::max(-1.0f, std::min(cosTheta, 1.0f)); // ���� ��Ȯ�� ���� ���� �ִ��� Ȯ��

			theta = MathEngine::DEGREE_TO_RADIAN(acos(cosTheta));
		}
		else
		{
			theta = 0.0f;
		}

		return theta;
	}

	Vector2 Vector2::Rotaie(const float& radian) const
	{
		return Vector2(x * cos(radian), y * -sin(radian));
	}

	float Vector2::Distance(const Vector2& other) const
	{
		float distanceOfX = x - other.x;
		float distanceOfY = y - other.y;

		return sqrt(distanceOfX * distanceOfX + distanceOfY * distanceOfY);
	}

	Vector2 Vector2::Normalize() const
	{
		float magnitude = Magnitude();

		if (magnitude > 0.0f)
		{
			float oneOverMagnitude = 1.0f / magnitude;

			return Vector2(x * oneOverMagnitude, y * oneOverMagnitude);
		}

		return *this;
	}

	float Vector2::Magnitude() const
	{
		return sqrt(x * x + y * y);
	}

	void Vector2::Absolute()
	{
		x = std::abs(x);
		y = std::abs(y);
	}

	void Vector2::Zero()
	{
		x = 0;
		y = 0;
	}

	void Vector2::Show() const
	{
		std::cout << "(" << x << ", " << y << ")" << std::endl;
	}
}
