object instrum_dse: Tinstrum_dse
  Left = 314
  Top = 147
  Width = 545
  Height = 695
  Caption = #1055#1077#1088#1077#1095#1077#1085#1100' '#1044#1057#1045' '#1085#1072' '#1082#1086#1090#1086#1088#1099#1093' '#1074#1085#1077#1076#1088#1077#1085' '#1096#1080#1092#1088
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  DesignSize = (
    529
    657)
  PixelsPerInch = 96
  TextHeight = 16
  object Label1: TLabel
    Left = 16
    Top = 16
    Width = 296
    Height = 24
    Caption = #1064#1080#1092#1088' '#1080#1085#1089#1090#1088#1091#1084#1077#1085#1090#1072': 1234-1234'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 16
    Top = 48
    Width = 369
    Height = 24
    Caption = #1064#1080#1092#1088' '#1074#1085#1077#1076#1088'. '#1080#1085#1089#1090#1088#1091#1084#1077#1085#1090#1072': 1234-1234'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object DBGridEh1: TDBGridEh
    Left = 16
    Top = 88
    Width = 500
    Height = 529
    Anchors = [akLeft, akTop, akRight, akBottom]
    AutoFitColWidths = True
    DataGrouping.GroupLevels = <>
    DataSource = DataSource1
    EditActions = [geaCopyEh, geaPasteEh]
    Flat = False
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    FooterColor = clWindow
    FooterFont.Charset = DEFAULT_CHARSET
    FooterFont.Color = clWindowText
    FooterFont.Height = -12
    FooterFont.Name = 'MS Sans Serif'
    FooterFont.Style = []
    Options = [dgEditing, dgTitles, dgIndicator, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgMultiSelect]
    OptionsEh = [dghFixed3D, dghHighlightFocus, dghClearSelection, dghAutoSortMarking, dghMultiSortMarking, dghEnterAsTab, dghDialogFind, dghColumnResize, dghAutoFitRowHeight, dghExtendVertLines]
    ParentFont = False
    ParentShowHint = False
    RowDetailPanel.Color = clBtnFace
    RowHeight = 4
    RowLines = 2
    ShowHint = False
    SortLocal = True
    STFilter.InstantApply = True
    STFilter.Local = True
    STFilter.Visible = True
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -12
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    UseMultiTitle = True
    VertScrollBar.VisibleMode = sbAlwaysShowEh
    Columns = <
      item
        EditButtons = <>
        FieldName = 'vnedr_dse'
        Footers = <>
        STFilter.DataField = 'vnedr_dse'
        Title.Caption = #1042#1085#1077#1076#1088#1077#1085' '#1085#1072' '#1044#1057#1045
        Width = 150
      end
      item
        EditButtons = <>
        FieldName = 'dse_normdo'
        Footers = <>
        STFilter.DataField = 'dse_normdo'
        Title.Caption = #1053#1086#1088#1084#1099' '#1088#1072#1089#1093#1086#1076#1072' '#1056#1048' '#1076#1086' '#1074#1085#1077#1076#1088#1077#1085#1080#1103
        Width = 80
      end
      item
        EditButtons = <>
        FieldName = 'dse_normaft'
        Footers = <>
        STFilter.DataField = 'dse_normaft'
        Title.Caption = #1053#1086#1088#1084#1099' '#1088#1072#1089#1093#1086#1076#1072' '#1074#1085#1077#1076#1088#1077#1085#1085#1086#1075#1086' '#1056#1048
        Width = 80
      end
      item
        EditButtons = <>
        FieldName = 'prim'
        Footers = <>
        STFilter.DataField = 'prim'
        Title.Caption = #1055#1088#1080#1084#1077#1095#1072#1085#1080#1077
        Width = 150
      end>
    object RowDetailData: TRowDetailPanelControlEh
    end
  end
  object DBNavigator1: TDBNavigator
    Left = 24
    Top = 624
    Width = 228
    Height = 25
    DataSource = DataSource1
    VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbInsert, nbDelete]
    Anchors = [akLeft, akBottom]
    TabOrder = 1
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 208
    Top = 240
  end
  object ADOQuery1: TADOQuery
    Connection = auth.ADOConnection1
    CursorType = ctStatic
    AfterInsert = ADOQuery1AfterInsert
    Parameters = <>
    SQL.Strings = (
      'SELECT * FROM instrum_dse'
      'WHERE instr_shifr_id ='
      '890'
      'ORDER BY vnedr_dse;')
    Left = 176
    Top = 240
    object ADOQuery1id: TAutoIncField
      FieldName = 'id'
      ReadOnly = True
    end
    object ADOQuery1instr_shifr_id: TIntegerField
      FieldName = 'instr_shifr_id'
    end
    object ADOQuery1vnedr_dse: TWideStringField
      FieldName = 'vnedr_dse'
      Size = 50
    end
    object ADOQuery1dse_normdo: TWideStringField
      FieldName = 'dse_normdo'
      Size = 25
    end
    object ADOQuery1dse_normaft: TWideStringField
      FieldName = 'dse_normaft'
      Size = 25
    end
    object ADOQuery1prim: TWideStringField
      FieldName = 'prim'
      Size = 50
    end
  end
end
