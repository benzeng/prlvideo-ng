
xmlRegisterNodeFunc _xmlThrDefRegisterNodeDefault(xmlRegisterNodeFunc func)

{
  xmlRegisterNodeFunc pxVar1;
  
  _xmlMutexLock(DAT_1023134a8);
  pxVar1 = DAT_1023134c8;
  ___xmlRegisterCallbacks = 1;
  DAT_1023134c8 = func;
  _xmlMutexUnlock(DAT_1023134a8);
  return pxVar1;
}

