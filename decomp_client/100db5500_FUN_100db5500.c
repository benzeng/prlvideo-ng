
undefined1  [16] FUN_100db5500(long param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = (ulong)DAT_1023119b8 / (ulong)DAT_1023119b0;
  auVar2._1_7_ = (int7)(uVar1 >> 8);
  auVar2[0] = (uint)uVar1 <= *(uint *)(*(long *)(param_1 + 0x50) + 0x14);
  auVar2._8_8_ = (ulong)DAT_1023119b8 % (ulong)DAT_1023119b0;
  return auVar2;
}

