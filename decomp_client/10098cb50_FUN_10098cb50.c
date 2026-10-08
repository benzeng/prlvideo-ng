
undefined2 FUN_10098cb50(undefined8 param_1)

{
  char cVar1;
  undefined2 uVar2;
  ulong in_RAX;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  uVar3 = _CFNumberGetTypeID();
  lVar4 = FUN_10098c4a0(param_1,&cf_Temperature,uVar3);
  uVar2 = 0xffff;
  if (lVar4 != 0) {
    uStack_18 = uStack_18 & 0xffffffffffff;
    cVar1 = _CFNumberGetValue(lVar4,2,(long)&uStack_18 + 6);
    if (cVar1 != '\x01') {
      uStack_18 = CONCAT26(0xffff,(undefined6)uStack_18);
    }
    _CFRelease(lVar4);
    uVar2 = uStack_18._6_2_;
  }
  return uVar2;
}

