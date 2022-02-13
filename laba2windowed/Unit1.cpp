//---------------------------------------------------------------------------
#include <math.h>
#include <vcl.h>
#pragma hdrstop

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

void __fastcall TForm1::FormCreate(TObject *Sender)
{
Memo1->Clear();
Memo1->Lines->Add("Лабораторная работа 2");
RadioGroup1->ItemIndex=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
double x,z,b,f,a,a1,a2,a3;
        a=StrToFloat(Edit1->Text);
        b=StrToFloat(Edit2->Text);
        z=StrToFloat(Edit3->Text);
        if (z > 0 )
        {
        x=1/(pow(z,2.0)+2*z);
        }
        else if (z <=0){
        x=1 - pow(z,3.0);
        };
        switch(RadioGroup1->ItemIndex){
                   case 0: f=2*x;
                   Memo1->Lines->Add(("f(x)=2*x: ") + FloatToStrF(f,ffFixed,8,6));
                   break;
                   case 1: f=x*x;
                   Memo1->Lines->Add(("f(x)=x*x: ") + FloatToStrF(f,ffFixed,8,6));
                   break;
                   case 2: f=x/3.0;
                   Memo1->Lines->Add(("f(x)=x/3: ") + FloatToStrF(f,ffFixed,8,6));
                   break;
        }
        a1= 2.5*a*exp(-3*x)- 4*b*pow(x,2.0);
        a2= log(fabs(x))+f;
        a3=a1/a2;
        Memo1->Lines->Add(a3);
}
//---------------------------------------------------------------------------

