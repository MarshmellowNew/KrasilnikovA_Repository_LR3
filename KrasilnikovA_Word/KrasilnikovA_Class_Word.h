#pragma once

/*
	@mainpage ������ LR3 ��� ������������ Doxygen
	������������ � ������������ ������ ����� 
	�� ����� �������������� ������������ �����������
	@file       KrasilnikovA_Class_Word.h
	@brief      ������������ ���� ������ �����
	@copyright  ����
	@author     ������������ �.�.
	@date       01-12-2023
	@version    1.0.0
\par ����������� ������:
	@ref KrasilnikovA_Class_World
\par �������� �����:
	@ref KrasilnikovA_Class_World
*/
class KrasilnikovA_Class_Word
{
protected:
	auto slovo;     ///< �����
	auto num;       ///< ����� �������
	auto chislo;    ///< ����� �������
public:
	/// ����������� �� ���������
	/** ������� ����� ��� ������������� �����
	*/
	KrasilnikovA_Class_Word(void);

	/// ����������� � ����������� ����� ������
	/** ������� ����� � �������������� �� ����
	\param slovo ������� ����� 
	\param num ����� ��������
	\param chislo ����� �������
	*/
	KrasilnikovA_Class_Word(auto name, auto num, auto chislo);

	/// ���������� ����������� �������
	~KrasilnikovA_Class_Word(void);

	/// ���������� ������ ���������� � �����
	/** ���� �������� ���, �� ���������� ��������� �� ������
	\return ������ � ������� � ����� � ������� (�����, ������������, ����� �������)
	*/
	char* getFullInfo();

	/** \brief �������� ����� �������
	
	����� ���������� ��������� ������ ������ � ������ �������
	@param newChislo ����� ����� �������*/
	void changeChislo(char* newChislo);
};

