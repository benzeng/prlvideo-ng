
undefined4 FUN_100be3ab0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  lVar1 = FUN_100c593f0(*(undefined8 *)(param_1 + 0x18),0x100);
  uVar2 = 0xffffffff;
  if (lVar1 != 0) {
    FUN_100c58d60(lVar1,0x69,0,&local_c);
    uVar2 = local_c;
  }
  return uVar2;
}

