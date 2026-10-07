
int _xmlThrDefPedanticParserDefaultValue(int v)

{
  int iVar1;
  
  _xmlMutexLock(DAT_1011b8728);
  iVar1 = DAT_1011b873c;
  DAT_1011b873c = v;
  _xmlMutexUnlock(DAT_1011b8728);
  return iVar1;
}

