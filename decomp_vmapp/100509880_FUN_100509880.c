
bool FUN_100509880(undefined8 param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_1005098f0();
  if (lVar2 != 0) {
    iVar1 = _CFDataGetBytePtr(lVar2);
    _CFDataGetLength(lVar2);
    QByteArray::append(param_2,iVar1);
    _CFRelease(lVar2);
  }
  return lVar2 != 0;
}

