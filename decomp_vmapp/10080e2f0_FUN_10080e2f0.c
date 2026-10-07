
undefined4 FUN_10080e2f0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  lVar1 = FUN_10087e1f0(*(undefined8 *)(param_1 + 0x10),0x100);
  uVar2 = 0xffffffff;
  if (lVar1 != 0) {
    FUN_10087db60(lVar1,0x69,0,&local_c);
    uVar2 = local_c;
  }
  return uVar2;
}

