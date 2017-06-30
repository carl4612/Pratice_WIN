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

//�Nchar * �Ʀr�ন 16�i��
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
    //�u�n�����O��pure virtual function,���K�L�k�����ŧi�����O
    /**
    //�@�����O���p�G�t���µ����禡�A�h�����O���@�u��H���O�v�]Abstract class�^�A
    //�����O�u��Q�~�ӡA�Ӥ���ΨӪ����ͦ���ҡA�p�G�չϨϥΤ@�ө�H���O�ӥͦ���ҡA�h�|�o�ͽsĶ���~�C
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
