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
    char str1[100]; // = "russia is";
    scanf("%[^\n]s", str1);
    char str2[100]; // = " the best";
    //printf("vtoryaya:\n");
    scanf(" %[^\n]s", str2);
    int siz = sizStr(str1) + sizStr(str2);
    char* sumStr = (char*)malloc(siz*sizeof(char));
    int i = 0;
    for(i; i< sizStr(str1)-1; i++)
        sumStr[i] = str1[i];
    for(int j = 0; j < sizStr(str2); j++)
        sumStr[i+j] = str2[j];
    printf("\n%s\n", sumStr);
    //END concatenatio
    // BEGIN Ncomparison
    char str3[100]; // = "abcdi";
    scanf(" %[^\n]s", str3);
    char str4[100]; // = "abcdj";
    scanf(" %[^\n]s", str4);
    int N = 4; // ���������� ������������ ��������
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
    // BEGIN minesizStr
    char str5[100]; // = "primer sredney stroky s probelamy";  // ���� ����� ������� ���� � �������, �� ��� ������ �����������
    scanf(" %[^\n]s", str5);                                       // scanf("%[^\n]s", &str5);
    /*int counter = 0;
    while(str5[counter] != '\0')
        counter +=1;
    */

    printf("\nsize of str = %d\n", sizStr(str5));
    // END minesizStr
    // BEGIN firstEnter
    char str6[100]; // = "laboratornaya po programmirovaniy";
    scanf(" %[^\n]s", str6);
    char need; // = ' '; // ������� ������
    scanf(" %[^\n]c", &need);
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
        printf("\npos of \"%c\" = %d\n", need, pos);
    // END firstEnter
    // BEGIN �������
    char str7[100]; // = "Meet my family. There are five of us � my parents, my elder brother, my baby sister and me. "; // ������ � ������� ����
    scanf(" %[^\n]s", str7);
    char str8[100]; // = " 123TtHhRrEe"; // �������, ������� �� �������� ����
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
    printf("\ndlina otrezka = %d\n", maxC);
    // END �������
    return 0;
}
