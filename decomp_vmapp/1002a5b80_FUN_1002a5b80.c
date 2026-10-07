
uint FUN_1002a5b80(ulong *param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  *param_3 = 0;
  uVar1 = 0;
  if (param_2 < (uint)param_1[1]) {
    uVar3 = (uint)param_1[1] - (int)param_2;
    uVar2 = (ulong)(uint)((int)*param_1 + (int)param_2) & 0xfff;
    *param_3 = *(long *)((long)param_1 +
                        ((*param_1 & 0xfff) + param_2 >> 8 & 0xfffffffffffff0) + 0x20) + uVar2;
    uVar1 = 0x1000 - (int)uVar2;
    if (uVar3 <= uVar1) {
      uVar1 = uVar3;
    }
  }
  return uVar1;
}

