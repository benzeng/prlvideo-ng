
int _xmlThrDefLoadExtDtdDefaultValue(int v)

{
  int iVar1;
  
  _xmlMutexLock(DAT_1023134a8);
  iVar1 = DAT_1023134b8;
  DAT_1023134b8 = v;
  _xmlMutexUnlock(DAT_1023134a8);
  return iVar1;
}

