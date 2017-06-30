#include <iostream>
#include "CarlClass.h"
#include "stdio.h"
#include <string.h>
#include <stdlib.h>
#include "om_inttypes.h"

using namespace std;
const unsigned char HiBYTEMask = 0xf0;
const unsigned char LoBYTEMask = 0x0f;

typedef struct _strABC{
    int number;
    string name;
    int seq;
    char isTrue;
}strABC;

void getMemory(char** s)
{
    *s = (char*)malloc(sizeof(char));
    printf("s = %p\n", s);
    printf("*s = %p\n", *s);
}

//將char * 數字轉成 16進制
//e.g. "1430" -> 31343330
int BCD2Int( char* Buffer, int Length )
{
    register int Result = 0;

    for( register int i = 0; i < Length; i++ )
    {
        Result = 10 * Result + (int)( ((unsigned char)Buffer[i]&HiBYTEMask)>>4 ) ;
        Result = 10 * Result + (int)(  (unsigned char)Buffer[i]&LoBYTEMask );
    }
    return Result;
}

int main()
{
    /*
    //===========test 1============
    CarlClass carl;
    carl.margin = 83000;
    printf("margin=%d",carl.margin);
    */

    //===========test 1-1============
    //virutal function
    //Father fa; Error: cannot declare variable 'c' to be of abstract type 'circle'
    //只要父類別有pure virtual function,那便無法直接宣告父類別
    /**
    //一個類別中如果含有純虛擬函式，則該類別為一「抽象類別」（Abstract class），
    //該類別只能被繼承，而不能用來直接生成實例，如果試圖使用一個抽象類別來生成實例，則會發生編譯錯誤。
    **/
    CarlClass carl;


    /*
    //*===========test 2============
    int Time = BCD2Int( "1430", 4 );
    printf("int=%d",Time);
    */

    //*===========test 3============
    /*
    char* ch = NULL;
    getMemory(&ch);
    printf("&ch = %p\n", &ch);
    printf("ch = %p\n", ch);
    //============test 4============
    strABC pstr={1,"Carl",0,'T'};

    //memcpy(&pstr->name,"Carl",4);
    //pstr->name="Carl";
    //pstr->seq=3;
    char* uutest[20]={1,"Hello",1,'T'};

    //memcpy(uutest,(char*)&pstr,7);
    cout << uutest << endl;
    string test = pstr.name;
    */
    //*==========test 4=============
    string str = "ab,,cd,,,ef";
    string delim = ",";
    char* Token = NULL;
    char* SavePtr;
    Token = strtok_r(str,delim,&SavePtr);

    cout << Token << endl;

    cout << "Hello world!" << endl;
    return 0;
}
