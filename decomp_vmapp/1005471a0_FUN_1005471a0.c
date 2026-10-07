
long FUN_1005471a0(long param_1,undefined8 param_2,ulong *param_3,uint *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  *param_3 = uVar1;
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (uVar1 < uVar2) {
    uVar3 = (ulong)*param_4;
    if (uVar2 < uVar3 + uVar1) {
      uVar4 = (int)uVar2 - (int)uVar1;
      *param_4 = uVar4;
      uVar3 = (ulong)uVar4;
    }
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + uVar3;
    return *(long *)(param_1 + 8) + *param_3;
  }
  *param_3 = 0xffffffffffffffff;
  return 0;
}

