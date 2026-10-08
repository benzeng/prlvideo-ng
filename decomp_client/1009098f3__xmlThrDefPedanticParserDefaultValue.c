
int _xmlThrDefPedanticParserDefaultValue(int v)

{
  int iVar1;
  
  _xmlMutexLock(DAT_1023134a8);
  iVar1 = DAT_1023134bc;
  DAT_1023134bc = v;
  _xmlMutexUnlock(DAT_1023134a8);
  return iVar1;
}

