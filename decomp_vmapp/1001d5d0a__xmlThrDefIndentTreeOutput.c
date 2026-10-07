
int _xmlThrDefIndentTreeOutput(int v)

{
  int iVar1;
  
  _xmlMutexLock(DAT_1011b8728);
  iVar1 = DAT_1011113d4;
  DAT_1011113d4 = v;
  _xmlMutexUnlock(DAT_1011b8728);
  return iVar1;
}

