
int _xmlThrDefKeepBlanksDefaultValue(int v)

{
  int iVar1;
  
  _xmlMutexLock(DAT_1011b8728);
  iVar1 = DAT_101111384;
  DAT_101111384 = v;
  _xmlMutexUnlock(DAT_1011b8728);
  return iVar1;
}

