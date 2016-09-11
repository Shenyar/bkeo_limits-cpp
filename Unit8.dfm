object zamena: Tzamena
  Left = 311
  Top = 182
  Width = 766
  Height = 546
  Caption = #1047#1072#1084#1077#1085#1072' '#1084#1072#1090#1077#1088#1080#1072#1083#1072
  Color = clBtnFace
  Constraints.MinHeight = 300
  Constraints.MinWidth = 750
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnResize = FormResize
  OnShow = FormShow
  DesignSize = (
    750
    508)
  PixelsPerInch = 96
  TextHeight = 13
  object Label3: TLabel
    Left = 16
    Top = 16
    Width = 32
    Height = 13
    Caption = #1064#1080#1092#1088':'
  end
  object Edit3: TEdit
    Left = 56
    Top = 12
    Width = 105
    Height = 21
    TabOrder = 0
    OnKeyDown = Edit3KeyDown
  end
  object Button1: TButton
    Left = 482
    Top = 9
    Width = 121
    Height = 25
    Anchors = [akTop, akRight]
    Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100' '#1092#1080#1083#1100#1090#1088
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 610
    Top = 9
    Width = 121
    Height = 25
    Anchors = [akTop, akRight]
    Caption = #1059#1073#1088#1072#1090#1100' '#1092#1080#1083#1100#1090#1088
    TabOrder = 2
    OnClick = Button2Click
  end
  object DBNavigator1: TDBNavigator
    Left = 16
    Top = 479
    Width = 288
    Height = 25
    DataSource = DataSource1
    VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbInsert, nbDelete, nbPost, nbCancel, nbRefresh]
    Anchors = [akLeft, akBottom]
    TabOrder = 3
  end
  object DBGridEh1: TDBGridEh
    Left = 8
    Top = 40
    Width = 735
    Height = 433
    Anchors = [akLeft, akTop, akRight, akBottom]
    DataGrouping.GroupLevels = <>
    DataGrouping.DefaultStateExpanded = True
    DataSource = DataSource1
    EditActions = [geaCopyEh, geaPasteEh]
    Flat = False
    FooterColor = clWindow
    FooterFont.Charset = DEFAULT_CHARSET
    FooterFont.Color = clWindowText
    FooterFont.Height = -11
    FooterFont.Name = 'MS Sans Serif'
    FooterFont.Style = []
    FooterRowCount = 1
    Options = [dgEditing, dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgMultiSelect]
    OptionsEh = [dghFixed3D, dghHighlightFocus, dghClearSelection, dghEnterAsTab, dghDialogFind, dghColumnResize, dghColumnMove, dghExtendVertLines]
    RowDetailPanel.Color = clBtnFace
    RowHeight = 4
    RowLines = 1
    SumList.Active = True
    TabOrder = 4
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    UseMultiTitle = True
    Columns = <
      item
        EditButtons = <>
        FieldName = 'no'
        Footers = <>
        Width = 40
      end
      item
        EditButtons = <>
        FieldName = 'shifr'
        Footer.Value = #1042#1089#1077#1075#1086':'
        Footer.ValueType = fvtStaticText
        Footers = <>
        Width = 100
      end
      item
        EditButtons = <>
        FieldName = 'chex'
        Footer.FieldName = 'chex'
        Footer.ValueType = fvtSum
        Footers = <>
        Width = 100
      end
      item
        EditButtons = <>
        FieldName = 'obrmat'
        Footers = <>
        Width = 100
      end
      item
        EditButtons = <>
        FieldName = 'mat_ch'
        Footers = <>
        Width = 100
      end
      item
        EditButtons = <>
        FieldName = 'mat_zam'
        Footers = <>
        Width = 100
      end
      item
        EditButtons = <>
        FieldName = 'prim'
        Footers = <>
        Width = 100
      end
      item
        EditButtons = <>
        FieldName = 'group'
        Footers = <>
        Visible = False
      end>
    object RowDetailData: TRowDetailPanelControlEh
    end
  end
  object Button3: TButton
    Left = 664
    Top = 480
    Width = 75
    Height = 25
    Anchors = [akRight, akBottom]
    Caption = #1055#1077#1095#1072#1090#1100
    TabOrder = 5
    OnClick = Button3Click
  end
  object MemTableEh1: TMemTableEh
    FieldDefs = <
      item
        Name = 'id'
        DataType = ftAutoInc
      end
      item
        Name = 'shifr'
        DataType = ftWideString
        Size = 20
      end
      item
        Name = 'obrmat'
        DataType = ftWideString
        Size = 40
      end
      item
        Name = 'mat_ch'
        DataType = ftWideString
        Size = 40
      end
      item
        Name = 'mat_zam'
        DataType = ftWideString
        Size = 40
      end
      item
        Name = 'group'
        DataType = ftWideString
        Size = 20
      end
      item
        Name = 'prim'
        DataType = ftWideString
        Size = 50
      end
      item
        Name = 'chex'
        DataType = ftInteger
      end>
    IndexDefs = <>
    Params = <>
    DataDriver = DataSetDriverEh1
    StoreDefs = True
    OnCalcFields = MemTableEh1CalcFields
    Left = 56
    Top = 192
    object MemTableEh1id: TAutoIncField
      FieldName = 'id'
    end
    object MemTableEh1shifr: TWideStringField
      FieldName = 'shifr'
    end
    object MemTableEh1obrmat: TWideStringField
      FieldName = 'obrmat'
      Size = 40
    end
    object MemTableEh1mat_ch: TWideStringField
      FieldName = 'mat_ch'
      Size = 40
    end
    object MemTableEh1mat_zam: TWideStringField
      FieldName = 'mat_zam'
      Size = 40
    end
    object MemTableEh1group: TWideStringField
      FieldName = 'group'
    end
    object MemTableEh1no: TIntegerField
      FieldKind = fkCalculated
      FieldName = 'no'
      Calculated = True
    end
    object MemTableEh1prim: TWideStringField
      FieldName = 'prim'
      Size = 50
    end
    object MemTableEh1chex: TIntegerField
      FieldName = 'chex'
    end
  end
  object DataSetDriverEh1: TDataSetDriverEh
    ProviderDataSet = ADOQuery1
    Left = 88
    Top = 192
  end
  object DataSource1: TDataSource
    DataSet = MemTableEh1
    Left = 152
    Top = 192
  end
  object ADOQuery1: TADOQuery
    Connection = auth.ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'select * from zamena;')
    Left = 120
    Top = 192
    object ADOQuery1id: TAutoIncField
      FieldName = 'id'
      ReadOnly = True
    end
    object ADOQuery1shifr: TWideStringField
      FieldName = 'shifr'
    end
    object ADOQuery1obrmat: TWideStringField
      FieldName = 'obrmat'
      Size = 40
    end
    object ADOQuery1mat_ch: TWideStringField
      FieldName = 'mat_ch'
      Size = 40
    end
    object ADOQuery1mat_zam: TWideStringField
      FieldName = 'mat_zam'
      Size = 40
    end
    object ADOQuery1group: TWideStringField
      FieldName = 'group'
    end
    object ADOQuery1prim: TWideStringField
      FieldName = 'prim'
      Size = 50
    end
    object ADOQuery1chex: TIntegerField
      FieldName = 'chex'
    end
  end
  object PrintDBGridEh1: TPrintDBGridEh
    DBGridEh = DBGridEh1
    Options = [pghFitGridToPageWidth, pghFitingByColWidths]
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
    Left = 632
    Top = 472
    BeforeGridText_Data = {
      7B5C727466315C616E73695C616E7369637067313235315C64656666305C6465
      666C616E67313034397B5C666F6E7474626C7B5C66305C666E696C5C66636861
      72736574323034204D532053616E732053657269663B7D7B5C66315C666E696C
      204D532053616E732053657269663B7D7D0D0A5C766965776B696E64345C7563
      315C706172645C71725C6C616E67313035385C66305C667331365C2763375C27
      65325C2765655C2766305C2765655C2766325C2765645C2762335C276539205C
      2765315C2762335C276561205F5F5F5F5F5F5F5F5F0D0A5C706172205C276532
      5C2762335C27653420225F5F5F22205F5F5F2032305F5F5C2766302E0D0A5C70
      6172205C706172645C71635C2763325C2762325C2763345C2763655C2763635C
      2763655C2764315C2764325C276232205C2763665C2764305C276365205C2763
      325C2763305C2763645C2764325C2763305C2763360D0A5C706172205C6C616E
      67313034395C6631200D0A5C706172207D0D0A00}
    AfterGridText_Data = {
      7B5C727466315C616E73695C616E7369637067313235315C64656666305C6465
      666C616E67313034397B5C666F6E7474626C7B5C66305C666E696C5C66636861
      72736574323034204D532053616E732053657269663B7D7B5C66315C666E696C
      204D532053616E732053657269663B7D7D0D0A5C766965776B696E64345C7563
      315C706172645C6C616E67313035385C66305C66733136200D0A5C706172205C
      2763645C2765305C2766665C2765325C2765645C2762335C2766315C2766325C
      276663205C2766325C2765355C2766315C2766325C276530205F5F5F5F205C27
      65665C2765355C2766305C2765355C2765325C2762335C2766305C2765385C27
      6532205F5F5F5F0D0A5C706172205C706172645C6669323530305C6673385C27
      63665C2762325C2763310D0A5C706172205C706172645C667331365C2763345C
      2765655C2766315C2766325C2765655C2765325C2762335C2766305C2765645C
      2762335C2766315C2766325C276663205C2765325C2765655C276632205F5F5F
      5F5F0D0A5C706172205C2763655C2765335C2765655C2765645C2764635C6C61
      6E67313034395C6631200D0A5C706172207D0D0A00}
  end
end
