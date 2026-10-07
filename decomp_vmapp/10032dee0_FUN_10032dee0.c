
undefined1  [16] FUN_10032dee0(long param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = (ulong)param_2;
  uVar2 = uVar1;
  if ((*(ushort *)(param_1 + 0xb0) & 7) == 1) {
    uVar2 = uVar1 / *(uint *)(param_1 + 0x1c);
    param_3 = uVar1 % (ulong)*(uint *)(param_1 + 0x1c);
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = uVar2;
  return auVar3;
}

