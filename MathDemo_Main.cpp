#include <iostream>
#include "Vector2.h"
#include "Matrix2X2.h"

using namespace MathEngine;

int main()
{
	Vector2 V(0.f, 0.f);
	Vector2 W(0.f, 0.f);
	Vector2 R(0.f, 0.f);
	bool r;

	std::cout << "# ���� ���� �ÿ�" << std::endl << std::endl;

	V.x = 1.f;
	V.y = 2.f;
	W.x = 3.f;
	W.y = 4.f;

	std::cout << "## ����" << std::endl << std::endl;

	std::cout << "### ���� ����" << std::endl;
	std::cout << "V = "; V.Show();
	std::cout << "W = "; W.Show();
	std::cout << std::endl;

	std::cout << "### ���� ���� + - * /" << std::endl;
	R = V + W;
	std::cout << "R = V + W : "; R.Show();
	R = V - W;
	std::cout << "R = V - W : "; R.Show();
	R = V * 2.f;
	std::cout << "R = V * 2 : "; R.Show();
	R = V / 2.f;
	std::cout << "R = V / 2 : "; R.Show();
	std::cout << std::endl;

	std::cout << "### ���� ���� += -= " << std::endl;
	R = V;
	std::cout << "R = V : "; R.Show();
	R = W;
	std::cout << "R = W : "; R.Show();
	std::cout << std::endl;

	std::cout << "### ���� ���� ���� += -= *= /=" << std::endl;
	std::cout << "R = "; R.Show();

	R += V;
	std::cout << "R += V : "; R.Show();
	R -= W;
	std::cout << "R -= W : "; R.Show();
	R *= 2.f;
	std::cout << "R *= 2 : "; R.Show();
	R /= 2.f;
	std::cout << "R /= 2 : "; R.Show();
	std::cout << std::endl;

	std::cout << "### �� ���� == != " << std::endl;
	r = (R == W);
	std::cout << "R == W : " << r << std::endl;
	r = (R != W);
	std::cout << "R != W : " << r << std::endl;
	std::cout << std::endl;

	std::cout << "### ���� ���� * Dot " << std::endl;
	std::cout << "V * W = " << V * W << std::endl;
	std::cout << "V dot W = " << V.Dot(W) << std::endl;
	std::cout << std::endl;

	std::cout << "### ���� ���� Cross " << std::endl;
	std::cout << "V cross W = " << V.Cross(W) << std::endl;
	std::cout << std::endl;

	std::cout << "### ������ ũ�� Magnitude " << std::endl;
	std::cout << "V Magnitude = " << V.Magnitude() << std::endl;
	std::cout << std::endl;

	std::cout << "### ������ ����ȭ Normalize" << std::endl;
	std::cout << "R = "; R.Show();
	R.Normalize();
	std::cout << "R Normalize = "; R.Show();
	std::cout << std::endl;

	std::cout << "### �� ������ �Ÿ� Distance " << std::endl;
	std::cout << "V Magnitude W = " << V.Distance(W) << std::endl;
	std::cout << std::endl;

	std::cout << "### �� ���� ���� �� ���ϱ� Angle " << std::endl;
	std::cout << "V Angle W = " << V.Angle(W) << std::endl;
	std::cout << std::endl;

	/// ------------------------------------------------------------
	std::cout << "## ���" << std::endl << std::endl;
	
	Matrix2X2 M;
	Matrix2X2 N;
	Matrix2X2 S;

	N.m11 = 1.f;
	N.m12 = 2.f;
	N.m21 = 3.f;
	N.m22 = 4.f;

	std::cout << "M" << std::endl; M.Show();
	std::cout << "N" << std::endl; N.Show();

	std::cout << "### ��� ���� " << std::endl;
	S = M + N;
	std::cout << "S = M + N" << std::endl; S.Show();
	std::cout << std::endl;

	std::cout << "### ��� ���� " << std::endl;
	S = M - N;
	std::cout << "S = M - N" << std::endl; S.Show();
	std::cout << std::endl;

	std::cout << "### ���-��Į�� �� " << std::endl;
	S = M * 2.f;
	std::cout << "S = M * 2" << std::endl; S.Show();
	std::cout << std::endl;

	std::cout << "### ���-���� �� " << std::endl;
	R = M * V;
	std::cout << "R = M * V" << std::endl; R.Show();
	std::cout << std::endl;

	std::cout << "### ���-��� �� " << std::endl;
	S = M * N;
	std::cout << "S = M * N" << std::endl; S.Show();
	S *= N;
	std::cout << "S *= M" << std::endl; S.Show();
	std::cout << std::endl;

	std::cout << "### ���� ���" << std::endl;
	S.SetIdentity();
	std::cout << "S SetIdentityMatrix" << std::endl; S.Show();
	std::cout << std::endl;
	
	std::cout << "### �����" << std::endl;
	S.SetInverseOf(N);
	std::cout << "S SetIdentityMatrix of N" << std::endl; S.Show();
	std::cout << std::endl;

	std::cout << "### ��Ľ�" << std::endl;
	std::cout << "S GetDeterminant: " << S.GetDeterminant()<< std::endl;
	std::cout << std::endl;

	std::cout << "### ��ġ���" << std::endl;
	S.SetTransposeOf(N);
	std::cout << "S SetTransposeOf N: " << std::endl; S.Show();
	std::cout << std::endl;

	std::cout << "### ����İ� ��ġ���" << std::endl;
	std::cout << "S" << std::endl; S.Show();
	S.InvertAndTranspose();
	std::cout << "S InvertAndTranspose: " << std::endl; S.Show();
	std::cout << std::endl;

	std::cout << "### ȸ�� ���" << std::endl;
	S.m11 = 0.f;
	S.m12 = 1.f;
	S.m21 = 2.f;
	S.m22 = 3.f;
	std::cout << "S" << std::endl; S.Show();
	S.Rotation(90.f);
	std::cout << "S Rotation 90: " << std::endl; S.Show();
	std::cout << std::endl;
} 