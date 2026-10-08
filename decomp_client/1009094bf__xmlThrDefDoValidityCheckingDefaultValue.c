
int _xmlThrDefDoValidityCheckingDefaultValue(int v)

{
  int iVar1;
  
  _xmlMutexLock(DAT_1023134a8);
  iVar1 = DAT_1023134b4;
  DAT_1023134b4 = v;
  _xmlMutexUnlock(DAT_1023134a8);
  return iVar1;
}

