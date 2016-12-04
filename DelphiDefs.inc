{$DEFINE DelphiDefs_20161204}


{$IFDEF VER310}
  {$DEFINE IsDelphi}
  {$DEFINE Delphi101Berlin}
  {$DEFINE DELPHI_101BERLIN}
  {$DEFINE Delphi101BerlinUp}
  {$DEFINE DELPHI_101BERLIN_UP}
{$ENDIF}
{$IFDEF VER300}
  {$DEFINE IsDelphi}
  {$DEFINE Delphi10Seattle}
  {$DEFINE DELPHI_10SEATTLE}
  {$DEFINE Delphi10SeattleUp}
  {$DEFINE DELPHI_10SEATTLE_UP}
{$ENDIF}
{$IFDEF VER290}
  {$DEFINE IsDelphi}
  {$DEFINE DelphiXE8}
  {$DEFINE DELPHI_XE8}
  {$DEFINE DelphiXE8Up}
  {$DEFINE DELPHI_XE8_UP}
{$ENDIF}
{$IFDEF VER280}
  {$DEFINE IsDelphi}
  {$DEFINE DelphiXE7}
  {$DEFINE DELPHI_XE7}
  {$DEFINE DelphiXE7Up}
  {$DEFINE DELPHI_XE7_UP}
{$ENDIF}
{$IFDEF VER270}
  {$DEFINE IsDelphi}
  {$DEFINE DelphiXE6}
  {$DEFINE DELPHI_XE6}
  {$DEFINE DelphiXE6Up}
  {$DEFINE DELPHI_XE6_UP}
{$ENDIF}
{$IFDEF VER260}
  {$DEFINE IsDelphi}
  {$DEFINE DelphiXE5}
  {$DEFINE DELPHI_XE5}
  {$DEFINE DelphiXE5Up}
  {$DEFINE DELPHI_XE5_UP}
{$ENDIF}
{$IFDEF VER250}
  {$DEFINE IsDelphi}
  {$DEFINE DelphiXE4}
  {$DEFINE DELPHI_XE4}
  {$DEFINE DelphiXE4Up}
  {$DEFINE DELPHI_XE4_UP}
{$ENDIF}
{$IFDEF VER240}
  {$DEFINE IsDelphi}
  {$DEFINE DelphiXE3}
  {$DEFINE DELPHI_XE3}
  {$DEFINE DelphiXE3Up}
  {$DEFINE DELPHI_XE3_UP}
{$ENDIF}
{$IFDEF VER230}
  {$DEFINE IsDelphi}
  {$DEFINE DelphiXE2}
  {$DEFINE DELPHI_XE2}
  {$DEFINE DelphiXE2Up}
  {$DEFINE DELPHI_XE2_UP}
{$ENDIF}
{$IFDEF VER220}
  {$DEFINE IsDelphi}
  {$DEFINE DelphiXE}
  {$DEFINE DELPHI_XE}
  {$DEFINE DelphiXEUp}
  {$DEFINE DELPHI_XE_UP}
{$ENDIF}
{$IFDEF VER210}
  {$DEFINE IsDelphi}
  {$DEFINE Delphi2010}
  {$DEFINE DELPHI_2010}
  {$DEFINE Delphi2010Up}
  {$DEFINE DELPHI_2010_UP}
{$ENDIF}
{$IFDEF VER200}
  {$DEFINE IsDelphi}
  {$DEFINE Delphi2009}
  {$DEFINE DELPHI_2009}
  {$DEFINE Delphi2009Up}
  {$DEFINE DELPHI_2009_UP}
{$ENDIF}
{$IFDEF VER185}
  {$DEFINE IsDelphi}
  {$DEFINE Delphi2007}
  {$DEFINE DELPHI_2007}
  {$DEFINE Delphi2007Up}
  {$DEFINE DELPHI_2007_UP}
{$ENDIF}
{$IFDEF VER180}
  {$IFNDEF VER185}
    {$DEFINE IsDelphi}
    {$DEFINE Delphi2006}
    {$DEFINE DELPHI_2006}
    {$DEFINE Delphi2006Up}
    {$DEFINE DELPHI_2006_UP}
  {$ENDIF}
{$ENDIF}
{$IFDEF VER170}
  {$DEFINE IsDelphi}
  {$DEFINE Delphi2005}
  {$DEFINE DELPHI_2005}
  {$DEFINE Delphi2005Up}
  {$DEFINE DELPHI_2005_UP}
{$ENDIF}
{$IFDEF VER150}
  {$DEFINE IsDelphi}
  {$DEFINE Delphi7}
  {$DEFINE DELPHI_7}
  {$DEFINE Delphi7Up}
  {$DEFINE DELPHI_7_UP}
{$ENDIF}
{$IFDEF VER140}
  {$DEFINE IsDelphi}
  {$DEFINE Delphi6}
  {$DEFINE DELPHI_6}
  {$DEFINE Delphi6Up}
  {$DEFINE DELPHI_6_UP}
{$ENDIF}
{$IFDEF VER130}
  {$DEFINE IsDelphi}
  {$DEFINE Delphi5}
  {$DEFINE DELPHI_5}
  {$DEFINE Delphi5Up}
  {$DEFINE DELPHI_5_UP}
{$ENDIF}
{$IFDEF VER120}
  {$DEFINE IsDelphi}
  {$DEFINE Delphi4}
  {$DEFINE DELPHI_4}
  {$DEFINE Delphi4Up}
  {$DEFINE DELPHI_4_UP}
{$ENDIF}
{$IFDEF VER100}
  {$DEFINE IsDelphi}
  {$DEFINE Delphi3}
  {$DEFINE DELPHI_3}
  {$DEFINE Delphi3Up}
  {$DEFINE DELPHI_3_UP}
{$ENDIF}


