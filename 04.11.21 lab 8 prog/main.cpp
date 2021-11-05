#include <iostream>

using namespace std;

int sizStr(char str[])
{
    int c = 0;
    while(str[c] != '\0')
    {
        c+=1;
    }
    return c+1;
}

int main()
{
    // 1 4 7 8 11
    // BEGIN concatenatio
    printf("1.concatenatio\nwrite 1 string\n");
    char str1[100]; // = "russia is";
    scanf("%[^\n]s", str1);
    char str2[100]; // = " the best";
    printf("write 2 string\n");
    //printf("vtoryaya:\n");
    scanf(" %[^\n]s", str2);
    int siz = sizStr(str1) + sizStr(str2);
    char* sumStr = (char*)malloc(siz*sizeof(char));
    int i = 0;
    for(i; i< sizStr(str1)-1; i++)
        sumStr[i] = str1[i];
    for(int j = 0; j < sizStr(str2); j++)
        sumStr[i+j] = str2[j];
    printf("result\n%s\n\n", sumStr);
    //END concatenatio
    // BEGIN Ncomparison
    printf("4.Ncomparison\nwrite 1 string\n");
    char str3[100]; // = "abcdi";
    scanf(" %[^\n]s", str3);
    printf("write 2 string\n");
    char str4[100]; // = "abcdj";
    scanf(" %[^\n]s", str4);
    int N = 4; // количество сравниваемых символов
    int m = 0, n = 0;
    while((m < sizStr(str3)) && (n < sizStr(str4)))
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
                printf("\nstr1 is better\n\n");
                break;
            }
            else
            {
                printf("\nstr2 is better\n\n");
                break;
            }
        }
    }
    // END Ncomparison
    // BEGIN minesizStr
    printf("7.sizeofstring\nwrite string\n");
    char str5[100]; // = "primer sredney stroky s probelamy";  // если нужно сделать ввод с консоли, то вот нужна€ конструкци€
    scanf(" %[^\n]s", str5);                                       // scanf("%[^\n]s", &str5);
    /*int counter = 0;
    while(str5[counter] != '\0')
        counter +=1;
    */

    printf("\nsize of str = %d\n\n", sizStr(str5)-1);
    // END minesizStr
    // BEGIN firstEnter
    printf("8.firstEnter\nwrite string\n");
    char str6[100]; // = "laboratornaya po programmirovaniy";
    scanf(" %[^\n]s", str6);
    printf("write char\n");
    char need; // = ' '; // искомый символ
    scanf(" %c", &need);
    int pos, flag = 0;
    i = 0;
    while(i < sizStr(str6))
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
        printf("\npos of \"%c\" = %d\n\n", need, pos);
    // END firstEnter
    // BEGIN отрезок
    printf("11.segment\nwrite string\n");
    char str7[100]; // = "Meet my family. There are five of us Ц my parents, my elder brother, my baby sister and me. "; // строка в которой ищем
    scanf(" %[^\n]s", str7);
    printf("write alphabet\n");
    char str8[100]; // = " 123TtHhRrEe"; // алфавит, отрезок из которого ищем
    scanf(" %[^\n]s", str8);
    int c = 0, maxC = 0;
    int siz7 = sizStr(str7), siz8 = sizStr(str8);
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
    printf("\nsize of segment = %d\n", maxC);
    // END отрезок
    return 0;
}
