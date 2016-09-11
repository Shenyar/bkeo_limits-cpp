object fason: Tfason
  Left = 268
  Top = 160
  Width = 923
  Height = 531
  Caption = #1044#1074#1080#1078#1077#1085#1080#1077' '#1089#1083#1086#1078#1085#1086#1092#1072#1089#1086#1085#1085#1086#1075#1086' '#1080#1085#1089#1090#1088#1091#1084#1077#1085#1090#1072' '#1074' '#1087#1088#1086#1080#1079#1074#1086#1076#1089#1090#1074#1077
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnResize = FormResize
  DesignSize = (
    907
    493)
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 333
    Top = 16
    Width = 180
    Height = 13
    Anchors = [akTop, akRight]
    Caption = #1042#1099#1073#1088#1072#1090#1100' '#1096#1080#1092#1088#1099' '#1085#1072#1095#1080#1085#1072#1102#1097#1080#1077#1089#1103' '#1085#1072':'
  end
  object Label2: TLabel
    Left = 16
    Top = 16
    Width = 36
    Height = 13
    Caption = #1062#1077#1093' '#8470':'
  end
  object DBNavigator1: TDBNavigator
    Left = 16
    Top = 459
    Width = 297
    Height = 25
    DataSource = DataSource1
    VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbInsert, nbDelete, nbPost, nbCancel, nbRefresh]
    Anchors = [akLeft, akBottom]
    TabOrder = 0
    BeforeAction = DBNavigator1BeforeAction
    OnClick = DBNavigator1Click
  end
  object Edit1: TEdit
    Left = 517
    Top = 12
    Width = 121
    Height = 21
    Anchors = [akTop, akRight]
    TabOrder = 1
    OnKeyDown = Edit1KeyDown
  end
  object Button1: TButton
    Left = 645
    Top = 9
    Width = 121
    Height = 25
    Anchors = [akTop, akRight]
    Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100' '#1092#1080#1083#1100#1090#1088
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 773
    Top = 9
    Width = 121
    Height = 25
    Anchors = [akTop, akRight]
    Caption = #1059#1073#1088#1072#1090#1100' '#1092#1080#1083#1100#1090#1088
    TabOrder = 3
    OnClick = Button2Click
  end
  object Edit2: TEdit
    Left = 56
    Top = 12
    Width = 49
    Height = 21
    TabOrder = 4
    OnKeyDown = Edit2KeyDown
  end
  object Button3: TButton
    Left = 816
    Top = 460
    Width = 75
    Height = 25
    Anchors = [akRight, akBottom]
    Caption = #1055#1077#1095#1072#1090#1100
    TabOrder = 5
    OnClick = Button3Click
  end
  object DBGrid1: TDBGridEh
    Left = 8
    Top = 46
    Width = 890
    Height = 405
    Anchors = [akLeft, akTop, akRight, akBottom]
    DataGrouping.GroupLevels = <>
    DataSource = DataSource1
    Flat = False
    FooterColor = clWindow
    FooterFont.Charset = DEFAULT_CHARSET
    FooterFont.Color = clWindowText
    FooterFont.Height = -11
    FooterFont.Name = 'MS Sans Serif'
    FooterFont.Style = []
    OptionsEh = [dghFixed3D, dghHighlightFocus, dghClearSelection, dghAutoSortMarking, dghMultiSortMarking, dghEnterAsTab, dghDialogFind, dghColumnResize, dghColumnMove, dghExtendVertLines]
    RowDetailPanel.Color = clBtnFace
    SortLocal = True
    STFilter.InstantApply = True
    STFilter.Local = True
    STFilter.Visible = True
    TabOrder = 6
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    OnCellMouseClick = DBGrid1CellMouseClick
    Columns = <
      item
        EditButtons = <>
        FieldName = 'num'
        Footers = <>
        STFilter.Visible = False
        Title.Caption = #8470
        Width = 30
      end
      item
        EditButtons = <>
        FieldName = 'chex'
        Footers = <>
        STFilter.DataField = 'chex'
        Title.Caption = #1062#1077#1093
        Title.SortIndex = 1
        Title.SortMarker = smDownEh
        Title.TitleButton = True
      end
      item
        EditButtons = <>
        FieldName = 'shifr'
        Footers = <>
        HideDuplicates = True
        STFilter.DataField = 'shifr'
        Title.Alignment = taCenter
        Title.Caption = #1064#1080#1092#1088' '#1056#1048
        Title.SortIndex = 2
        Title.SortMarker = smDownEh
        Title.TitleButton = True
        Width = 140
      end
      item
        EditButtons = <>
        FieldName = 'naim'
        Footers = <>
        HideDuplicates = True
        STFilter.DataField = 'naim'
        Title.Alignment = taCenter
        Title.Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077
        Title.TitleButton = True
        Width = 100
      end
      item
        EditButtons = <>
        FieldName = 'nomer'
        Footers = <>
        STFilter.DataField = 'nomer'
        Title.Caption = #1048#1085#1076'. '#8470
        Title.SortIndex = 3
        Title.SortMarker = smDownEh
        Title.TitleButton = True
        Width = 50
      end
      item
        EditButtons = <>
        FieldName = 'fpu'
        Footers = <>
        STFilter.DataField = 'fpu'
        Title.Caption = #1060#1055#1059
        Title.TitleButton = True
        Width = 30
      end
      item
        EditButtons = <>
        FieldName = 'ostatok'
        Footers = <>
        STFilter.DataField = 'ostatok'
        Title.Caption = #1054#1089#1090#1072#1090#1086#1082' '#1080#1085#1089#1090#1088#1091#1084#1077#1085#1090#1072' ('#1082#1083#1072#1076'80+'#1094#1077#1093')'
        Width = 115
      end
      item
        EditButtons = <>
        FieldName = 'peretoch'
        Footers = <>
        STFilter.DataField = 'peretoch'
        Title.Caption = #1050#1086#1083'-'#1074#1086' '#1087#1077#1088#1077#1090#1086#1095#1077#1082'/'#1076#1077#1090#1072#1083#1077#1081
        Width = 95
      end
      item
        EditButtons = <>
        FieldName = 'srednee'
        Footers = <>
        STFilter.DataField = 'srednee'
        Title.Caption = #1057#1088#1077#1076#1085#1077#1077' '#1082#1086#1083'-'#1074#1086' '#1087#1077#1088#1077#1090#1086#1095#1077#1082'/'#1076#1077#1090#1072#1083#1077#1081
        Width = 140
      end
      item
        EditButtons = <>
        FieldName = 'data'
        Footers = <>
        STFilter.DataField = 'data'
        Title.Caption = #1044#1072#1090#1072' '#1089#1087#1080#1089#1072#1085#1080#1103
        Title.TitleButton = True
        Width = 110
      end
      item
        EditButtons = <>
        FieldName = 'prim'
        Footers = <>
        STFilter.DataField = 'prim'
        Title.Alignment = taCenter
        Title.Caption = #1055#1088#1080#1084#1077#1095#1072#1085#1080#1077
        Width = 100
      end>
    object RowDetailData: TRowDetailPanelControlEh
    end
  end
  object ADOQuery1: TADOQuery
    Connection = auth.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from fason'
      ';')
    Left = 144
    Top = 8
    object ADOQuery1id: TAutoIncField
      FieldName = 'id'
      ReadOnly = True
    end
    object ADOQuery1shifr: TWideStringField
      FieldName = 'shifr'
    end
    object ADOQuery1naim: TWideStringField
      FieldName = 'naim'
      Size = 15
    end
    object ADOQuery1nomer: TIntegerField
      FieldName = 'nomer'
    end
    object ADOQuery1fpu: TWideStringField
      FieldName = 'fpu'
      Size = 3
    end
    object ADOQuery1ostatok: TIntegerField
      FieldName = 'ostatok'
    end
    object ADOQuery1data: TDateTimeField
      FieldName = 'data'
      EditMask = '!99/99/00;1;_'
    end
    object ADOQuery1dzap: TDateTimeField
      FieldName = 'dzap'
    end
    object ADOQuery1peretoch: TWideStringField
      FieldName = 'peretoch'
      Size = 10
    end
    object ADOQuery1srednee: TWideStringField
      FieldName = 'srednee'
      Size = 10
    end
    object ADOQuery1chex: TWideStringField
      FieldName = 'chex'
      Size = 6
    end
    object ADOQuery1prim: TWideStringField
      FieldName = 'prim'
    end
  end
  object DataSource1: TDataSource
    DataSet = MemTableEh1
    Left = 240
    Top = 8
  end
  object PrintDialog1: TPrintDialog
    Left = 784
    Top = 456
  end
  object MemTableEh1: TMemTableEh
    Params = <>
    DataDriver = DataSetDriverEh1
    AfterInsert = MemTableEh1AfterInsert
    BeforeEdit = MemTableEh1BeforeEdit
    AfterEdit = MemTableEh1AfterEdit
    BeforePost = MemTableEh1BeforePost
    BeforeCancel = MemTableEh1BeforePost
    OnCalcFields = MemTableEh1CalcFields
    Left = 208
    Top = 8
    object MemTableEh1id: TAutoIncField
      FieldName = 'id'
    end
    object MemTableEh1shifr: TWideStringField
      FieldName = 'shifr'
    end
    object MemTableEh1naim: TWideStringField
      FieldName = 'naim'
      Size = 15
    end
    object MemTableEh1nomer: TIntegerField
      FieldName = 'nomer'
    end
    object MemTableEh1fpu: TWideStringField
      FieldName = 'fpu'
      Size = 3
    end
    object MemTableEh1ostatok: TIntegerField
      FieldName = 'ostatok'
    end
    object MemTableEh1data: TDateTimeField
      FieldName = 'data'
      EditMask = '!99/99/00;1;_'
    end
    object MemTableEh1dzap: TDateTimeField
      FieldName = 'dzap'
    end
    object MemTableEh1peretoch: TWideStringField
      FieldName = 'peretoch'
      Size = 10
    end
    object MemTableEh1srednee: TWideStringField
      FieldName = 'srednee'
      Size = 10
    end
    object MemTableEh1chex: TWideStringField
      FieldName = 'chex'
      Size = 6
    end
    object MemTableEh1prim: TWideStringField
      FieldName = 'prim'
    end
    object MemTableEh1num: TIntegerField
      FieldKind = fkCalculated
      FieldName = 'num'
      Calculated = True
    end
  end
  object DataSetDriverEh1: TDataSetDriverEh
    ProviderDataSet = ADOQuery1
    Left = 176
    Top = 8
  end
end
