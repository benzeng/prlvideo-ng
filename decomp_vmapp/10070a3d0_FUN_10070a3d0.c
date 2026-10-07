
undefined1  [16] FUN_10070a3d0(long param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = (ulong)DAT_1011ccb28 / (ulong)DAT_1011ccb20;
  auVar2._1_7_ = (int7)(uVar1 >> 8);
  auVar2[0] = (uint)uVar1 <= *(uint *)(*(long *)(param_1 + 0x50) + 0x14);
  auVar2._8_8_ = (ulong)DAT_1011ccb28 % (ulong)DAT_1011ccb20;
  return auVar2;
}

