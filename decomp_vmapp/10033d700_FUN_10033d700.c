
void FUN_10033d700(long param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_3 != 0) {
    bVar3 = (param_3 & 1) != 0;
    if (bVar3) {
      *(undefined4 *)(param_1 + 0xabc0 + (ulong)param_2 * 4) = *param_4;
    }
    if (param_3 != 1) {
      param_4 = param_4 + (ulong)bVar3 + 1;
      uVar2 = param_2 + bVar3;
      iVar1 = (param_3 + 1) - (bVar3 + 1);
      param_2 = param_2 + bVar3 + 1;
      do {
        *(undefined4 *)(param_1 + 0xabc0 + (ulong)uVar2 * 4) = param_4[-1];
        *(undefined4 *)(param_1 + 0xabc0 + (ulong)param_2 * 4) = *param_4;
        param_4 = param_4 + 2;
        uVar2 = uVar2 + 2;
        param_2 = param_2 + 2;
        iVar1 = iVar1 + -2;
      } while (iVar1 != 0);
    }
  }
  *(ulong *)(param_1 + 0x188) =
       *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + 0x3048);
  return;
}

