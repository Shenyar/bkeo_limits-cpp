object remont: Tremont
  Left = 264
  Top = 176
  Width = 977
  Height = 566
  Caption = #1042#1086#1089#1089#1090#1072#1085#1086#1074#1083#1077#1085#1080#1077
  Color = clBtnFace
  Constraints.MinHeight = 400
  Constraints.MinWidth = 970
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
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
    Width = 36
    Height = 13
    Caption = #1062#1077#1093' '#8470':'
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
    OptionsEh = [dghFixed3D, dghHighlightFocus, dghClearSelection, dghAutoSortMarking, dghMultiSortMarking, dghEnterAsTab, dghDialogFind, dghColumnResize, dghExtendVertLines]
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
    OnDrawColumnCell = DBGridEh1DrawColumnCell
    Columns = <
      item
        EditButtons = <>
        FieldName = 'number'
        Footers = <>
        STFilter.Visible = False
        Title.Caption = #8470' '#1087'/'#1087
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
        Width = 45
      end
      item
        EditButtons = <>
        FieldName = 'shifr_sto'
        Footers = <>
        STFilter.DataField = 'shifr_sto'
        Title.Caption = #1064#1080#1092#1088' '#1087#1086#1076#1083#1077#1078#1072#1097#1080#1093' '#1074#1086#1089#1089#1090#1072#1085#1086#1074#1083#1077#1085#1080#1102'|'#1057#1058#1054
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'MS Sans Serif'
        Title.Font.Style = []
        Title.TitleButton = True
        Width = 70
      end
      item
        EditButtons = <>
        FieldName = 'shifr_ri'
        Footers = <>
        STFilter.DataField = 'shifr_ri'
        Title.Caption = #1064#1080#1092#1088' '#1087#1086#1076#1083#1077#1078#1072#1097#1080#1093' '#1074#1086#1089#1089#1090#1072#1085#1086#1074#1083#1077#1085#1080#1102'|'#1056#1048
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -11
        Title.Font.Name = 'MS Sans Serif'
        Title.Font.Style = []
        Title.TitleButton = True
        Width = 70
      end
      item
        EditButtons = <>
        FieldName = 'naim'
        Footers = <>
        STFilter.DataField = 'naim'
        Title.Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077
        Title.TitleButton = True
        Width = 50
      end
      item
        EditButtons = <>
        FieldName = 'kd_sto'
        Footers = <>
        STFilter.DataField = 'kd_sto'
        Title.Caption = #1053#1072#1083#1080#1095#1080#1077' '#1050#1044' '#1085#1072' '#1074#1086#1089#1089#1090#1072#1085#1072#1074#1083#1080#1074#1072#1077#1084#1099#1077'|'#1057#1058#1054
        Width = 35
      end
      item
        EditButtons = <>
        FieldName = 'kd_ri'
        Footers = <>
        STFilter.DataField = 'kd_ri'
        Title.Caption = #1053#1072#1083#1080#1095#1080#1077' '#1050#1044' '#1085#1072' '#1074#1086#1089#1089#1090#1072#1085#1072#1074#1083#1080#1074#1072#1077#1084#1099#1077'|'#1056#1048
        Width = 35
      end
      item
        EditButtons = <>
        FieldName = 'shifrrem_sto'
        Footers = <>
        STFilter.DataField = 'shifrrem_sto'
        Title.Caption = #1064#1080#1092#1088' '#1074#1086#1089#1089#1090#1072#1085#1086#1074#1083#1077#1085#1085#1099#1093'|'#1057#1058#1054
        Width = 70
      end
      item
        EditButtons = <>
        FieldName = 'shifrrem_ri'
        Footers = <>
        STFilter.DataField = 'shifrrem_ri'
        Title.Caption = #1064#1080#1092#1088' '#1074#1086#1089#1089#1090#1072#1085#1086#1074#1083#1077#1085#1085#1099#1093'|'#1056#1048
        Width = 70
      end
      item
        EditButtons = <>
        FieldName = 'vo_sto'
        Footers = <>
        STFilter.DataField = 'vo_sto'
        Title.Caption = #1053#1072#1083#1080#1095#1080#1077' '#1074' '#1042#1054' '#1074#1086#1089#1089#1090#1072#1085#1072#1074#1083#1080#1074#1072#1077#1084#1086#1075#1086'|'#1057#1058#1054
        Width = 35
      end
      item
        EditButtons = <>
        FieldName = 'vo_ri'
        Footers = <>
        STFilter.DataField = 'vo_ri'
        Title.Caption = #1053#1072#1083#1080#1095#1080#1077' '#1074' '#1042#1054' '#1074#1086#1089#1089#1090#1072#1085#1072#1074#1083#1080#1074#1072#1077#1084#1086#1075#1086'|'#1056#1048
        Width = 35
      end
      item
        EditButtons = <>
        FieldName = 'normdo_sto'
        Footers = <>
        STFilter.DataField = 'normdo_sto'
        Title.Caption = #1053#1086#1088#1084#1099' '#1088#1072#1089#1093#1086#1076#1072' '#1074#1086#1089#1089#1090#1072#1085#1072#1074#1083#1080#1074#1072#1077#1084#1099#1093'|'#1057#1058#1054
        Width = 55
      end
      item
        EditButtons = <>
        FieldName = 'normdo_ri'
        Footers = <>
        STFilter.DataField = 'normdo_ri'
        Title.Caption = #1053#1086#1088#1084#1099' '#1088#1072#1089#1093#1086#1076#1072' '#1074#1086#1089#1089#1090#1072#1085#1072#1074#1083#1080#1074#1072#1077#1084#1099#1093'|'#1056#1048
        Width = 55
      end
      item
        EditButtons = <>
        FieldName = 'normaft_sto'
        Footers = <>
        STFilter.DataField = 'normaft_sto'
        Title.Caption = #1053#1086#1088#1084#1099' '#1088#1072#1089#1093#1086#1076#1072' '#1074#1086#1089#1089#1090#1072#1085#1086#1074#1083#1077#1085#1085#1086#1075#1086'|'#1057#1058#1054
        Width = 55
      end
      item
        EditButtons = <>
        FieldName = 'normaft_ri'
        Footers = <>
        STFilter.DataField = 'normaft_ri'
        Title.Caption = #1053#1086#1088#1084#1099' '#1088#1072#1089#1093#1086#1076#1072' '#1074#1086#1089#1089#1090#1072#1085#1086#1074#1083#1077#1085#1085#1086#1075#1086'|'#1056#1048
        Width = 55
      end
      item
        EditButtons = <>
        FieldName = 'date_sto'
        Footers = <>
        STFilter.DataField = 'date_sto'
        Title.Caption = #1044#1072#1090#1072' '#1088#1072#1089#1095#1077#1090#1072' '#1085'/'#1088#1072#1089#1093#1086#1076#1072' '#1074#1086#1089#1089#1090#1072#1085#1086#1074#1083#1077#1085#1085#1086#1075#1086'|'#1057#1058#1054
        Title.TitleButton = True
        Width = 65
      end
      item
        EditButtons = <>
        FieldName = 'date_ri'
        Footers = <>
        STFilter.DataField = 'date_ri'
        Title.Caption = #1044#1072#1090#1072' '#1088#1072#1089#1095#1077#1090#1072' '#1085'/'#1088#1072#1089#1093#1086#1076#1072' '#1074#1086#1089#1089#1090#1072#1085#1086#1074#1083#1077#1085#1085#1086#1075#1086'|'#1056#1048
        Title.TitleButton = True
        Width = 65
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
    Width = 49
    Height = 21
    TabOrder = 2
    OnKeyDown = Edit3KeyDown
  end
  object Button1: TButton
    Left = 697
    Top = 9
    Width = 121
    Height = 25
    Anchors = [akTop, akRight]
    Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100' '#1092#1080#1083#1100#1090#1088
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 825
    Top = 9
    Width = 121
    Height = 25
    Anchors = [akTop, akRight]
    Caption = #1059#1073#1088#1072#1090#1100' '#1092#1080#1083#1100#1090#1088
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 864
    Top = 496
    Width = 83
    Height = 25
    Anchors = [akRight, akBottom]
    Caption = #1055#1077#1095#1072#1090#1100
    TabOrder = 5
    OnClick = Button3Click
  end
  object ADOQuery1: TADOQuery
    Connection = auth.ADOConnection1
    Parameters = <>
    SQL.Strings = (
      'select * from remont;')
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
    Params = <>
    DataDriver = DataSetDriverEh1
    OnCalcFields = MemTableEh1CalcFields
    Left = 208
    Top = 264
    object MemTableEh1id: TAutoIncField
      FieldName = 'id'
    end
    object MemTableEh1chex: TWideStringField
      FieldName = 'chex'
      Size = 5
    end
    object MemTableEh1shifr_sto: TWideStringField
      DisplayWidth = 30
      FieldName = 'shifr_sto'
      Size = 30
    end
    object MemTableEh1shifr_ri: TWideStringField
      DisplayWidth = 30
      FieldName = 'shifr_ri'
      Size = 30
    end
    object MemTableEh1naim: TWideStringField
      FieldName = 'naim'
    end
    object MemTableEh1kd_sto: TWideStringField
      FieldName = 'kd_sto'
      Size = 3
    end
    object MemTableEh1kd_ri: TWideStringField
      FieldName = 'kd_ri'
      Size = 3
    end
    object MemTableEh1vo_sto: TWideStringField
      FieldName = 'vo_sto'
      Size = 7
    end
    object MemTableEh1vo_ri: TWideStringField
      FieldName = 'vo_ri'
      Size = 7
    end
    object MemTableEh1normdo_sto: TWideStringField
      FieldName = 'normdo_sto'
      Size = 11
    end
    object MemTableEh1normdo_ri: TWideStringField
      FieldName = 'normdo_ri'
      Size = 11
    end
    object MemTableEh1normaft_sto: TWideStringField
      FieldName = 'normaft_sto'
      Size = 11
    end
    object MemTableEh1normaft_ri: TWideStringField
      FieldName = 'normaft_ri'
      Size = 11
    end
    object MemTableEh1date_sto: TDateTimeField
      FieldName = 'date_sto'
    end
    object MemTableEh1date_ri: TDateTimeField
      FieldName = 'date_ri'
    end
    object MemTableEh1number: TIntegerField
      FieldKind = fkCalculated
      FieldName = 'number'
      Calculated = True
    end
    object MemTableEh1shifrrem_sto: TWideStringField
      DisplayWidth = 30
      FieldName = 'shifrrem_sto'
      Size = 30
    end
    object MemTableEh1shifrrem_ri: TWideStringField
      DisplayWidth = 30
      FieldName = 'shifrrem_ri'
      Size = 30
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
