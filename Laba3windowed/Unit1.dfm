object Form1: TForm1
  Left = 333
  Top = 175
  Width = 486
  Height = 426
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 14
  object Label1: TLabel
    Left = 24
    Top = 24
    Width = 11
    Height = 14
    Caption = 'A:'
  end
  object Label2: TLabel
    Left = 24
    Top = 64
    Width = 10
    Height = 14
    Caption = 'B:'
  end
  object Label3: TLabel
    Left = 280
    Top = 24
    Width = 10
    Height = 14
    Caption = 'H:'
  end
  object Label4: TLabel
    Left = 280
    Top = 64
    Width = 10
    Height = 14
    Caption = 'N:'
  end
  object Button1: TButton
    Left = 40
    Top = 336
    Width = 75
    Height = 25
    Caption = 'Solve'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 304
    Top = 336
    Width = 75
    Height = 25
    Caption = 'Clear'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Edit1: TEdit
    Left = 40
    Top = 24
    Width = 121
    Height = 22
    TabOrder = 2
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 40
    Top = 64
    Width = 121
    Height = 22
    TabOrder = 3
    Text = 'Edit2'
  end
  object Edit3: TEdit
    Left = 296
    Top = 24
    Width = 121
    Height = 22
    TabOrder = 4
    Text = 'Edit3'
  end
  object Edit4: TEdit
    Left = 296
    Top = 64
    Width = 121
    Height = 22
    TabOrder = 5
    Text = 'Edit4'
  end
  object Memo1: TMemo
    Left = 40
    Top = 104
    Width = 377
    Height = 201
    Lines.Strings = (
      'Memo1')
    TabOrder = 6
  end
end
