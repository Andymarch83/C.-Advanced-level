/*На стандартном потоке ввода задается целое неотрицательное число N и
последовательность допустимых символов в кодировке ASCII,
оканчивающаяся точкой. Допустимые символы – латинские буквы 'a' ... 'z', 'A' ...
'Z' и пробел. Требуется закодировать латинские буквы ('a' ... 'z', 'A' ... 'Z')
шифром Цезаря, пробелы вывести без изменения. Число N задает сдвиг в
шифре. Шифр Цезаря заключается в следующем преобразовании. Пусть буквы
алфавита пронумерованы от 0 до K - 1, где K - число символов в алфавите.
Тогда символ с номером n кодируется символом с номером p = (n + N) mod K
(mod - операция взятия остатка). На стандартном потоке вывода напечатать
зашифрованное сообщение, оканчивающееся точкой. Преобразование
требуется выполнять независимо для заглавных и строчных латинских букв.
Указание: использовать массивы запрещается.
Данные на входе: Натуральное число N (N > 0), после которого следует
сообщение.
Данные на выходе: Зашифрованное сообщение.
*/

#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>

int main(){
    int N = 0;
    char letter;
    scanf("%d", &N);
    while ((letter = getchar())!='.')
    {   
        if(letter>='A' && letter<='Z')
            letter = (letter - 'A' + N) % 26 + 'A';
        else if(letter>='a' && letter<='z')
            letter = (letter - 'a' + N) % 26 + 'a'; 
        else if(letter == ' ')
            letter = letter;
        else
            continue;
        putchar(letter);
    }  
    putchar(letter);
    return 0;
}
