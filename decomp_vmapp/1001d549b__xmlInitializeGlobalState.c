
/* WARNING: Enum "enum_2039": Some values do not have unique names */

void _xmlInitializeGlobalState(xmlGlobalStatePtr gs)

{
  if (DAT_1011b8728 == (xmlMutexPtr)0x0) {
    _xmlInitGlobals();
  }
  _xmlMutexLock(DAT_1011b8728);
  _initdocbDefaultSAXHandler(&gs->docbDefaultSAXHandler);
  _inithtmlDefaultSAXHandler(&gs->htmlDefaultSAXHandler);
  gs->oldXMLWDcompatibility = 0;
  gs->xmlBufferAllocScheme = DAT_101111354;
  gs->xmlDefaultBufferSize = DAT_10111135c;
  _initxmlDefaultSAXHandler(&gs->xmlDefaultSAXHandler,1);
  (gs->xmlDefaultSAXLocator).getPublicId = _xmlSAX2GetPublicId;
  (gs->xmlDefaultSAXLocator).getSystemId = _xmlSAX2GetSystemId;
  (gs->xmlDefaultSAXLocator).getLineNumber = _xmlSAX2GetLineNumber;
  (gs->xmlDefaultSAXLocator).getColumnNumber = _xmlSAX2GetColumnNumber;
  gs->xmlDoValidityCheckingDefaultValue = DAT_1011b8734;
  gs->xmlFree = (xmlFreeFunc)PTR__free_100ba2378;
  gs->xmlMalloc = (xmlMallocFunc)PTR__malloc_100ba25d8;
  gs->xmlMallocAtomic = (xmlMallocFunc)PTR__malloc_100ba25d8;
  gs->xmlRealloc = (xmlReallocFunc)PTR__realloc_100ba2618;
  gs->xmlMemStrdup = _xmlStrdup;
  gs->xmlGetWarningsDefaultValue = DAT_101111370;
  gs->xmlIndentTreeOutput = DAT_1011113d4;
  gs->xmlTreeIndentString = PTR_s__1011113e0;
  gs->xmlKeepBlanksDefaultValue = DAT_101111384;
  gs->xmlLineNumbersDefaultValue = DAT_1011b8740;
  gs->xmlLoadExtDtdDefaultValue = DAT_1011b8738;
  gs->xmlParserDebugEntities = DAT_1011b8730;
  gs->xmlParserVersion = "20622";
  gs->xmlPedanticParserDefaultValue = DAT_1011b873c;
  gs->xmlSaveNoEmptyTags = DAT_1011b8778;
  gs->xmlSubstituteEntitiesDefaultValue = DAT_1011b8744;
  gs->xmlGenericError = (xmlGenericErrorFunc)PTR__xmlGenericErrorDefaultFunc_1011113b8;
  gs->xmlStructuredError = DAT_1011b8768;
  gs->xmlGenericErrorContext = DAT_1011b8770;
  gs->xmlRegisterNodeDefaultValue = DAT_1011b8748;
  gs->xmlDeregisterNodeDefaultValue = DAT_1011b8750;
  gs->xmlParserInputBufferCreateFilenameValue = DAT_1011b8758;
  gs->xmlOutputBufferCreateFilenameValue = DAT_1011b8760;
  _memset(&gs->xmlLastError,0,0x58);
  _xmlMutexUnlock(DAT_1011b8728);
  return;
}

