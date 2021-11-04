#include <iostream>

using namespace std;



int main()
{
    // 1 4 7 8 11
    // BEGIN concatenatio
    char str1[] = "russia is";
    char str2[] = " the best";
    int siz = sizeof(str1) + sizeof(str2);
    char* sumStr = (char*)malloc(siz*sizeof(char));
    int i = 0;
    for(i; i< sizeof(str1)-1; i++)
        sumStr[i] = str1[i];
    for(int j = 0; j < sizeof(str2); j++)
        sumStr[i+j] = str2[j];
    printf("%s\n", sumStr);
    //END concatenatio
    // BEGIN Ncomparison
    char str3[] = "abcdi";
    char str4[] = "abcdj";
    int N = 4; // количество сравниваемых символов
    int m = 0, n = 0;
    while((m < sizeof(str3)) && (n < sizeof(str4)))
    {
        if(int(str3[m]) == int(str4[n]))
        {
            m+=1;
            n+=1;
        }
        else
        {
            if((int)str3[m] > (int)str4[n])
            {
                printf("\nstr3 is better\n");
                break;
            }
            else
            {
                printf("\nstr4 is better\n");
                break;
            }
        }
    }
    // END Ncomparison
    // BEGIN mineSIZEOF
    char str5[] = "primer sredney stroky s probelamy";  // если нужно сделать ввод с консоли, то вот нужна€ конструкци€
                                                        // scanf("%[^\n]s", &str5);
    int counter = 0;
    while(str5[counter] != '\0')
        counter +=1;
    printf("\nsize of str = %d\n", counter);
    // END mineSIZEOF
    // BEGIN firstEnter
    char str6[] = "laboratornaya po programmirovaniy";
    char need = ' '; // искомый символ
    int pos, flag = 0;
    i = 0;
    while(i < sizeof(str6))
    {
        if(str6[i] == need)
        {
            pos = i;
            flag = 1;
            break;
        }
        else
        {
            i+=1;
        }
    }
    if(flag)
        printf("\npos of \"%c\" = %d\n", need, pos);
    // END firstEnter
    // BEGIN отрезок
    char str7[] = "Meet my family. There are five of us Ц my parents, my elder brother, my baby sister and me. "; // строка в которой ищем
    char str8[] = " 123TtHhRrEe"; // алфавит, отрезок из которого ищем
    int c = 0, maxC = 0;
    int siz7 = sizeof(str7), siz8 = sizeof(str8);
    for(int i = 0; i < siz7; i+=1)
    {
        flag = 0;
        for(int j = 0; j < siz8; j +=1)
        {
            if(str7[i] == str8[j])
            {
                flag = 1;

            }
        }
        if(flag)
        {
            c+=1;
            if(c > maxC) maxC = c;
        }
        else
        {
            c = 0;
        }
    }
    printf("\ndlina otrezka = %d\n", maxC);
    // END отрезок
    return 0;
}
