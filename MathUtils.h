///
/// �ʿ��� ���� ���� �Լ����� �ζ��� �Լ��� ����(wrapping) �Ǿ� �ֽ��ϴ�.
/// 

#pragma once

#include <cmath>
#include "Constants.h"

namespace MathEngine
{
	// �� ������ �ڸ��� �ٲٴ� �Լ�
	inline void Swap(float& lhs, float& rhs)
	{
		const float temp = lhs;
		lhs = rhs;
		rhs = temp;
	}
	
	/// <summary>
	/// �ε� �Ҽ����� ���ϴ� �� ���: 
	/// ��ǻ���� �ε� �Ҽ����� ������ ���� �񱳰� ��Ʊ� ������
	/// �� �Ǽ� ���� ���� �������� �Ǵ��ϴ� �� ����մϴ�.
	/// </summary>
	/// <param name="lhs">���� flaot �� 1</param>
	/// <param name="rhs">���� float �� 2</param>
	/// <param name="epsilon">���� ��� ����</param>
	inline bool fuzzyRealEqual(const float& lhs, const float& rhs, const float& epsilon = Constant::FLOAT_TOLERANCE)
	{
		return std::fabs(lhs - rhs) < epsilon;
	}

	/// <summary>
	/// �ε� �Ҽ����� ��
	/// </summary>
	/// <param name="lhs">���� flaot �� 1</param>
	/// <param name="rhs">���� float �� 2</param>
	inline bool isEqual(const float& lhs, const float& rhs)
	{
		return fuzzyRealEqual(lhs, rhs);
	}

	/// ȣ����
	// ��(��)���� ����(rad)����
	inline float DEGREE_TO_RADIAN(const float angle)
	{
		return angle * Constant::PI / 180.f;
	}
	// ����(rad)���� ��(��)��
	inline float RADIAN_TO_DEGREE(const float angle)
	{
		return angle * 180.f / Constant::PI;
	}
}