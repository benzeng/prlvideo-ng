
int _xmlThrDefLoadExtDtdDefaultValue(int v)

{
  int iVar1;
  
  _xmlMutexLock(DAT_1011b8728);
  iVar1 = DAT_1011b8738;
  DAT_1011b8738 = v;
  _xmlMutexUnlock(DAT_1011b8728);
  return iVar1;
}

