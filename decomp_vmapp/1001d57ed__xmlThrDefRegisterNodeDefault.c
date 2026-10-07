
xmlRegisterNodeFunc _xmlThrDefRegisterNodeDefault(xmlRegisterNodeFunc func)

{
  xmlRegisterNodeFunc pxVar1;
  
  _xmlMutexLock(DAT_1011b8728);
  pxVar1 = DAT_1011b8748;
  ___xmlRegisterCallbacks = 1;
  DAT_1011b8748 = func;
  _xmlMutexUnlock(DAT_1011b8728);
  return pxVar1;
}

