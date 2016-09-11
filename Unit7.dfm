object karty: Tkarty
  Left = 274
  Top = 165
  Width = 977
  Height = 566
  Caption = #1050#1072#1088#1090#1099' '#1079#1072#1084#1077#1085#1099
  Color = clBtnFace
  Constraints.MinHeight = 400
  Constraints.MinWidth = 975
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnResize = FormResize
  DesignSize = (
    961
    528)
  PixelsPerInch = 96
  TextHeight = 13
  object Label3: TLabel
    Left = 16
    Top = 16
    Width = 32
    Height = 13
    Caption = #1064#1080#1092#1088':'
  end
  object DBGridEh1: TDBGridEh
    Left = 8
    Top = 40
    Width = 945
    Height = 449
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
    Options = [dgEditing, dgTitles, dgIndicator, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit]
    OptionsEh = [dghFixed3D, dghHighlightFocus, dghClearSelection, dghAutoSortMarking, dghMultiSortMarking, dghEnterAsTab, dghRowHighlight, dghDialogFind, dghColumnResize, dghExtendVertLines]
    RowDetailPanel.Color = clBtnFace
    SortLocal = True
    STFilter.Local = True
    STFilter.Visible = True
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    UseMultiTitle = True
    VertScrollBar.VisibleMode = sbAlwaysShowEh
    OnDrawColumnCell = DBGridEh1DrawColumnCell
    OnMouseDown = DBGridEh1MouseDown
    OnMouseUp = DBGridEh1MouseUp
    Columns = <
      item
        Alignment = taLeftJustify
        EditButtons = <>
        FieldName = 'npp'
        Footers = <>
        STFilter.Visible = False
        Title.Caption = #8470' '#1087'/'#1087
        Width = 30
      end
      item
        Alignment = taLeftJustify
        EditButtons = <>
        FieldName = 'num_kart'
        Footers = <>
        HideDuplicates = True
        STFilter.DataField = 'num_kart'
        Title.Caption = #1053#1086#1084#1077#1088' '#1082#1072#1088#1090#1099' '#1079#1072#1084#1077#1085#1099
        Title.TitleButton = True
        Width = 55
      end
      item
        EditButtons = <>
        FieldName = 'shifr'
        Footers = <>
        STFilter.DataField = 'shifr'
        Title.Caption = #1064#1080#1092#1088' '#1056#1048
        Title.TitleButton = True
        Width = 100
      end
      item
        EditButtons = <>
        FieldName = 'chex'
        Footers = <>
        STFilter.DataField = 'chex'
        Title.Caption = #1062#1077#1093' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1100
        Title.TitleButton = True
        Width = 75
      end
      item
        Alignment = taLeftJustify
        EditButtons = <>
        FieldName = 'kol_ri'
        Footers = <>
        STFilter.DataField = 'kol_ri'
        Title.Caption = #1050#1086#1083'-'#1074#1086' '#1056#1048' '#1087#1086' '#1082#1072#1088#1090#1077' '#1079#1072#1084#1077#1085#1099
        Title.TitleButton = True
        Width = 60
      end
      item
        EditButtons = <>
        FieldName = 'mat_kd'
        Footers = <>
        STFilter.DataField = 'mat_kd'
        Title.Caption = #1052#1072#1090#1077#1088#1080#1072#1083' '#1056#1048' '#1087#1086' '#1050#1044
        Title.TitleButton = True
        Width = 100
      end
      item
        EditButtons = <>
        FieldName = 'mat_kart'
        Footers = <>
        STFilter.DataField = 'mat_kart'
        Title.Caption = #1052#1072#1090#1077#1088#1080#1072#1083' '#1056#1048' '#1087#1086' '#1082#1072#1088#1090#1077' '#1079#1072#1084#1077#1085#1099
        Title.TitleButton = True
        Width = 100
      end
      item
        Alignment = taLeftJustify
        EditButtons = <>
        FieldName = 'kol_soglas'
        Footers = <>
        STFilter.DataField = 'kol_soglas'
        Title.Caption = #1057#1086#1075#1083#1072#1089#1086#1074#1072#1085#1085#1086#1077' '#1082#1086#1083'-'#1074#1086' '#1056#1048
        Title.TitleButton = True
        Width = 85
      end
      item
        EditButtons = <>
        FieldName = 'family'
        Footers = <>
        STFilter.DataField = 'family'
        Title.Caption = #1055#1088#1080#1084#1077#1095#1072#1085#1080#1077
        Title.TitleButton = True
        Width = 70
      end
      item
        EditButtons = <>
        FieldName = 'data_ri'
        Footers = <>
        STFilter.DataField = 'data_ri'
        Title.Caption = #1044#1072#1090#1072' '#1087#1077#1088#1077#1076#1072#1095#1080' '#1056#1048' '#1094#1077#1093#1086#1084' 17 '#1085#1072' '#1062#1048#1057
        Title.TitleButton = True
        Width = 100
      end
      item
        EditButtons = <>
        FieldName = 'rezult'
        Footers = <>
        STFilter.DataField = 'rezult'
        Title.Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090' '#1101#1082#1089#1087#1083#1091#1072#1090#1072#1094#1080#1080' '#1056#1048' '#1074' '#1094#1077#1093#1077
        Title.TitleButton = True
        Width = 125
      end>
    object RowDetailData: TRowDetailPanelControlEh
    end
  end
  object DBNavigator1: TDBNavigator
    Left = 16
    Top = 496
    Width = 288
    Height = 25
    DataSource = DataSource1
    VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbInsert, nbDelete, nbPost, nbCancel, nbRefresh]
    Anchors = [akLeft, akBottom]
    TabOrder = 1
    OnClick = DBNavigator1Click
  end
  object Edit3: TEdit
    Left = 56
    Top = 12
    Width = 105
    Height = 21
    TabOrder = 2
    OnKeyDown = Edit3KeyDown
  end
  object Button1: TButton
    Left = 695
    Top = 9
    Width = 121
    Height = 25
    Anchors = [akTop, akRight]
    Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100' '#1092#1080#1083#1100#1090#1088
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 823
    Top = 9
    Width = 121
    Height = 25
    Anchors = [akTop, akRight]
    Caption = #1059#1073#1088#1072#1090#1100' '#1092#1080#1083#1100#1090#1088
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 862
    Top = 496
    Width = 83
    Height = 25
    Anchors = [akRight, akBottom]
    Caption = #1055#1077#1095#1072#1090#1100
    TabOrder = 5
    Visible = False
    OnClick = Button3Click
  end
  object ADOQuery1: TADOQuery
    Connection = auth.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from karty order by id;')
    Left = 144
    Top = 264
  end
  object DataSource1: TDataSource
    DataSet = MemTableEh1
    Left = 240
    Top = 264
  end
  object DataSetDriverEh1: TDataSetDriverEh
    ProviderDataSet = ADOQuery1
    Left = 176
    Top = 264
  end
  object MemTableEh1: TMemTableEh
    FetchAllOnOpen = True
    Params = <>
    DataDriver = DataSetDriverEh1
    BeforeInsert = MemTableEh1BeforeInsert
    AfterInsert = MemTableEh1AfterInsert
    BeforePost = MemTableEh1BeforePost
    OnCalcFields = MemTableEh1CalcFields
    Left = 208
    Top = 264
    object MemTableEh1id: TAutoIncField
      FieldName = 'id'
    end
    object MemTableEh1num_kart: TIntegerField
      FieldName = 'num_kart'
    end
    object MemTableEh1shifr: TWideStringField
      FieldName = 'shifr'
      Size = 25
    end
    object MemTableEh1chex: TWideStringField
      FieldName = 'chex'
      Size = 6
    end
    object MemTableEh1kol_ri: TIntegerField
      FieldName = 'kol_ri'
    end
    object MemTableEh1mat_kd: TWideStringField
      FieldName = 'mat_kd'
      Size = 30
    end
    object MemTableEh1mat_kart: TWideStringField
      FieldName = 'mat_kart'
      Size = 30
    end
    object MemTableEh1kol_soglas: TIntegerField
      FieldName = 'kol_soglas'
    end
    object MemTableEh1data_ri: TDateTimeField
      FieldName = 'data_ri'
    end
    object MemTableEh1rezult: TWideStringField
      FieldName = 'rezult'
      Size = 50
    end
    object MemTableEh1npp: TIntegerField
      FieldKind = fkCalculated
      FieldName = 'npp'
      Calculated = True
    end
    object MemTableEh1family: TWideStringField
      FieldName = 'family'
    end
  end
  object PrintDBGridEh1: TPrintDBGridEh
    DBGridEh = DBGridEh1
    Options = [pghFitGridToPageWidth]
    Page.BottomMargin = 1
    Page.LeftMargin = 1
    Page.RightMargin = 1
    Page.TopMargin = 1
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
    Title.Strings = (
      #1042#1086#1089#1089#1090#1072#1085#1086#1074#1083#1077#1085#1080#1077)
    Units = MM
    Left = 680
    Top = 488
  end
  object PrintDialog1: TPrintDialog
    Left = 712
    Top = 488
  end
end
