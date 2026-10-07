
int _xmlThrDefParserDebugEntities(int v)

{
  int iVar1;
  
  _xmlMutexLock(DAT_1011b8728);
  iVar1 = DAT_1011b8730;
  DAT_1011b8730 = v;
  _xmlMutexUnlock(DAT_1011b8728);
  return iVar1;
}

