
void FUN_100c73d60(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  if ((ulong)*(uint *)(param_1 + 0x5c) != 0) {
    uVar3 = 0x40 - (ulong)*(uint *)(param_1 + 0x5c);
    if (param_3 < uVar3) {
      uVar3 = param_3;
    }
    FUN_100bfb620(param_1,param_2,uVar3);
    param_2 = param_2 + uVar3;
    param_3 = param_3 - uVar3;
  }
  uVar3 = param_3 & 0x3f;
  param_3 = param_3 - uVar3;
  if (param_3 != 0) {
    _sha1_block_data_order(param_1,param_2,param_3 >> 6);
    param_2 = param_2 + param_3;
    iVar1 = (int)(param_3 >> 0x1d) + *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar1;
    uVar4 = (int)param_3 * 8;
    uVar2 = *(int *)(param_1 + 0x14) + uVar4;
    *(uint *)(param_1 + 0x14) = uVar2;
    if (uVar2 < uVar4) {
      *(int *)(param_1 + 0x18) = iVar1 + 1;
    }
  }
  if (uVar3 != 0) {
    FUN_100bfb620(param_1,param_2,uVar3);
    return;
  }
  return;
}

