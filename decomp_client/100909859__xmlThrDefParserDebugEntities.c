
int _xmlThrDefParserDebugEntities(int v)

{
  int iVar1;
  
  _xmlMutexLock(DAT_1023134a8);
  iVar1 = DAT_1023134b0;
  DAT_1023134b0 = v;
  _xmlMutexUnlock(DAT_1023134a8);
  return iVar1;
}

