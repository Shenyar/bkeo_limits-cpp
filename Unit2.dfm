object instr: Tinstr
  Left = 239
  Top = 165
  Width = 1040
  Height = 578
  Caption = #1042#1085#1077#1076#1088#1077#1085#1080#1077' '#1074' '#1087#1088#1086#1080#1079#1074#1086#1076#1089#1090#1074#1086' '#1089#1090#1088#1091#1082#1090#1091#1088#1080#1088#1086#1074#1072#1085#1085#1099#1093' '#1080#1085#1089#1090#1088#1091#1084#1077#1085#1090#1086#1074
  Color = clBtnFace
  Constraints.MinHeight = 350
  Constraints.MinWidth = 1040
  Font.Charset = RUSSIAN_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnClose = FormClose
  OnCreate = FormCreate
  OnResize = FormResize
  DesignSize = (
    1024
    540)
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 448
    Top = 16
    Width = 183
    Height = 13
    Anchors = [akTop, akRight]
    AutoSize = False
    Caption = #1042#1099#1073#1088#1072#1090#1100' '#1096#1080#1092#1088#1099' '#1085#1072#1095#1080#1085#1072#1102#1097#1080#1077#1089#1103' '#1085#1072':'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 24
    Top = 16
    Width = 35
    Height = 13
    AutoSize = False
    Caption = #1062#1077#1093' '#8470':'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object DBGridEh1: TDBGridEh
    Left = 0
    Top = 40
    Width = 1009
    Height = 457
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
    RowDetailPanel.Color = clBtnFace
    RowHeight = 4
    RowLines = 2
    ShowHint = False
    SortLocal = True
    STFilter.InstantApply = True
    STFilter.Local = True
    STFilter.Visible = True
    TabOrder = 5
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -12
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    UseMultiTitle = True
    OnColExit = DBGridEh1ColExit
    OnDblClick = DBGridEh1DblClick
    OnDrawColumnCell = DBGridEh1DrawColumnCell
    OnGetCellParams = DBGridEh1GetCellParams
    OnKeyDown = DBGridEh1KeyDown
    OnKeyUp = DBGridEh1KeyUp
    OnMouseUp = DBGridEh1MouseUp
    Columns = <
      item
        EditButtons = <>
        FieldName = 'no'
        Footers = <>
        ReadOnly = True
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
        Title.TitleButton = True
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
        Title.TitleButton = True
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
        STFilter.DataField = 'vneseno'
        Title.Caption = #1044#1072#1090#1072' '#1080#1079#1084#1077#1085#1077#1085#1080#1103' '#1053'./'#1056'.'
        Title.TitleButton = True
        Visible = False
        Width = 80
      end
      item
        EditButtons = <>
        FieldName = 'prim'
        Footers = <>
        STFilter.DataField = 'prim'
        Title.Caption = #1055#1088#1080#1084#1077#1095#1072#1085#1080#1077
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
  object DBNavigator1: TDBNavigator
    Left = 16
    Top = 506
    Width = 259
    Height = 25
    DataSource = DataSource1
    VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbPost, nbCancel, nbRefresh]
    Anchors = [akLeft, akBottom]
    TabOrder = 0
    OnClick = DBNavigator1Click
  end
  object Edit1: TEdit
    Left = 632
    Top = 12
    Width = 121
    Height = 21
    Anchors = [akTop, akRight]
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnKeyDown = Edit1KeyDown
  end
  object Button1: TButton
    Left = 760
    Top = 9
    Width = 121
    Height = 25
    Anchors = [akTop, akRight]
    Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100' '#1092#1080#1083#1100#1090#1088
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 888
    Top = 9
    Width = 121
    Height = 25
    Anchors = [akTop, akRight]
    Caption = #1059#1073#1088#1072#1090#1100' '#1092#1080#1083#1100#1090#1088#1099
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 936
    Top = 508
    Width = 75
    Height = 25
    Anchors = [akRight, akBottom]
    Caption = #1055#1077#1095#1072#1090#1100
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnClick = Button3Click
  end
  object Edit2: TEdit
    Left = 64
    Top = 12
    Width = 49
    Height = 21
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    OnKeyDown = Edit3KeyDown
  end
  object Button4: TButton
    Left = 288
    Top = 506
    Width = 185
    Height = 25
    Anchors = [akLeft, akBottom]
    Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1089' '#1072#1088#1093#1080#1074#1085#1099#1084#1080' '#1079#1072#1087#1080#1089#1103#1084#1080
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 616
    Top = 506
    Width = 129
    Height = 25
    Anchors = [akLeft, akBottom]
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1096#1080#1092#1088
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 480
    Top = 506
    Width = 129
    Height = 25
    Anchors = [akLeft, akBottom]
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100' '#1096#1080#1092#1088
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
    OnClick = Button6Click
  end
  object ADOQuery1: TADOQuery
    Connection = auth.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from instrum where (flag<>3);'
      '')
    Left = 48
    Top = 104
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
    Top = 104
  end
  object MemTableEh1: TMemTableEh
    FetchAllOnOpen = True
    Params = <>
    DataDriver = DataSetDriverEh1
    BeforeEdit = MemTableEh1BeforeEdit
    AfterEdit = MemTableEh1AfterEdit
    BeforePost = MemTableEh1BeforePost
    AfterPost = MemTableEh1AfterPost
    AfterCancel = MemTableEh1AfterPost
    OnCalcFields = MemTableEh1CalcFields
    Left = 112
    Top = 104
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
    Top = 104
  end
  object PrintDBGridEh1: TPrintDBGridEh
    DBGridEh = DBGridEh1
    Options = [pghFitGridToPageWidth, pghRowAutoStretch]
    PageFooter.Font.Charset = DEFAULT_CHARSET
    PageFooter.Font.Color = clWindowText
    PageFooter.Font.Height = -11
    PageFooter.Font.Name = 'MS Sans Serif'
    PageFooter.Font.Style = []
    PageHeader.Font.Charset = DEFAULT_CHARSET
    PageHeader.Font.Color = clWindowText
    PageHeader.Font.Height = -11
    PageHeader.Font.Name = 'MS Sans Serif'
    PageHeader.Font.Style = []
    Units = MM
    Left = 904
    Top = 504
  end
  object PrintDialog1: TPrintDialog
    Left = 872
    Top = 504
  end
end
