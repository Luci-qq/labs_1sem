//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream.h>
#pragma hdrstop
#include <math.h>
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
   double x,y,z,c,a1,a2,a3;
   x = Edit1->Text.ToDouble();
   y = Edit2->Text.ToDouble();
   z = Edit3->Text.ToDouble();
   a1=pow(y,pow(fabs(x),1/3.0));
   a2=pow(cos(y),3)*fabs(x-y)*(1+(pow(sin(z),2)/pow(x+y,1/2.0)));
   a3=exp(fabs(x-y))+x/2;
   c=a1+a2/a3;
   Memo1->Lines->Add(c);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
Memo1->Lines->Clear();
Memo1->Lines->Add("Лабораторная работа 1");
}
//---------------------------------------------------------------------------

