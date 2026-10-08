
xmlDeregisterNodeFunc _xmlThrDefDeregisterNodeDefault(xmlDeregisterNodeFunc func)

{
  xmlDeregisterNodeFunc pxVar1;
  
  _xmlMutexLock(DAT_1023134a8);
  pxVar1 = DAT_1023134d0;
  ___xmlRegisterCallbacks = 1;
  DAT_1023134d0 = func;
  _xmlMutexUnlock(DAT_1023134a8);
  return pxVar1;
}

