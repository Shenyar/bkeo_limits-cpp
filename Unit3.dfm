object rash: Trash
  Left = 282
  Top = 141
  Width = 954
  Height = 662
  Caption = #1056#1072#1089#1095#1077#1090' '#1074#1088#1077#1084#1077#1085#1085#1099#1093' '#1085#1086#1088#1084' '#1088#1072#1089#1093#1086#1076#1072
  Color = clBtnFace
  Constraints.MinHeight = 350
  Constraints.MinWidth = 770
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnClose = FormClose
  OnResize = FormResize
  DesignSize = (
    938
    624)
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 361
    Top = 16
    Width = 180
    Height = 13
    Anchors = [akTop, akRight]
    Caption = #1042#1099#1073#1088#1072#1090#1100' '#1096#1080#1092#1088#1099' '#1085#1072#1095#1080#1085#1072#1102#1097#1080#1077#1089#1103' '#1085#1072':'
  end
  object Label2: TLabel
    Left = 355
    Top = 590
    Width = 154
    Height = 13
    Anchors = [akLeft, akBottom]
    Caption = #1064#1080#1092#1088#1086#1074' '#1089' '#1087#1088#1086#1096#1077#1076#1096#1080#1084' '#1089#1088#1086#1082#1086#1084
  end
  object Label3: TLabel
    Left = 16
    Top = 16
    Width = 36
    Height = 13
    Caption = #1062#1077#1093' '#8470':'
  end
  object Label4: TLabel
    Left = 355
    Top = 606
    Width = 145
    Height = 13
    Anchors = [akLeft, akBottom]
    Caption = #1064#1080#1092#1088#1099' '#1089' '#1091#1090#1086#1095#1085#1077#1085#1085#1099#1084#1080' '#1053'./'#1056'.'
  end
  object DBNavigator1: TDBNavigator
    Left = 16
    Top = 591
    Width = 288
    Height = 25
    DataSource = DataSource1
    VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbInsert, nbDelete, nbPost, nbCancel, nbRefresh]
    Anchors = [akLeft, akBottom]
    TabOrder = 0
    BeforeAction = DBNavigator1BeforeAction
    OnClick = DBNavigator1Click
  end
  object Edit1: TEdit
    Left = 545
    Top = 12
    Width = 121
    Height = 21
    Anchors = [akTop, akRight]
    TabOrder = 1
    OnKeyDown = Edit1KeyDown
  end
  object Button1: TButton
    Left = 673
    Top = 9
    Width = 121
    Height = 25
    Anchors = [akTop, akRight]
    Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100' '#1092#1080#1083#1100#1090#1088
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 801
    Top = 9
    Width = 121
    Height = 25
    Anchors = [akTop, akRight]
    Caption = #1059#1073#1088#1072#1090#1100' '#1092#1080#1083#1100#1090#1088
    TabOrder = 3
    OnClick = Button2Click
  end
  object Edit2: TEdit
    Left = 329
    Top = 586
    Width = 24
    Height = 19
    Anchors = [akLeft, akBottom]
    TabOrder = 4
    Text = '0'
    OnKeyDown = Edit1KeyDown
  end
  object Button3: TButton
    Left = 848
    Top = 591
    Width = 75
    Height = 25
    Anchors = [akRight, akBottom]
    Caption = #1055#1077#1095#1072#1090#1100
    TabOrder = 5
    OnClick = Button3Click
  end
  object CheckBox1: TCheckBox
    Left = 736
    Top = 598
    Width = 113
    Height = 17
    Anchors = [akRight, akBottom]
    Caption = #1057' '#1079#1072#1082#1088#1072#1096#1077#1085#1085#1099#1084#1080
    Checked = True
    State = cbChecked
    TabOrder = 6
  end
  object Edit3: TEdit
    Left = 56
    Top = 12
    Width = 49
    Height = 21
    TabOrder = 7
    OnKeyDown = Edit3KeyDown
  end
  object DBGrid1: TDBGridEh
    Left = 8
    Top = 40
    Width = 921
    Height = 545
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
    OptionsEh = [dghFixed3D, dghHighlightFocus, dghClearSelection, dghAutoSortMarking, dghMultiSortMarking, dghDialogFind, dghColumnResize, dghColumnMove, dghAutoFitRowHeight, dghExtendVertLines]
    RowDetailPanel.Color = clBtnFace
    SortLocal = True
    STFilter.InstantApply = True
    STFilter.Local = True
    STFilter.Visible = True
    TabOrder = 8
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    OnCellMouseClick = DBGrid1CellMouseClick
    OnDrawColumnCell = DBGrid1DrawColumnCell
    OnKeyDown = DBGrid1KeyDown
    OnMouseDown = DBGrid1MouseDown
    OnMouseUp = DBGrid1MouseUp
    Columns = <
      item
        EditButtons = <>
        FieldName = 'number'
        Footers = <>
        ReadOnly = True
        STFilter.Visible = False
        Title.Caption = #8470
        Width = 22
      end
      item
        EditButtons = <>
        FieldName = 'ceh'
        Footers = <>
        Title.Alignment = taCenter
        Title.Caption = #1062#1077#1093
        Title.SortIndex = 1
        Title.SortMarker = smDownEh
        Title.TitleButton = True
        Width = 40
        WordWrap = False
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
        Width = 120
        WordWrap = False
      end
      item
        EditButtons = <>
        FieldName = 'doc'
        Footers = <>
        HideDuplicates = True
        Title.Caption = #1056#1077#1075#1083#1072#1084#1077#1085#1090'. '#1076#1086#1082#1091#1084#1077#1085#1090', '#1076#1072#1090#1072' '#1087#1086#1076#1087#1080#1089#1072#1085#1080#1103
        Title.TitleButton = True
        Width = 70
        WordWrap = False
      end
      item
        EditButtons = <>
        FieldName = 'dse'
        Footers = <>
        Title.Alignment = taCenter
        Title.Caption = #1064#1080#1092#1088' '#1044#1057#1045
        Title.SortIndex = 3
        Title.SortMarker = smDownEh
        Title.TitleButton = True
        Width = 70
      end
      item
        EditButtons = <>
        FieldName = 'docdate'
        Footers = <>
        Title.Caption = #1057#1088#1086#1082' '#1076#1077#1081#1089#1090#1074'. '#1076#1086#1082#1091#1084#1077#1085#1090#1072
        Title.TitleButton = True
        Width = 130
      end
      item
        EditButtons = <>
        FieldName = 'kol'
        Footers = <>
        Title.Caption = #1050#1086#1083'-'#1074#1086' '#1044#1057#1045' '#1087#1086' '#1076#1086#1082#1091#1084#1077#1085#1090#1091
        Title.TitleButton = True
        Width = 80
        WordWrap = False
      end
      item
        EditButtons = <>
        FieldName = 'ras_norm'
        Footers = <>
        Title.Caption = #1056#1072#1089#1095#1077#1090#1085#1099#1077' '#1085#1086#1088#1084#1099' '#1088#1072#1089#1093#1086#1076#1072
        Title.TitleButton = True
        Width = 100
        WordWrap = False
      end
      item
        EditButtons = <>
        FieldName = 'tp'
        Footers = <>
        Title.Alignment = taCenter
        Title.Caption = #1058#1074#1077#1088#1076#1099#1081' '#1058#1055' / '#1076#1072#1090#1072
        Title.TitleButton = True
        Width = 80
        WordWrap = False
      end
      item
        EditButtons = <>
        FieldName = 'norm'
        Footers = <>
        Title.Caption = #1044#1072#1090#1072' '#1091#1090#1086#1095#1085#1077#1085#1080#1103' '#1053'./'#1056'.'
        Title.TitleButton = True
        Width = 100
        WordWrap = False
      end>
    object RowDetailData: TRowDetailPanelControlEh
    end
  end
  object CheckBox2: TCheckBox
    Left = 520
    Top = 597
    Width = 129
    Height = 17
    Anchors = [akLeft, akBottom]
    Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1090#1086#1083#1100#1082#1086' '#1080#1093
    TabOrder = 9
    OnClick = CheckBox2Click
  end
  object Edit4: TEdit
    Left = 329
    Top = 604
    Width = 24
    Height = 19
    Anchors = [akLeft, akBottom]
    TabOrder = 10
    Text = '0'
    OnKeyDown = Edit1KeyDown
  end
  object ADOQuery1: TADOQuery
    Connection = auth.ADOConnection1
    CursorType = ctStatic
    Filtered = True
    Parameters = <>
    SQL.Strings = (
      'select * from limits'
      'where shifr like '#39'%'#39
      ''
      'order by ceh, shifr, dse;')
    Left = 184
    Top = 8
    object ADOQuery1id: TAutoIncField
      FieldName = 'id'
      ReadOnly = True
    end
    object ADOQuery1shifr: TWideStringField
      FieldName = 'shifr'
    end
    object ADOQuery1kol: TWideStringField
      FieldName = 'kol'
      Size = 10
    end
    object ADOQuery1norm: TWideStringField
      FieldName = 'norm'
      Size = 15
    end
    object ADOQuery1docdate: TDateTimeField
      FieldName = 'docdate'
      EditMask = '!99/99/00;1;_'
    end
    object ADOQuery1ceh: TWideStringField
      FieldName = 'ceh'
      Size = 7
    end
    object ADOQuery1ras_norm: TWideStringField
      FieldName = 'ras_norm'
      Size = 15
    end
    object ADOQuery1tp: TWideStringField
      FieldName = 'tp'
    end
    object ADOQuery1doc: TWideStringField
      FieldName = 'doc'
      Size = 25
    end
    object ADOQuery1dse: TWideStringField
      FieldName = 'dse'
      Size = 255
    end
  end
  object DataSource1: TDataSource
    DataSet = MemTableEh1
    Left = 216
    Top = 8
  end
  object ADOQuery2: TADOQuery
    Connection = auth.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT Count(limits.id) AS [Count-id]'
      'FROM limits'
      'WHERE (((limits.docdate)<=Date()));')
    Left = 536
    Top = 408
    object ADOQuery2Countid: TIntegerField
      FieldName = 'Count-id'
    end
  end
  object DataSource2: TDataSource
    DataSet = ADOQuery2
    Left = 568
    Top = 408
  end
  object PrintDialog1: TPrintDialog
    Left = 704
    Top = 592
  end
  object MemTableEh1: TMemTableEh
    Filtered = True
    FetchAllOnOpen = True
    Params = <>
    DataDriver = DataSetDriverEh1
    AfterInsert = MemTableEh1AfterInsert
    BeforeEdit = MemTableEh1BeforeEdit
    BeforePost = MemTableEh1BeforePost
    BeforeCancel = MemTableEh1BeforePost
    OnCalcFields = MemTableEh1CalcFields
    Left = 248
    Top = 8
    object MemTableEh1id: TAutoIncField
      FieldName = 'id'
    end
    object MemTableEh1shifr: TWideStringField
      FieldName = 'shifr'
    end
    object MemTableEh1kol: TWideStringField
      FieldName = 'kol'
      Size = 10
    end
    object MemTableEh1norm: TWideStringField
      FieldName = 'norm'
      Size = 15
    end
    object MemTableEh1docdate: TDateTimeField
      FieldName = 'docdate'
    end
    object MemTableEh1ceh: TWideStringField
      FieldName = 'ceh'
      Size = 7
    end
    object MemTableEh1ras_norm: TWideStringField
      FieldName = 'ras_norm'
      Size = 15
    end
    object MemTableEh1tp: TWideStringField
      FieldName = 'tp'
    end
    object MemTableEh1doc: TWideStringField
      FieldName = 'doc'
      Size = 25
    end
    object MemTableEh1dse: TWideStringField
      FieldName = 'dse'
      Size = 255
    end
    object MemTableEh1number: TIntegerField
      FieldKind = fkCalculated
      FieldName = 'number'
      Calculated = True
    end
  end
  object DataSetDriverEh1: TDataSetDriverEh
    ProviderDataSet = ADOQuery1
    Left = 280
    Top = 8
  end
end
