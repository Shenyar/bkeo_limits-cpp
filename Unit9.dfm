object instr_history: Tinstr_history
  Left = 260
  Top = 203
  Width = 1040
  Height = 563
  Caption = #1048#1089#1090#1086#1088#1080#1103' '#1080#1079#1084#1077#1085#1077#1085#1080#1081' '#1083#1080#1084#1080#1090#1086#1074
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poOwnerFormCenter
  Scaled = False
  DesignSize = (
    1024
    525)
  PixelsPerInch = 96
  TextHeight = 13
  object DBNavigator1: TDBNavigator
    Left = 16
    Top = 495
    Width = 259
    Height = 25
    DataSource = DataSource1
    VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbPost, nbCancel, nbRefresh]
    Anchors = [akLeft, akBottom]
    TabOrder = 0
  end
  object DBGridEh1: TDBGridEh
    Left = 8
    Top = 8
    Width = 1009
    Height = 481
    Anchors = [akLeft, akTop, akRight, akBottom]
    AutoFitColWidths = True
    DataGrouping.GroupLevels = <>
    DataSource = DataSource1
    EditActions = [geaCopyEh, geaPasteEh]
    Flat = False
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
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
    ReadOnly = True
    RowDetailPanel.Color = clBtnFace
    RowHeight = 4
    RowLines = 2
    ShowHint = False
    SortLocal = True
    STFilter.InstantApply = True
    STFilter.Local = True
    STFilter.Visible = True
    TabOrder = 1
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -12
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    UseMultiTitle = True
    OnGetCellParams = DBGridEh1GetCellParams
    Columns = <
      item
        EditButtons = <>
        FieldName = 'no'
        Footers = <>
        STFilter.DataField = 'id'
        Title.Caption = #8470' '#1087'/'#1087
        Width = 30
      end
      item
        EditButtons = <>
        FieldName = 'shifr'
        Footers = <>
        STFilter.DataField = 'shifr'
        Title.Caption = #1064#1080#1092#1088' '#1080#1085#1089#1090#1088#1091#1084#1077#1085#1090#1072
        Title.SortIndex = 2
        Title.SortMarker = smDownEh
        Width = 100
        WordWrap = False
      end
      item
        EditButtons = <>
        FieldName = 'iname'
        Footers = <>
        STFilter.DataField = 'iname'
        Title.Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077
        Width = 80
      end
      item
        EditButtons = <>
        FieldName = 'material'
        Footers = <>
        STFilter.DataField = 'material'
        Title.Caption = #1052#1072#1090#1077#1088#1080#1072#1083' '#1080#1085#1089#1090#1088#1091#1084#1077#1085#1090#1072
        Width = 90
        WordWrap = False
      end
      item
        EditButtons = <>
        FieldName = 'chex'
        Footers = <>
        STFilter.DataField = 'chex'
        Title.Caption = #1062#1077#1093
        Title.SortIndex = 1
        Title.SortMarker = smDownEh
        Width = 30
        WordWrap = False
      end
      item
        EditButtons = <>
        FieldName = 'dse'
        Footers = <>
        STFilter.DataField = 'dse'
        Title.Caption = #1044#1057#1045
        Width = 100
        WordWrap = False
      end
      item
        EditButtons = <>
        FieldName = 'pvd'
        Footers = <>
        STFilter.DataField = 'pvd'
        Title.Caption = #1055#1086#1082#1088#1099#1090#1080#1077' PVD'
        Width = 70
        WordWrap = False
      end
      item
        EditButtons = <>
        FieldName = 'obrmat'
        Footers = <>
        STFilter.DataField = 'obrmat'
        Title.Caption = #1054#1073#1088'. '#1084#1072#1090#1077#1088#1080#1072#1083
        Width = 90
        WordWrap = False
      end
      item
        EditButtons = <>
        FieldName = 'actdate'
        Footers = <>
        STFilter.DataField = 'actdate'
        Title.Caption = #1044#1072#1090#1072' '#1086#1092#1086#1088#1084#1083#1077#1085#1080#1103' '#1072#1082#1090#1072
        Width = 70
        WordWrap = False
      end
      item
        EditButtons = <>
        FieldName = 'vnedrdate'
        Footers = <>
        STFilter.DataField = 'vnedrdate'
        Title.Caption = #1044#1072#1090#1072' '#1086#1090#1095#1077#1090#1072' '#1086' '#1074#1085#1077#1089#1077#1085#1080#1080' '#1074' '#1058'.'#1055'.'
        Width = 70
        WordWrap = False
      end
      item
        EditButtons = <>
        FieldName = 'vnedrshifr'
        Footers = <>
        STFilter.DataField = 'vnedrshifr'
        Title.Caption = #1064#1080#1092#1088' '#1074#1085#1077#1076#1088'. '#1080#1085#1089#1090#1088#1091#1084#1077#1085#1090#1072
        Width = 100
        WordWrap = False
      end
      item
        EditButtons = <>
        FieldName = 'rezult'
        Footers = <>
        STFilter.DataField = 'rezult'
        Title.Caption = #1055#1086#1083#1091#1095#1077#1085#1085#1099#1081' '#1088#1077#1079#1091#1083#1100#1090#1072#1090
        Width = 80
        WordWrap = False
      end
      item
        EditButtons = <>
        FieldName = 'norm_do'
        Footers = <>
        STFilter.DataField = 'norm_do'
        Title.Caption = #1053#1086#1088#1084#1099' '#1088#1072#1089#1093#1086#1076#1072' '#1056#1048' '#1076#1086' '#1074#1085#1077#1076#1088#1077#1085#1080#1103
        Width = 60
        WordWrap = False
      end
      item
        EditButtons = <>
        FieldName = 'norm_aft'
        Footers = <>
        STFilter.DataField = 'norm_aft'
        Title.Caption = #1053#1086#1088#1084#1099' '#1088#1072#1089#1093#1086#1076#1072' '#1074#1085#1077#1076#1088#1077#1085#1085#1086#1075#1086' '#1056#1048
        Width = 60
        WordWrap = False
      end
      item
        EditButtons = <>
        FieldName = 'date_doc'
        Footers = <>
        Title.Caption = #1044#1072#1090#1072' '#1087#1088#1077#1076#1086#1089#1090#1072#1074#1083#1077#1085#1080#1103' '#1076#1086#1082#1091#1084#1077#1085#1090#1086#1074
        Width = 90
      end
      item
        EditButtons = <>
        FieldName = 'vnedr_dse'
        Footers = <>
        STFilter.DataField = 'vnedr_dse'
        Title.Caption = #1042#1085#1077#1076#1088#1077#1085' '#1085#1072' '#1044#1057#1045
        Width = 100
      end
      item
        EditButtons = <>
        FieldName = 'dse_normdo'
        Footers = <>
        STFilter.DataField = 'dse_normdo'
        Title.Caption = #1053#1086#1088#1084#1099' '#1088#1072#1089#1093#1086#1076#1072' '#1056#1048' '#1076#1086' '#1074#1085#1077#1076#1088#1077#1085#1080#1103
        Width = 60
      end
      item
        EditButtons = <>
        FieldName = 'dse_normaft'
        Footers = <>
        STFilter.DataField = 'dse_normaft'
        Title.Caption = #1053#1086#1088#1084#1099' '#1088#1072#1089#1093#1086#1076#1072' '#1074#1085#1077#1076#1088#1077#1085#1085#1086#1075#1086' '#1056#1048
        Width = 60
      end
      item
        EditButtons = <>
        FieldName = 'vneseno'
        Footers = <>
        STFilter.DataField = 'prim'
        Title.Caption = #1044#1072#1090#1072' '#1080#1079#1084#1077#1085#1077#1085#1080#1103' '#1053'./'#1056'.'
        Width = 80
      end
      item
        EditButtons = <>
        FieldName = 'flag'
        Footers = <>
        Visible = False
      end
      item
        EditButtons = <>
        FieldName = 'id'
        Footers = <>
        Title.SortIndex = 3
        Title.SortMarker = smDownEh
        Visible = False
      end>
    object RowDetailData: TRowDetailPanelControlEh
    end
  end
  object ADOQuery1: TADOQuery
    Connection = auth.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from instrum where (flag<>3)'
      'AND (shifr = '#39'E'#39')'
      'ORDER BY vneseno desc , id desc ;')
    Left = 48
    Top = 88
    object ADOQuery1id: TAutoIncField
      FieldName = 'id'
      ReadOnly = True
    end
    object ADOQuery1shifr: TWideStringField
      FieldName = 'shifr'
    end
    object ADOQuery1iname: TWideStringField
      FieldName = 'iname'
      Size = 40
    end
    object ADOQuery1material: TWideStringField
      FieldName = 'material'
    end
    object ADOQuery1chex: TWideStringField
      FieldName = 'chex'
      Size = 5
    end
    object ADOQuery1dse: TWideStringField
      FieldName = 'dse'
      Size = 100
    end
    object ADOQuery1pvd: TWideStringField
      FieldName = 'pvd'
    end
    object ADOQuery1obrmat: TWideStringField
      FieldName = 'obrmat'
      Size = 30
    end
    object ADOQuery1actdate: TWideStringField
      FieldName = 'actdate'
      Size = 15
    end
    object ADOQuery1vnedrdate: TWideStringField
      FieldName = 'vnedrdate'
      Size = 15
    end
    object ADOQuery1vnedrshifr: TWideStringField
      FieldName = 'vnedrshifr'
    end
    object ADOQuery1rezult: TWideStringField
      FieldName = 'rezult'
      Size = 40
    end
    object ADOQuery1norm_do: TWideStringField
      FieldName = 'norm_do'
      Size = 15
    end
    object ADOQuery1norm_aft: TWideStringField
      FieldName = 'norm_aft'
      Size = 15
    end
    object ADOQuery1vnedr_dse: TWideStringField
      FieldName = 'vnedr_dse'
      Size = 255
    end
    object ADOQuery1dse_normdo: TWideStringField
      FieldName = 'dse_normdo'
      Size = 255
    end
    object ADOQuery1dse_normaft: TWideStringField
      FieldName = 'dse_normaft'
      Size = 255
    end
    object ADOQuery1prim: TWideStringField
      FieldName = 'prim'
      Size = 50
    end
    object ADOQuery1flag: TWordField
      FieldName = 'flag'
    end
    object ADOQuery1date_doc: TWideStringField
      FieldName = 'date_doc'
      Size = 25
    end
    object ADOQuery1vneseno: TDateTimeField
      FieldName = 'vneseno'
    end
  end
  object DataSource1: TDataSource
    DataSet = MemTableEh1
    Left = 80
    Top = 88
  end
  object MemTableEh1: TMemTableEh
    FetchAllOnOpen = True
    Params = <>
    DataDriver = DataSetDriverEh1
    OnCalcFields = MemTableEh1CalcFields
    Left = 112
    Top = 88
    object MemTableEh1id: TAutoIncField
      FieldName = 'id'
    end
    object MemTableEh1shifr: TWideStringField
      FieldName = 'shifr'
    end
    object MemTableEh1iname: TWideStringField
      FieldName = 'iname'
      Size = 40
    end
    object MemTableEh1material: TWideStringField
      FieldName = 'material'
    end
    object MemTableEh1chex: TWideStringField
      FieldName = 'chex'
      Size = 5
    end
    object MemTableEh1dse: TWideStringField
      FieldName = 'dse'
      Size = 100
    end
    object MemTableEh1pvd: TWideStringField
      FieldName = 'pvd'
    end
    object MemTableEh1obrmat: TWideStringField
      FieldName = 'obrmat'
      Size = 30
    end
    object MemTableEh1actdate: TWideStringField
      FieldName = 'actdate'
      Size = 15
    end
    object MemTableEh1vnedrdate: TWideStringField
      FieldName = 'vnedrdate'
      Size = 15
    end
    object MemTableEh1vnedrshifr: TWideStringField
      FieldName = 'vnedrshifr'
    end
    object MemTableEh1rezult: TWideStringField
      FieldName = 'rezult'
      Size = 40
    end
    object MemTableEh1norm_do: TWideStringField
      FieldName = 'norm_do'
      Size = 15
    end
    object MemTableEh1norm_aft: TWideStringField
      FieldName = 'norm_aft'
      Size = 15
    end
    object MemTableEh1prim: TWideStringField
      FieldName = 'prim'
      Size = 50
    end
    object MemTableEh1flag: TWordField
      FieldName = 'flag'
    end
    object MemTableEh1vnedr_dse: TWideStringField
      FieldName = 'vnedr_dse'
      Size = 255
    end
    object MemTableEh1dse_normdo: TWideStringField
      FieldName = 'dse_normdo'
      Size = 255
    end
    object MemTableEh1dse_normaft: TWideStringField
      FieldName = 'dse_normaft'
      Size = 255
    end
    object MemTableEh1date_doc: TWideStringField
      FieldName = 'date_doc'
      Size = 25
    end
    object MemTableEh1no: TIntegerField
      FieldKind = fkCalculated
      FieldName = 'no'
      Calculated = True
    end
    object MemTableEh1vneseno: TDateTimeField
      FieldName = 'vneseno'
    end
  end
  object DataSetDriverEh1: TDataSetDriverEh
    ProviderDataSet = ADOQuery1
    Left = 144
    Top = 88
  end
end