{$IFDEF IsDelphi}
  {$DEFINE IS_DELPHI}
{$ELSE}  
  {$MESSAGE FATAL 'Unknown Delphi version'}
{$ENDIF}


{$IFDEF Delphi101BerlinUp}
  {$DEFINE Delphi10SeattleUp}
  {$DEFINE DELPHI_10SEATTLE_UP}
{$ENDIF}
{$IFDEF Delphi10SeattleUp}
  {$DEFINE DelphiXE8Up}
  {$DEFINE DELPHI_XE8_UP}
{$ENDIF}
{$IFDEF DelphiXE8Up}
  {$DEFINE DelphiXE7Up}
  {$DEFINE DELPHI_XE7_UP}
{$ENDIF}
{$IFDEF DelphiXE7Up}
  {$DEFINE DelphiXE6Up}
  {$DEFINE DELPHI_XE6_UP}
{$ENDIF}
{$IFDEF DelphiXE6Up}
  {$DEFINE DelphiXE5Up}
  {$DEFINE DELPHI_XE5_UP}
{$ENDIF}
{$IFDEF DelphiXE5Up}
  {$DEFINE DelphiXE4Up}
  {$DEFINE DELPHI_XE4_UP}
{$ENDIF}
{$IFDEF DelphiXE4Up}
  {$DEFINE DelphiXE3Up}
  {$DEFINE DELPHI_XE3_UP}
{$ENDIF}
{$IFDEF DelphiXE3Up}
  {$DEFINE DelphiXE2Up}
  {$DEFINE DELPHI_XE2_UP}
{$ENDIF}
{$IFDEF DelphiXE2Up}
  {$DEFINE DelphiXEUp}
  {$DEFINE DELPHI_XE_UP}
{$ENDIF}
{$IFDEF DelphiXEUp}
  {$DEFINE Delphi2010Up}
  {$DEFINE DELPHI_2010_UP}
{$ENDIF}
{$IFDEF Delphi2010Up}
  {$DEFINE Delphi2009Up}
  {$DEFINE DELPHI_2009_UP}
{$ENDIF}
{$IFDEF Delphi2009Up}
  {$DEFINE Delphi2007Up}
  {$DEFINE DELPHI_2007_UP}
{$ENDIF}
{$IFDEF Delphi2007Up}
  {$DEFINE Delphi2006Up}
  {$DEFINE DELPHI_2006_UP}
{$ENDIF}
{$IFDEF Delphi2006Up}
  {$DEFINE Delphi2005Up}
  {$DEFINE DELPHI_2005_UP}
{$ENDIF}
{$IFDEF Delphi2005Up}
  {$DEFINE Delphi7Up}
  {$DEFINE DELPHI_7_UP}
{$ENDIF}
{$IFDEF Delphi7Up}
  {$DEFINE Delphi6Up}
  {$DEFINE DELPHI_6_UP}
{$ENDIF}
{$IFDEF Delphi6Up}
  {$DEFINE Delphi5Up}
  {$DEFINE DELPHI_5_UP}
{$ENDIF}
{$IFDEF Delphi5Up}
  {$DEFINE Delphi4Up}
  {$DEFINE DELPHI_4_UP}
{$ENDIF}
{$IFDEF Delphi4Up}
  {$DEFINE Delphi3Up}
  {$DEFINE DELPHI_3_UP}
{$ENDIF}


