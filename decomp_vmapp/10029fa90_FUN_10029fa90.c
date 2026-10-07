
undefined1  [16] FUN_10029fa90(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(uint *)(param_1 + 200);
  if (uVar1 != *(uint *)(param_1 + 0x10)) {
    param_3 = (ulong)(*(uint *)(param_1 + 0x10) * (int)param_2);
    param_2 = param_3 / uVar1;
    param_3 = param_3 % (ulong)uVar1;
  }
  auVar2._0_8_ = param_2 & 0xffffffff;
  auVar2._8_8_ = param_3;
  return auVar2;
}

