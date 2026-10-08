
int _xmlThrDefKeepBlanksDefaultValue(int v)

{
  int iVar1;
  
  _xmlMutexLock(DAT_1023134a8);
  iVar1 = DAT_102279484;
  DAT_102279484 = v;
  _xmlMutexUnlock(DAT_1023134a8);
  return iVar1;
}