// Android601
// ANDROID_6_01
//     Support for Android up to 6.01.
// HasAttrVolatile
// HasAttrWeak
// HasAttrRef
// HAS_ATTR_VOLATILE
// HAS_ATTR_WEAK
// HAS_ATTR_REF
//     Now all Delphi compilers supports "unsafe", "volatile" and "weak"
//     attributes.
// HasMobileUtf8String
// HAS_MOBILE_UTF8STRING
// HasMobileRawByteString
// HAS_MOBILE_RAWBYTESTRING
//     The string types UTF8String and RawByteString are now
//     supported on iOS and Android.
// HasExtended128
// HAS_EXTENDED128
//   The size of extended on OS X is now 16 bytes (128 bits).
// IsHelpersForbidPrivate
// IS_HELPERS_FORBID_PRIVATE
//     To enforce visibility semantics, class and record helpers
//     cannot access private members of the classes or records that they extend.
{$IFDEF Delphi101BerlinUp}
  {$DEFINE Delphi101BerlinUp}
  {$DEFINE DELPHI_101_BERLIN_UP}
  {$DEFINE Android601}
  {$DEFINE ANDROID_6_01}
  {$DEFINE HasAttrVolatile}  // See also DelphiXE4
  {$DEFINE HAS_ATTR_VOLATILE}
  {$DEFINE HasAttrWeak}
  {$DEFINE HAS_ATTR_WEAK}
  {$DEFINE HasAttrRef}
  {$DEFINE HAS_ATTR_REF}
  {$DEFINE HasMobileUtf8String}
  {$DEFINE HAS_MOBILE_UTF8STRING}
  {$DEFINE HasMobileRawByteString}
  {$DEFINE HAS_MOBILE_RAWBYTESTRING}
  {$IFDEF MACOS}
    {$DEFINE HasExtended128}
    {$DEFINE HAS_EXTENDED128}
  {$ENDIF}
  {$DEFINE IsHelpersForbidPrivate}
  {$DEFINE IS_HELPERS_FORBID_PRIVATE}
{$ENDIF}


// Android511
// ANDROID_5_11
//     Support for Android 5.1.1
// IOS84
// IOS_8_4
//     Support for iOS 8.4. Improved OSX exception handling.
{$IFDEF Delphi10SeattleUp}
  {$DEFINE Android511}
  {$DEFINE ANDROID_5_11}
  {$DEFINE IOS84}
  {$DEFINE IOS_8_4}
{$ENDIF}


// - Support for 64-bit iOS (use build-in "IOS" and "CPU64BITS").
//
// HasFixedInt
// HAS_FIXEDINT
//     FixedInt, FixedUInt types support.
// HasIOS64Long64
// HAS_IOS64_LONG64
//     Double size of LongWord and LongInt (64 bits) for 64-bit iOS platforms.
// UseUnitScopeInFullyNames
// USE_UNITSCOPE_IN_FULLYNAMES
//     Fully qualified names must now include the unit scope name.
{$IFDEF DelphiXE8Up}
  {$DEFINE HasFixedInt}
  {$DEFINE HAS_FIXEDINT}
  {$IFDEF IOS}
    {$IFDEF CPU64BITS}
      {$DEFINE HasIOS64Long64}
      {$DEFINE HAS_IOS64_LONG64}
    {$ENDIF}
  {$ENDIF}
  {$DEFINE UseUnitScopeInFullyNames}
  {$DEFINE USE_UNITSCOPE_IN_FULLYNAMES}
{$ENDIF}


