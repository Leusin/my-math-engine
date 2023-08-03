///
/// 2���� ���� ����ü �Դϴ�.
/// 

#pragma once

namespace MathEngine
{
	struct Vector2
	{
		// ����
		float x;
		float y;

		// ������
		Vector2(float x = 0.0f, float y = 0.0f);
		// ���� ������
		Vector2(const Vector2& copy);

		void set(float x, float y);

		// ����
		Vector2& operator=(const Vector2& rhs);

		// �� ����
		bool operator==(const Vector2& rhs) const;
		bool operator!=(const Vector2& rhs) const;

		// ����
		Vector2 operator+(const Vector2& rhs) const;
		void operator+=(const Vector2& rhs);

		// ����
		Vector2 operator-(const Vector2& rhs) const;
		void operator-=(const Vector2& rhs);

		// ��Į�� ����
		Vector2 operator*(const float scalar) const;
		void operator*=(const float scala);

		// ��Į�� ������
		Vector2 operator/(const float scala) const;
		void operator/=(const float scala);

		/// ����(����)
		// * �����ڸ� ���� ���� ���
		float operator*(const Vector2& rhs) const;
		// ��������� ��Ÿ�� ���� �Լ�
		float Dot(const Vector2& other) const;

		// ����
		float Cross(const Vector2& other) const;

		// �� ������ ���� ���� ���ϴ� �Լ�
		float Angle(const Vector2& other) const;

		Vector2 Rotaie(const float& raian) const;

		// �� ������ �Ÿ� ���
		float Distance(const Vector2& other) const;

		// ǥ��ȭ
		Vector2 Normalize() const;

		// ������ ũ��(����)
		float Magnitude() const;

		// x, y �� ���밪���� ����� �Լ�
		void Absolute();

		// x, y �� 0���� ����� �Լ�
		void Zero();

		// ������� ���� ��� �Լ�
		void Show() const;

	};
}