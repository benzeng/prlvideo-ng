
int _xmlThrDefDefaultBufferSize(int v)

{
  int iVar1;
  
  _xmlMutexLock(DAT_1011b8728);
  iVar1 = DAT_10111135c;
  DAT_10111135c = v;
  _xmlMutexUnlock(DAT_1011b8728);
  return iVar1;
}

