
int _xmlThrDefGetWarningsDefaultValue(int v)

{
  int iVar1;
  
  _xmlMutexLock(DAT_1023134a8);
  iVar1 = DAT_102279470;
  DAT_102279470 = v;
  _xmlMutexUnlock(DAT_1023134a8);
  return iVar1;
}

