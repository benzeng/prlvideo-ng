
int _xmlThrDefDefaultBufferSize(int v)

{
  int iVar1;
  
  _xmlMutexLock(DAT_1023134a8);
  iVar1 = DAT_10227945c;
  DAT_10227945c = v;
  _xmlMutexUnlock(DAT_1023134a8);
  return iVar1;
}

