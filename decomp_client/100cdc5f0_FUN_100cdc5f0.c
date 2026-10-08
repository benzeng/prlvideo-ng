
undefined1 FUN_100cdc5f0(undefined8 param_1)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  
  sVar2 = _CGEventGetIntegerValueField(param_1,10);
  iVar3 = _KBGetLayoutType((int)sVar2);
  uVar1 = 2;
  if (iVar3 != 0x4a495320) {
    uVar1 = iVar3 == 0x49534f20;
  }
  return uVar1;
}