// HasDynArrayExtOps
// HAS_DYNARRAY_EXT_OPS
//     Initialization can be done from declaration, assignation can be done
//     using constant array, additions for arrays, Insert and Delete
//     can specify position, Concat can work with arrays.
// HasParallelLib
// HAS_PARALLEL_LIB
//     Parallel Library added to the RTL.
// HasIsManagedType
// HasHasWeakRef
// HasGetTypeKind
// HasIsConstValue
// HAS_ISMANAGEDTYPE
// HAS_HASWEAKREF
// HAS_GETTYPEKIND
// HAS_ISCONSTVALUE
//     New compiler intrinsic routines (undocumented):
//     IsManagedType, HasWeakRef, GetTypeKind, IsConstValue.
{$IFDEF DelphiXE7Up}
  {$DEFINE HasDynArrayExtOps}
  {$DEFINE HAS_DYNARRAY_EXT_OPS}
  {$DEFINE HasParallelLib}
  {$DEFINE HAS_PARALLEL_LIB}
  {$DEFINE HasIsManagedType}  // TODO: Add Intrin (HasIntrinIsManagedType) ?
  {$DEFINE HAS_ISMANAGEDTYPE}
  {$DEFINE HasHasWeakRef}
  {$DEFINE HAS_HASWEAKREF}
  {$DEFINE HasGetTypeKind}
  {$DEFINE HAS_GETTYPEKIND}
  {$DEFINE HasIsConstValue}
  {$DEFINE HAS_ISCONSTVALUE}
{$ENDIF}


// HasMobileHPPEMIT
// HAS_MOBILE_HPPEMIT
//     You can now use {$HPPEMIT} directives for mobile apps for linking
//     and generating C++ namespace declarations:
//     {$HPPEMIT NOUSINGNAMESPACE}, {$HPPEMIT LINKUNIT}.
{$IFDEF DelphiXE6Up}
  {$DEFINE HasMobileHPPEMIT}
  {$DEFINE HAS_MOBILE_HPPEMIT}
{$ENDIF}


// - Android Support; needs device with ArmV6 + Neon or ArmV7 for deployment
//   introduces conditional define ANDROID.
//
// HasClassOpOverload
// HAS_CLASS_OP_OVERLOAD
//     Operator overloading for classes
//     (but only for the NextGen compiler: Android/iOS).
{$IFDEF DelphiXE5Up}
  {$IFDEF NEXTGEN}
    {$DEFINE HasClassOpOverload}
    {$DEFINE HAS_CLASS_OP_OVERLOAD}
  {$ENDIF}
{$ENDIF}


// - The following new conditionals are introduced/enabled in XE4:
//   CPUARM, EXTERNAL_LINKER, IOS, NEXTGEN, UNDERSCOREIMPORTNAME,
//   WEAKREF, WEAKINSTREF, WEAKINTREF.
// - Automatic Reference Counting. iOS compiler has a brand new memory
//   management model for Delphi. Use {$IFDEF AUTOREFCOUNT}.
// - Reintroduced support for iOS.
// - Before the XE4, $IF statements could only be terminated with $IFEND.
//   $IFDEF, $IFNDEF, $IFOPT directives could only be terminated with $ENDIF.
//   At XE4, this changed so that $ENDIF became an accepted terminator
//   for $IF, $IFDEF, $IFNDEF, and $IFOPT.
//
// HasAttrVolatile
// HAS_ATTR_VOLATILE
// HasAttrWeak
// HAS_ATTR_WEAK
// HasAttrRef
// HAS_ATTR_REF
//     Volatile, Weak and Ref attributes support
//     (you can use also build-in "WEAKREF" symbol).
// NoOldStrings
// NO_OLD_STRINGS
//     AnsiString, AnsiChar, PAnsiChar, WideString, PWideChar, OpenString,
//     ShortString are not supported in Delphi XE4 or above for iOS.
// HasExtendedCompatibility
// HAS_EXTENDEDCOMPATIBILITY
//     {$EXTENDEDCOMPATIBILITY ON/OFF} directive support.
{$IFDEF DelphiXE4Up}
  {$IFDEF AUTOREFCOUNT}
    {$DEFINE HasAttrVolatile}
    {$DEFINE HAS_ATTR_VOLATILE}
    {$DEFINE HasAttrWeak}
    {$DEFINE HAS_ATTR_WEAK}
    {$DEFINE HasAttrRef}
    {$DEFINE HAS_ATTR_REF}
  {$ENDIF}
  {$IFDEF IOS}
    {$DEFINE NoOldStrings}
    {$DEFINE NO_OLD_STRINGS}
  {$ENDIF}
  {$DEFINE HasExtendedCompatibility}
  {$DEFINE HAS_EXTENDEDCOMPATIBILITY}
{$ENDIF}


