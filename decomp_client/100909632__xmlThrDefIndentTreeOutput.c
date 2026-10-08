
int _xmlThrDefIndentTreeOutput(int v)

{
  int iVar1;
  
  _xmlMutexLock(DAT_1023134a8);
  iVar1 = DAT_1022794d4;
  DAT_1022794d4 = v;
  _xmlMutexUnlock(DAT_1023134a8);
  return iVar1;
}

