
xmlDeregisterNodeFunc _xmlThrDefDeregisterNodeDefault(xmlDeregisterNodeFunc func)

{
  xmlDeregisterNodeFunc pxVar1;
  
  _xmlMutexLock(DAT_1011b8728);
  pxVar1 = DAT_1011b8750;
  ___xmlRegisterCallbacks = 1;
  DAT_1011b8750 = func;
  _xmlMutexUnlock(DAT_1011b8728);
  return pxVar1;
}