// - Removed support for iOS.
//
// HasRecordHelpersExt
// HAS_RECORD_HELPERS_EXT
//     Record helpers became more powerful by allowing to extend simple Delphi
//     types like strings, integers, enums, sets and alike).
//     The System.SysUtils unit implements a record named "TStringHelper"
//     which is actually a record helper for strings.
// HasIntrinAtomic
// HAS_INTRIN_ATOMIC
//     Atomic intrinsic functions:
//     AtomicExchange, AtomicIncrement, AtomicCmpExchange, AtomicDecrement.
// HasZeroBasedStrings
// HAS_ZERO_BASED_STRINGS
//     {$ZEROBASEDSTRINGS ON/OFF} directive support.
{$IFDEF DelphiXE3Up}
  {$DEFINE HasRecordHelpersExt}
  {$DEFINE HAS_RECORD_HELPERS_EXT}
  {$DEFINE HasIntrinAtomic}
  {$DEFINE HAS_INTRIN_ATOMIC}
  {$DEFINE HasZeroBasedStrings}  // TODO From DelphiXE4 ?
  {$DEFINE HAS_ZERO_BASED_STRINGS}
{$ENDIF}


// - Cross platform support for Mac OSX (32-bit) and iOS; Support for Win64.
// - New build-in defines: ALIGN_STACK, CPUX86, CPUX64, MACOS, MACOS32,
//   PC_MAPPED_EXCEPTIONS, PIC, WIN64.
//
// UseUnitScopeNames
// USE_UNIT_SCOPE_NAMES
//     Full unit scope names are now required in your "uses" clause.
//     Example: Winapi.Windows instead of Windows.
// HasCrossPlatformRTL
// HAS_CROSSPLATFORM_RTL
//     Modified RTL to support cross platform.
// HasPackedByteAlign
// HAS_PACKED_BYTEALIGN
//     Keyword "packed" now forces byte alignment of records
//     (pre XE2 it did not necessarily do this).
// IsExtended64
// IS_EXTENDED64
//     Extended Data Type is 10 bytes on Win32, but 8 (!) bytes on Win64.
// HasUnitSystemUITypes
// HAS_UNIT_SYSTEM_UITYPES
//     Unit System.UiTypes is available.
{$IFDEF DelphiXE2Up}
  {$DEFINE UseUnitScopeNames}
  {$DEFINE USE_UNIT_SCOPE_NAMES}
  {$DEFINE HasCrossPlatformRTL}
  {$DEFINE HAS_CROSSPLATFORM_RTL}
  {$DEFINE HasPackedByteAlign}
  {$DEFINE HAS_PACKED_BYTEALIGN}
  {$IFDEF WIN64}
    {$DEFINE IsExtended64}
    {$DEFINE IS_EXTENDED64}
  {$ENDIF}
  {$DEFINE HasUnitSystemUITypes}
  {$DEFINE HAS_UNIT_SYSTEM_UITYPES}
{$ENDIF}


