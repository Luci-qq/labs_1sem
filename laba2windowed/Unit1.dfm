object Form1: TForm1
  Left = 192
  Top = 125
  Width = 703
  Height = 540
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
  object RadioGroup1: TRadioGroup
    Left = 320
    Top = 32
    Width = 185
    Height = 105
    Caption = #1042#1099#1073#1086#1088' '#1092#1091#1085#1082#1080#1080':'
    ItemIndex = 0
    Items.Strings = (
      '2x'
      'x^2'
      'x/3')
    TabOrder = 0
  end
  object Edit1: TEdit
    Left = 32
    Top = 40
    Width = 121
    Height = 22
    TabOrder = 1
    Text = 'A'
  end
  object Edit2: TEdit
    Left = 32
    Top = 80
    Width = 121
    Height = 22
    TabOrder = 2
    Text = 'B'
  end
  object Edit3: TEdit
    Left = 32
    Top = 120
    Width = 121
    Height = 22
    TabOrder = 3
    Text = 'Z'
  end
  object Memo1: TMemo
    Left = 88
    Top = 272
    Width = 233
    Height = 129
    Lines.Strings = (
      'Memo1')
    TabOrder = 4
  end
  object Button1: TButton
    Left = 440
    Top = 216
    Width = 121
    Height = 65
    Caption = #1056#1077#1096#1080#1090#1100
    TabOrder = 5
    OnClick = Button1Click
  end
end
