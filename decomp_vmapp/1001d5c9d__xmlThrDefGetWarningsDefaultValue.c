
int _xmlThrDefGetWarningsDefaultValue(int v)

{
  int iVar1;
  
  _xmlMutexLock(DAT_1011b8728);
  iVar1 = DAT_101111370;
  DAT_101111370 = v;
  _xmlMutexUnlock(DAT_1011b8728);
  return iVar1;
}