// HasAlign16
// HAS_ALIGN16
//     New 16-byte value for the {$ALIGN} directive: {$A16}.
// HasCodeAlign
// HAS_CODEALIGN
//     New {$CODEALIGN} directive, this sets the starting address
//     for a procedure or function.
// HasStrongLinkTypes
// HAS_STRONGLINKTYPES
//     The {$STRONGLINKTYPES ON} directive support.
// HasRegExp
// HAS_REGEXP
//     Support for regular expressions.
// IsIngoreStringChecks
// IS_INGORE_STRINGCHECKS
//     The {$STRINGCHECKS} compiler directive is ignored in XE.
{$IFDEF DelphiXEUp}
  {$DEFINE HasAlign16}
  {$DEFINE HAS_ALIGN16}
  {$DEFINE HasCodeAlign}
  {$DEFINE HAS_CODEALIGN}
  {$DEFINE HasStrongLinkTypes}
  {$DEFINE HAS_STRONGLINKTYPES}
  {$DEFINE HasRegExp}
  {$DEFINE HAS_REGEXP}
  {$DEFINE IsIngoreStringChecks}
  {$DEFINE IS_INGORE_STRINGCHECKS}
{$ENDIF}


// HasEnhancedRTTI
// HAS_ENHANCED_RTTI
//     Enhanced Delphi RTTI (Run Time Type Information). Unit RTTI.pas.
// HasAttributes
// HAS_ATTRIBUTES
//     Attributes and TCustomAttribute support. Attributes are a way
//     of associating additional metadata information with a given type
//     or member of a type. They can be applied in many places,
//     the following code shows several of the places you can place attributes:
//     TODO Attributes examples
// HasDelayedLib
// HAS_DELAYED_LIB
//     New "delayed" directive indicates that an external library
//     such as a DLL is not to be loaded at declaration time
//     but is to wait until the first call to the method.
// HasClassCtor
// HAS_CLASS_CTOR
//     Class Constructors and Destructors.
// HasInterfaceSafeCast
// HAS_INTERFACE_SAFE_CAST
//     The "as" operator can be used to cast an interface reference back
//     to the object from which it was extracted. The "is" operator can be used
//     to verify whether an interface reference was extracted from
//     a certain class. Normal unsafe casting can be performed on an interface:
//     TObject(SomeInterface).
// HasUnitIOUtils
// HAS_UNIT_IOUTILS
//     Unit IOUtils.pas added.
{$IFDEF Delphi2010Up}
  {$DEFINE HasEnhancedRTTI}
  {$DEFINE HAS_ENHANCED_RTTI}
  {$DEFINE HasAttributes}
  {$DEFINE HAS_ATTRIBUTES}
  {$DEFINE HasDelayedLib}
  {$DEFINE HAS_DELAYED_LIB}
  {$DEFINE HasClassCtor}
  {$DEFINE HAS_CLASS_CTOR}
  {$DEFINE HasInterfaceSafeCast}
  {$DEFINE HAS_INTERFACE_SAFE_CAST}
  {$DEFINE HasUnitIOUtils}
  {$DEFINE HAS_UNIT_IOUTILS}
{$ENDIF}


