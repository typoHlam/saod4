// saod_4.cpp: Исседование поиска.
//

#include "stdafx.h"		//vs2017
#include "iostream"

using namespace std;

const int KolAlg = 1;					//число исследуемых алгоритмов
const int KolRazm = 1;					//число исследуемых размеров таблиц
const int MaxTbl = 10;					//максимальный размер массива для таблицы (должен быть кратным KolRazm)
const int Step = MaxTbl / KolRazm;		//шаг изменения размера исследуемой таблицы
const int Beg = Step;					//начальный размер таблицы
const int MaxExp = 1;					//число экспериментов

struct TUspBez
{
	double Usp, Bez;
};

TUspBez Rez1[KolAlg][KolRazm] = {0};

int main()
{
	/*for (int i = 0; i < KolAlg; i++)
	{
		for (int j = 0; j < KolRazm; j++)
		{
			Rez1[i][j].Bez = 0;
			Rez1[i][j].Usp = 0;
		}*/

		int n = Beg, Razm = 1; /*int*root = nullptr, *AVL = nullptr;*/
		int Tbl[Beg] = { 0 };
		while (n <= MaxTbl)
		{
			for (int i = 0; i < n; i++)
			{
				Tbl[i] = 2 * i;
				cout << Tbl[i]<<endl;
			}
		}
	//}
    return 0;
}

//Именованные константы
//KolRazm – число исследуемых размеров таблиц
//MaxTbl – максимальный размер массива для таблицы(должен быть кратным KolRazm)
//Step = MaxTbl div KolRazm – шаг изменения размера исследуемой таблицы
//Beg = Step – начальный размер таблицы
//MaxExp = 1000 – число экспериментов
//KolAlg – число исследуемых алгоритмов

//Примечания
//Алгоритмы поиска реализованы как функции, возвращающие результат типа
//TRezPoisk = record Poz, Cnt : integer; Pntr: TMyTree; end;
//В процедурах DelNodeAVL(AVL, RezPoisk.Pntr, KRot), AddNodeAVL(AVL, z, KRot) выходной параметр KRot – число вращений.
//Элемент таблицы результатов исследования(массив Rez1) имеет тип
//TUspBez = record Usp, Bez : real; end;
//В элементе таблицы результатов исследования(массив Rez1) для динамических таб - лиц в поле Usp сохраняется среднее число вращений, в поле Bez – максимальное число вращений.
//random(n) + 1, добавляется единица, поскольку нулевого ключа нет(генерируемый диапазон 0..n).
