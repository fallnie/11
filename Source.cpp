#include <iostream>
using namespace std;
int main() {
	/*8. Даны натуральные числа от 20 до 50.Напечатать те из них, которые делятся на 3, но не делятся на 5.*/
	/*
	for (int i = 20; i <= 50;i++) {
		if (i % 3 == 0 && i % 5 != 0) {
			cout << i << endl;
		}
		
	}*/
	/*9. даны натуральные числа от 35 до 87. Найти и напечатать те из них, которые при делении на 7 дают остаток 1, 2 или 5.*/
	/*for (int i = 35; i <= 87; i++) {
		if (i % 7==1||i%7==2||i%7==5) {
			cout << i << endl;
		}

	}*/
	/*10. Даны натуральные числа от 1 до 50. Найти сумму тех из них, которые делятся на 5 или на 7.*/
	/*int a = 0;
	for (int i = 1; i <= 50; i++) {
		if (i%5==0||i%7==0) {
			a = a + i;
		}

	}
	cout << a << endl;*/
	/*11. Напечатать те из двузначных чисел которые делятся на 4, но не делятся на 6.*/
	/*for (int i = 10; i <= 99; i++) {
		if (i % 4 == 0 && i % 6 != 0) {
			cout << i << endl;
		}
	}*/
	/*12. Найти произведение двузначных нечетных чисел кратных 13.*/
	/*int a = 1;
	for (int i = 10; i <= 99; i++) {
		if (i % 2 != 0 && i % 13 == 0) {
			a = a * i;
			
		}
	}
	cout << a << endl;*/
	/*13. Найти сумму чисел от 100 до 200 кратных 17.*/
	/*int a = 0;
	for (int i = 100; i <= 200; i++) {
		if (i % 17 == 0) {
			a = a + i;
		}
	}
	cout << a << endl;*/
	/*14. Составьте программу, которая вычисляет сумму квадратов чисел от 1 до введенного вами целого числа N.*/
	/*int n,a;
	a = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		a = a + (i * i);
	}
	cout << a << endl;*/
	/*16. В бригаде, работающей на уборке сена, имеется N сенокосилок.Первая сенокосилка работала m часов, а каждая следующая на 10 минут больше, чем предыдущая.Сколько часов проработала вся бригада ?*/
	/*double n, m;
	cin >> n;
	cin >> m;
	m = m * 60;
	for (int i = 1; i <= n; i++) {
		m = m + 10;
	}
	m = m / 60;
	cout << m << endl;*/
	/*17. В ЭВМ вводятся по очереди данные о росте N учащихся класса.Определить средний рост учащихся класса.*/
	/*int n,a;
	double b;
	b = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		b = b + a;
	}
	b = b / n;
	cout << b << endl;*/
	/*18. Задано натуральное число N.Найти количество натуральных чисел, не превосходящих N и не делящихся ни на одно из чисел 2, 3, 5.*/
	/*int n,a;
	a = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
			a = a + 1;
		}
	}
	cout << a << endl;*/
	/*19. Два двузначных числа, записанных одно за другим, образуют четырёхзначное число, которое делится на их произведение.Найти эти числа.*/
	int b;
	b = 0;
	for (int i = 1; int a = 1; i <= 99 && a <= 99) {
		i = i + 1;
		a = a + 1;
		b = i + a;
		if (b % i == 0 && b % a == 0) {
			cout << i<< " "<< a << endl;
		}
	}
}