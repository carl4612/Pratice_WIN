/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   CarlClass.h
 * Author: 90828
 *
 * Created on 2017年6月14日, 上午 10:07
 */

#ifndef CARLCLASS_H
#define CARLCLASS_H
#include "Father.h"
class CarlClass : public  Father{
public:
    int margin;
    //UFC::AnsiString ProductName;
    CarlClass();
    CarlClass(const CarlClass& orig);

    virtual void draw();
    virtual ~CarlClass();

private:

};

#endif /* CARLCLASS_H */

