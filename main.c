#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(void)
{
	char *locale = setlocale (LC_ALL, "");
	char m;
	printf ("Выберите время года: \n 1. Зима \n 2. Весна \n 3. Лето \n 4. Осень \n");
	scanf ("%d", &m);
	switch(m)
	{
	case 1: printf ("Декабрь, январь, февраль \n"); break;	
	case 2: printf ("Март, апрель, май \n"); break;
	case 3: printf ("Июнь, июль, август \n"); break;
	case 4: printf ("Сентябрь, октябрь, ноябрь \n"); break;
    }
	return 0;
}