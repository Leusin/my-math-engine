///
/// 2�� 2�� ��� ����ü�Դϴ�.
///

#pragma once

#include "Vector2.h"

namespace MathEngine
{
	struct Matrix2X2
	{
		/// ���� 
		// 1��
		float m11;
		float m12;

		// 2��
		float m21;
		float m22;

		// ������
		Matrix2X2();
		Matrix2X2(const Matrix2X2& other);
		Matrix2X2(const Vector2& col1, const Vector2& col2);
		Matrix2X2(float m11, float m12, float m21, float m22);

		void Set(const Matrix2X2& other);
		void Set(const Vector2& col1, const Vector2& col2);
		void Set(float m11, float m12, float m21, float m22);

		// ���� ������
		Matrix2X2& operator=(const Matrix2X2& rhs);

		// ����
		Matrix2X2 operator+(const Matrix2X2& rhs) const;
		void operator+=(const Matrix2X2& rhs);
		//����
		Matrix2X2 operator-(const Matrix2X2& rhs) const;
		void operator-=(const Matrix2X2& rhs);

		// ��Į�� ����
		Matrix2X2 operator*(const float scalar) const;
		void operator*=(const float scalar);
		// ���Ϳ� ����
		Vector2 operator*(const Vector2& rhs) const;
		// ��� ����
		Matrix2X2 operator*(const Matrix2X2& rhs) const;
		void operator*=(const Matrix2X2& rhs);

		// ������ķ� ����� �Լ�
		void SetIdentity();

		/// �����
		// �ٸ� ����� ����ķ�
		void SetInverseOf(const Matrix2X2& other);
		// �ڽ� ��� ��ü�� ����� ��ȯ
		Matrix2X2 GetInverse() const;

		// ��Ľ�
		float GetDeterminant() const;

		/// ��ġ���
		// �ٸ� ����� ��ġ��ķ�
		void SetTransposeOf(const Matrix2X2& other);
		// �ڽ� ��� ��ü�� ��ġ��� ��ȯ
		Matrix2X2 GetTranspose() const;

		// ����İ� ��ġ ���
		void InvertAndTranspose();

		/// ��ȯ ���
		// ȸ�� ���
		void Rotation(float angle);
		// ũ�� ���
		void Scale(float scaleX, float scaleY);

		// ������� ���� ��� �Լ�
		void Show();
	};
}