
undefined4 FUN_100a4dc30(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = _CFUUIDCreate(0);
  auVar3 = _CFUUIDGetUUIDBytes(lVar2);
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar3;
  uVar1 = FUN_100a4a120(param_1 + 0x10,param_2,0x14);
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  return uVar1;
}

