
uint FUN_1006a5c60(long param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0x80000003;
  if (((ulong)*(uint *)(param_1 + 0x18124) * *(long *)(param_1 + 0x1810c) != 0) &&
     (*(long *)(param_1 + 0x18104) != 0)) {
    uVar1 = FUN_100699c50(param_1,param_2,param_3);
    uVar2 = FUN_100699c50(param_1,param_2,param_3);
    if (-1 < (int)uVar1) {
      uVar1 = (int)uVar2 >> 0x1f & uVar2;
    }
  }
  return uVar1;
}

