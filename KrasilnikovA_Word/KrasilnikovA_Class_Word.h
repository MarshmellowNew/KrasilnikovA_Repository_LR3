#pragma once

/*
	@mainpage Проект LR3 для тестирования Doxygen
	Используется в лабораторной работе номер 
	по курсу Проектирование программного обеспечения
	@file       KrasilnikovA_Class_Word.h
	@brief      Заголовочный файл класса Ворда
	@copyright  ВоГУ
	@author     Красильников А.Г.
	@date       01-12-2023
	@version    1.0.0
\par Используект классы:
	@ref KrasilnikovA_Class_World
\par Содержит класс:
	@ref KrasilnikovA_Class_World
*/
class KrasilnikovA_Class_Word
{
protected:
	auto slovo;     ///< слово
	auto num;       ///< номер страниц
	auto chislo;    ///< число страниц
public:
	/// Конструктор по умолчанию
	/** Создает слово без инициализации полей
	*/
	KrasilnikovA_Class_Word(void);

	/// Конструктор с заполнением полей класса
	/** Создает слово и инициализирует ее поля
	\param slovo искомое слово 
	\param num номер страницы
	\param chislo число страниц
	*/
	KrasilnikovA_Class_Word(auto name, auto num, auto chislo);

	/// Деструктор освобождает ресурсы
	~KrasilnikovA_Class_Word(void);

	/// Возвращает полную информацию о слове
	/** Если сведений нет, то возвращает сообщение об ошибке
	\return строку с данными о слове в формате (слово, номерстраниц, число страниц)
	*/
	char* getFullInfo();

	/** \brief Изменяет число страниц
	
	Перед изменением проверяет формат строки с числом страниц
	@param newChislo новое число страниц*/
	void changeChislo(char* newChislo);
};

