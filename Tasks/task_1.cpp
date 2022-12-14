/*На языке С/С++, написать алгоритм (функцию) определения четности
 * целого числа,который будет аналогичен нижеприведенному по
 * функциональности, но отличен по своей сути.
 * Объяснить плюсы и минусы обеих реализаций.*/

int conversionToBinary(int value){
    int bin = 0;
    int k = 1;
    while (value){
        bin += (value % 2) * k;
        k *= 10;
        value /= 2;
    }
    return bin;
}

bool isEven(int value){
    int binNumber = conversionToBinary(value);
    return binNumber % 10 == 0;
}

/*
* Данная реализация состоит из двух функций conversionToBinary и isEven
* Функция conversionToBinary переводит в число в бинарный вид. Четность двоичных
* чисел определяется несколько иначе, чем десятичных. Чётные числа в двоичной
* системе всегда оканчиваются на 0, а нечётные – на 1,что и проверяет функция isEven.
*
* Недостатки и преимущества обеих реализаций:
*
* 1.Данная реализация является более ресурсозатратной, чем в предложенном варианте.
*  Время выполнения O(n), в предложенном варианте оно равно O(1). На увеличение времени
*  выполнения повлияла функция перевода числа в бинарный вид.
*
* 2.Также накладывает ограничения int. Максимальное число которое int способен хранить
*  это 2 147 483 647. Соответственно максимальное число которое мы можем представить в
*  бинарном виде это 1 111 111 111, что в переводе в десятичную систему равняется 1023.
*  В предложенной реализации, числа покрывает весь диапазон int.
*
* 3.Также большим плюсом предложенной вами реализации является её простота, в то же время
*  предложенная мною реализация может запутать разработчика.
*/
