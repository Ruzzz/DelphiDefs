EN Links:
- http://docs.embarcadero.com/products/rad_studio/ See What's New
- https://stackoverflow.com/questions/8460037/list-of-delphi-language-features-and-version-in-which-they-were-introduced-depre
- http://docwiki.embarcadero.com/RADStudio/Berlin/en/Delphi_Compiler_Directives_(List)_Index
- http://docwiki.embarcadero.com/RADStudio/Berlin/en/Conditional_compilation_(Delphi)
- http://docwiki.embarcadero.com/RADStudio/Berlin/en/Compiler_Versions
- http://wiki.delphi-jedi.org/wiki/JEDI_Help:RTLFeatures
- https://github.com/jin-x/delphi-units/blob/master/DelphiVerDef7x/DelphiVerDef7x.inc
- https://github.com/project-jedi/jedi/blob/master/jedi.inc

RU Links:
- http://www.gunsmoker.ru/2013/05/modern-delphi.html
- http://www.interface.ru/home.asp?artId=6763  -  "Delphi 7 -> Delphi 2007"
- http://citforum.ru/programming/delphi/delphi2005/
- http://xlench.bget.ru/doku.php/delphi/classes/new-comps = "Нововведения по версиям Delphi"

RU:
- From System.pas comment: CompilerVersion can be tested in $IF expressions and should be used instead of testing for the VERxxx conditional define.
- Проверить {$IFDEF CONDITIONALEXPRESSIONS}. Также проверить для dpk
- Отказаться от {$IF CompilerVersion >= N} ?
- Использовать RtlVersion? Например {$IF RTLVersion >= 14.0} {$DEFINE HAS_ERROUTPUT} {$IFEND} 
- Использовать префиксы Has, Use, Is и т.д.?
- Использовать оба стиля WordWord и WORD_WORD?
- Использовать «общепринятые» сокращения?
  - Anon - Anonimous
  - Attr - Atribute
  - Ctor - Constructor
  - Dtor - Destructor
  - Dyn - Dynamic
  - Ext - Extended
  - Ident - Identificator
  - Init - Initialization
  - Intrin - Intrinsic
  - Lib - Library
  - Obj - Object
  - Op/Ops - Operation(s)
  - Prop - Property
  - Str - String
  - Var - Variable
