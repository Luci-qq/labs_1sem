//---------------------------------------------------------------------------
#include <math.h>
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

int fact(int d) {
    int res = 1;
    for (int i=0; i <= d; i++) {
        if (i == 0) {
            res = res * 1;
        }
        else { res = res * i; }
    }
    return res;
};
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
Memo1->Lines->Clear();
Memo1->Lines->Add("Лабораторная работа 3");
Edit1->Clear();
Edit2->Clear();
Edit3->Clear();
Edit4->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
Memo1->Lines->Clear();
Memo1->Lines->Add("Лабораторная работа 3");
Edit1->Clear();
Edit2->Clear();
Edit3->Clear();
Edit4->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
double a, b, h, n, x, y, sum, a1;
    a=StrToFloat(Edit1->Text);
    b=StrToFloat(Edit2->Text);
    h=StrToFloat(Edit3->Text);
    n=StrToFloat(Edit4->Text);

    for (x=a; x <= b; x+=h) {
        sum = 0;
        y = (pow(x,2.0)/4.0 + x/2.0 + 1)*exp(x/2.0);
        for (int k = 0; k <= n; k++) {
            a1 = ((pow(k, 2) + 1) / fact(k)) * pow((x / 2.0), k);
            sum += a1;
        }
        Memo1->Lines->Add("x: "+ FloatToStr(x)+ "  y: " + FloatToStr(y) +"  Сумма: " + FloatToStr(sum)+ "\n" );
    };
}
//---------------------------------------------------------------------------

