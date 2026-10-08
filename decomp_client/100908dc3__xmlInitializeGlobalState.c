
/* WARNING: Enum "enum_2039": Some values do not have unique names */

void _xmlInitializeGlobalState(xmlGlobalStatePtr gs)

{
  if (DAT_1023134a8 == (xmlMutexPtr)0x0) {
    _xmlInitGlobals();
  }
  _xmlMutexLock(DAT_1023134a8);
  _initdocbDefaultSAXHandler(&gs->docbDefaultSAXHandler);
  _inithtmlDefaultSAXHandler(&gs->htmlDefaultSAXHandler);
  gs->oldXMLWDcompatibility = 0;
  gs->xmlBufferAllocScheme = DAT_102279454;
  gs->xmlDefaultBufferSize = DAT_10227945c;
  _initxmlDefaultSAXHandler(&gs->xmlDefaultSAXHandler,1);
  (gs->xmlDefaultSAXLocator).getPublicId = _xmlSAX2GetPublicId;
  (gs->xmlDefaultSAXLocator).getSystemId = _xmlSAX2GetSystemId;
  (gs->xmlDefaultSAXLocator).getLineNumber = _xmlSAX2GetLineNumber;
  (gs->xmlDefaultSAXLocator).getColumnNumber = _xmlSAX2GetColumnNumber;
  gs->xmlDoValidityCheckingDefaultValue = DAT_1023134b4;
  gs->xmlFree = (xmlFreeFunc)PTR__free_1021e18a0;
  gs->xmlMalloc = (xmlMallocFunc)PTR__malloc_1021e1c60;
  gs->xmlMallocAtomic = (xmlMallocFunc)PTR__malloc_1021e1c60;
  gs->xmlRealloc = (xmlReallocFunc)PTR__realloc_1021e1c98;
  gs->xmlMemStrdup = _xmlStrdup;
  gs->xmlGetWarningsDefaultValue = DAT_102279470;
  gs->xmlIndentTreeOutput = DAT_1022794d4;
  gs->xmlTreeIndentString = PTR_s__1022794e0;
  gs->xmlKeepBlanksDefaultValue = DAT_102279484;
  gs->xmlLineNumbersDefaultValue = DAT_1023134c0;
  gs->xmlLoadExtDtdDefaultValue = DAT_1023134b8;
  gs->xmlParserDebugEntities = DAT_1023134b0;
  gs->xmlParserVersion = "20622";
  gs->xmlPedanticParserDefaultValue = DAT_1023134bc;
  gs->xmlSaveNoEmptyTags = DAT_1023134f8;
  gs->xmlSubstituteEntitiesDefaultValue = DAT_1023134c4;
  gs->xmlGenericError = (xmlGenericErrorFunc)PTR__xmlGenericErrorDefaultFunc_1022794b8;
  gs->xmlStructuredError = DAT_1023134e8;
  gs->xmlGenericErrorContext = DAT_1023134f0;
  gs->xmlRegisterNodeDefaultValue = DAT_1023134c8;
  gs->xmlDeregisterNodeDefaultValue = DAT_1023134d0;
  gs->xmlParserInputBufferCreateFilenameValue = DAT_1023134d8;
  gs->xmlOutputBufferCreateFilenameValue = DAT_1023134e0;
  _memset(&gs->xmlLastError,0,0x58);
  _xmlMutexUnlock(DAT_1023134a8);
  return;
}