// Unicode
//     Intrinsic type string now maps to UnicodeString
//     (use build-in "UNICODE" symbol). "Resourcestrings" as Widestrings.
//     Four new compiler warnings:
//       - W1057 Implicit string cast from '%s' to '%s'
//       - W1058 Implicit string cast with potential data loss from '%s' to '%s'
//       - W1059 Explicit string cast from '%s' to '%s'
//       - W1060 Explicit string cast with potential data loss from '%s' to '%s'
// HasIntrinDefault
// HAS_INTRIN_DEFAULT
//     New undocumented intrinsic function:
//     Default(T: Typeidentifier): value of T.
// HasGenerics
// HAS_GENERICS
//     Generics or generic types (also know as parametrized types),
//     allow you to define classes that don't specifically define
//     the type of certain data members.
// HasAnonMethods
// HAS_ANON_METHODS
//     Anonymous method is a procedure or function that does not have
//     a name associated with it.
// HasNestedExceptions
// HAS_NESTED_EXCEPTIONS
//     Support for nested exceptions and exception tracing.
//     http://eurekalog.blogspot.com.au/2010/05/new-exception-class-in-delphi-2009-and_05.html
// HasPointerMath
// HAS_POINTERMATH
//     Support for pointermath and a new compiler directive:
//     {$POINTERMATH ON|OFF}.
// HasExitParam
// HAS_EXIT_PARAM
//     The Exit function can take a parameter specifying a result.
// HasObjWithMonitor
// HAS_OBJ_WITH_MONITOR
//     TObject has a extra hidden pointer to TMonitor in addition
//     to its VMT pointer.
// HasDeprecatedWithText
// HAS_DEPRECATED_WITH_TEXT
//     The "deprecated" keyword can now have additional text.
// HasPngImage
// HAS_PNGIMAGE
//     Unit PngImage.pas exists
// HasUnitAnsiStrings
// HAS_UNIT_ANSISTRINGS
//     Unit AnsiStrings.pas exists
// HasUnitCharacter
// HAS_UNIT_CHARACTER
//     Unit Character.pas exists
{$IFDEF Delphi2009Up}
  // {$DEFINE Unicode}
  {$DEFINE HasIntrinDefault}
  {$DEFINE HAS_INTRIN_DEFAULT}
  {$DEFINE HasGenerics}
  {$DEFINE HAS_GENERICS}
  {$DEFINE HasAnonMethods}
  {$DEFINE HAS_ANON_METHODS}
  {$DEFINE HasNestedExceptions}
  {$DEFINE HAS_NESTED_EXCEPTIONS}
  {$DEFINE HasPointerMath}
  {$DEFINE HAS_POINTERMATH}
  {$DEFINE HasExitParam}
  {$DEFINE HAS_EXIT_PARAM}
  {$DEFINE HasObjWithMonitor}
  {$DEFINE HAS_OBJ_WITH_MONITOR}
  {$DEFINE HasDeprecatedWithText}
  {$DEFINE HAS_DEPRECATED_WITH_TEXT}
  {$DEFINE HasPngImage}
  {$DEFINE HAS_PNGIMAGE}
  {$DEFINE HasUnitAnsiStrings}
  {$DEFINE HAS_UNIT_ANSISTRINGS}
  {$DEFINE HasUnitCharacter}
  {$DEFINE HAS_UNIT_CHARACTER}
{$ENDIF}


// - No language changes that I know of. Note that Delphi 2007 is a non-breaking
//   release, DCU's from Delphi 2006 will work unchanged in Delphi 2007.
//
// HasMainFormOnTaskBar
// HAS_MAINFORMONTASKBAR
//     Has Application.MainFormOnTaskBar property.
// HasGifImg
// HAS_GIFIMG
//     Unit GifImg.pas exists
{$IFDEF Delphi2007Up}
  {$DEFINE HasMainFormOnTaskBar}
  {$DEFINE HAS_MAINFORMONTASKBAR}
  {$DEFINE HasGifImg}
  {$DEFINE HAS_GIFIMG}
{$ENDIF}


// HasRecordMethods
// HAS_RECORD_METHODS
//     Enhanced records (records with methods)
// HasOpOverload
// HAS_OP_OVERLOAD
//     Operator overloading
// HasClassVars
// HAS_CLASS_VARS
//     Added "class var"
// HasFastMM
// HAS_FASTMM
//     FastMM is the default memory manager
{$IFDEF Delphi2006Up}
  {$DEFINE HasRecordMethods}
  {$DEFINE HAS_RECORD_METHODS}
  {$DEFINE HasOpOverload}
  {$DEFINE HAS_OP_OVERLOAD}
  {$DEFINE HasClassVars}
  {$DEFINE HAS_CLASS_VARS}
  {$DEFINE HasFastMM}
  {$DEFINE HAS_FASTMM}
{$ENDIF}


