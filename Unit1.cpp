//---------------------------------------------------------------------------

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
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	try
	{
		float x, y, x1, y1, x2, y2, dx, dy, hop;
		int i;

		x1 = StrToInt(Form1 -> Edit1 -> Text);
		y1 = StrToInt(Form1 -> Edit2 -> Text);
		x2 = StrToInt(Form1 -> Edit3 -> Text);
		y2 = StrToInt(Form1 -> Edit4 -> Text);

		dx = (x2 - x1);
		dy = (y2 - y1);

		if(abs(dx) >= abs(dy))
			hop = abs(dx);
		else
			hop = abs(dy);

		dx = dx / hop;
		dy = dy / hop;
		x = x1;
		y = y1;
		i = 1;

		while(i <= hop)
		{
			Form1 -> Canvas -> Pixels[x][y] = clRed;
			x = x + dx;
			y = y + dy;
			i = i + 1;
		}
	}
	catch(...)
	{

	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	Form1 -> Edit1 -> Text = "";
	Form1 -> Edit2 -> Text = "";
	Form1 -> Edit3 -> Text = "";
	Form1 -> Edit4 -> Text = "";
	Form1 -> Refresh();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	int rand1, rand2, rand3, rand4, min = 10, max = 200;

	rand1 =  rand()%(max - min + 1) + min;
	rand2 =  rand()%(max - min + 20) + min;
	rand3 =  rand()%(max - min + 1) + min;
	rand4 =  rand()%(max - min + 40) + min;

	Form1 -> Edit1 -> Text = rand1;
	Form1 -> Edit2 -> Text = rand2;
	Form1 -> Edit3 -> Text = rand3;
	Form1 -> Edit4 -> Text = rand4;
}
//---------------------------------------------------------------------------


