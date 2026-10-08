
bool FUN_10098ca10(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  
  uVar2 = _CFBooleanGetTypeID();
  lVar3 = FUN_10098c4a0(param_1,&cf_BatteryInstalled,uVar2);
  bVar4 = false;
  if (lVar3 != 0) {
    cVar1 = _CFBooleanGetValue(lVar3);
    _CFRelease(lVar3);
    bVar4 = cVar1 == '\x01';
  }
  return bVar4;
}

