
int _xmlThrDefSaveNoEmptyTags(int v)

{
  int iVar1;
  
  _xmlMutexLock(DAT_1023134a8);
  iVar1 = DAT_1023134f8;
  DAT_1023134f8 = v;
  _xmlMutexUnlock(DAT_1023134a8);
  return iVar1;
}