// HasForIn
// HAS_FOR_IN
//     For ... in loops
// HasInline
// HAS_INLINE
//     "inline" keyword
// HasDynArrayInit
// HAS_DYNARRAY_INIT
//     Dynamic arrays initialization: Arr := TDynArray.Create(1, 2, 3)
// HasNestedTypes
// HAS_NESTED_TYPES
//     Nested types, constants and vars
// HasClassProp
// HAS_CLASS_PROP
//     "class property" support
// HasUnsafe
// HAS_UNSAFE
//     "unsafe" keyword
// HasUnicodeIdents
// HAS_UNICODE_IDENTS
//     Unicode identifiers (non-Latin letters in names)
// HasUsesWildcards
// HAS_USES_WILDCARDS
//     Wildcard in uses statement allowed
// HasRegion
// HAS_REGION
//     {$REGION}/{$ENDREGION} directives
// HasUnitWideStrUtils
// HAS_UNIT_WIDESTRUTILS
//     Unit WideStrUtils.pas exists
// HasUnitHTTPProd
// HAS_UNIT_HTTPPROD
//     Unit HTTPProd.pas exists
//
// New features of Delphi 2006 but practically work in Delphi 2005 too.
//
// HasClassHelpers
// HAS_CLASS_HELPERS
//     Class helpers.
// HasStatic
// HAS_STATIC
//     "static" methods and properties
// HasStrict
// HAS_STRICT
//     "strict" private/protected visibility keyword
// HasSealed
// HAS_SEALED
//     "sealed" keyword for classes
// HasFinal
// HAS_FINAL
//     "final" keyword for virtual methods
// HasAbstractClasses
// HAS_ABSTRACT_CLASSES
//     "abstract" keyword for classes
// HasArrayPropOverload
// HAS_ARRAY_PROP_OVERLOAD
//     Default array properties overload
// HasMethodInfo
// HAS_METHODINFO
//     {$METHODINFO} directive
{$IFDEF Delphi2005Up}
  {$DEFINE HasForIn}
  {$DEFINE HAS_FOR_IN}
  {$DEFINE HasInline}
  {$DEFINE HAS_INLINE}
  {$DEFINE HasDynArrayInit}
  {$DEFINE HAS_DYNARRAY_INIT}
  {$DEFINE HasNestedTypes}
  {$DEFINE HAS_NESTED_TYPES}
  {$DEFINE HasClassProp}
  {$DEFINE HAS_CLASS_PROP}
  {$DEFINE HasUnsafe}
  {$DEFINE HAS_UNSAFE}
  {$DEFINE HasUnicodeIdents}
  {$DEFINE HAS_UNICODE_IDENTS}
  {$DEFINE HasUsesWildcards}
  {$DEFINE HAS_USES_WILDCARDS}
  {$DEFINE HasRegion}
  {$DEFINE HAS_REGION}
  {$DEFINE HasUnitWideStrUtils}
  {$DEFINE HAS_UNIT_WIDESTRUTILS}
  {$DEFINE HasUnitHTTPProd}
  {$DEFINE HAS_UNIT_HTTPPROD}
  // New features of Delphi 2006 but practically work in Delphi 2005 too.
  {$DEFINE HasClassHelpers}
  {$DEFINE HAS_CLASS_HELPERS}
  {$DEFINE HasStatic}
  {$DEFINE HAS_STATIC}
  {$DEFINE HasStrict}
  {$DEFINE HAS_STRICT}
  {$DEFINE HasSealed}
  {$DEFINE HAS_SEALED}
  {$DEFINE HasFinal}
  {$DEFINE HAS_FINAL}
  {$DEFINE HasAbstractClasses}
  {$DEFINE HAS_ABSTRACT_CLASSES}
  {$DEFINE HasArrayPropOverload}
  {$DEFINE HAS_ARRAY_PROP_OVERLOAD}
  {$DEFINE HasMethodInfo}
  {$DEFINE HAS_METHODINFO}
{$ENDIF}


// HasWarnUnsafe
// HAS_WARN_UNSAFE
//     {$WARN UNSAFE_TYPE ON}, {$WARN UNSAFE_CODE ON}, {$WARN UNSAFE_CAST ON}
//     Disabled by default.
// HasFormatSettings
// HAS_FORMAT_SETTINGS
//     Overloads of routines that format and parse numbers, date-time values,
//     and currency using a TFormatSettings structure.
{$IFDEF Delphi7Up}
  {$DEFINE HasWarnUnsafe}
  {$DEFINE HAS_WARN_UNSAFE}
  {$DEFINE HasFormatSettings}
  {$DEFINE HAS_FORMAT_SETTINGS}
{$ENDIF}


// HasExperimental
// HAS_EXPERIMENTAL
//     "experimental" keyword
// HasDeprecated
// HAS_DEPRECATED
//     "deprecated" keyword
{$IFDEF Delphi6Up}
  {$DEFINE HasExperimental}
  {$DEFINE HAS_EXPERIMENTAL}
  {$DEFINE HasDeprecated}
  {$DEFINE HAS_DEPRECATED}
{$ENDIF}
