
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _xmlInitParser(void)

{
  xmlGenericErrorFunc *ppxVar1;
  
  if (DAT_102312488 == 0) {
    ppxVar1 = ___xmlGenericError();
    if ((*ppxVar1 == _xmlGenericErrorDefaultFunc) ||
       (ppxVar1 = ___xmlGenericError(), *ppxVar1 == (xmlGenericErrorFunc)0x0)) {
      _initGenericErrorDefaultFunc((xmlGenericErrorFunc *)0x0);
    }
    _xmlInitGlobals();
    _xmlInitThreads();
    _xmlInitMemory();
    _xmlInitCharEncodingHandlers();
    _xmlDefaultSAXHandlerInit();
    _xmlRegisterDefaultInputCallbacks();
    _xmlRegisterDefaultOutputCallbacks();
    _htmlInitAutoClose();
    _htmlDefaultSAXHandlerInit();
    _xmlXPathInit();
    DAT_102312488 = 1;
    return;
  }
  return;
}

